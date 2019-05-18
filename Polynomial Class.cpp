class Polynomial {
  public :
    int *degCoeff; 
    int capacity;
  
  Polynomial(){
    capacity=5;
    degCoeff=new int[capacity];
    for(int i=0;i<capacity;i++){
      degCoeff[i]=0;
    }
  }
  
  Polynomial(Polynomial const &P1){
    
    if(P1.capacity==5){
      for (int i=0;i<capacity;i++){
          degCoeff[i]=P1.degCoeff[i];
      }
    }
  
    else{
      int* newarr=new int[P1.capacity];
      for(int i=0;i<P1.capacity;i++){
        newarr[i]=P1.degCoeff[i];
      }
      //delete [] degCoeff;
      capacity=P1.capacity;
      degCoeff=newarr;
    }  
  }
  
  
  void setCoefficient(int d,int coeff){
    
    if(d>=capacity){
      int k=capacity;
      while(k<=d){
        k*=2;
      }
      int* newarr=new int[k];
      for(int i=0;i<k;i++){
        newarr[i]=0;
      }
      for(int i=0;i<capacity;i++)
      {
        if(degCoeff[i]!=0)
          newarr[i]=degCoeff[i];
      } 
    // delete [] degCoeff;
      degCoeff=newarr;
      capacity = k;
      degCoeff[d]=coeff;
      
    }
    else
      degCoeff[d]=coeff;
    
  }
  
  Polynomial operator+(Polynomial P1){
    Polynomial P;
    int a,b;
    if(capacity>=P1.capacity){
      a=capacity;
      b=0;
    } 
    else{
      a=P1.capacity;
      b=1;
    }
      
    P.setCoefficient(a,0);
    int i,j=0;
    if(b==0){
      
      while(i<capacity && j<P1.capacity)
      {
        P.degCoeff[i]=degCoeff[i]+P1.degCoeff[j];
        i++;
        j++;
      }
      
      while(i<capacity)
      {
        P.degCoeff[i]=degCoeff[i];
        i++;
      }
    
    }
    
     if(b==1){
      
      while(i<capacity && j<P1.capacity)
      {
        P.degCoeff[j]=degCoeff[i]+P1.degCoeff[j];
        i++;
        j++;
      }
      
      while(j<P1.capacity)
      {
        P.degCoeff[j]=P1.degCoeff[j];
        j++;
      }
    
    }
    
   
    return P;
  }
  
    Polynomial operator-(Polynomial P1){
    
        Polynomial P;
    int a,b;
    if(capacity>=P1.capacity){
      a=capacity;
      b=0;
    } 
    else{
      a=P1.capacity;
      b=1;
    }
      
    P.setCoefficient(a,0);
    int i,j=0;
    if(b==0){
      
      while(i<P.capacity && j<P1.capacity)
      {
        P.degCoeff[i]=degCoeff[i]-P1.degCoeff[j];
        i++;
        j++;
      }
      
      while(i<P.capacity)
      {
        P.degCoeff[i]=degCoeff[i];
        i++;
      }
    
    }
    
     if(b==1){
      
      while(i<P.capacity && j<P1.capacity)
      {
        P.degCoeff[j]=degCoeff[i]-P1.degCoeff[j];
        i++;
        j++;
      }
      
      while(j<P1.capacity)
      {
        P.degCoeff[j]=-P1.degCoeff[j];
        j++;
      }
    
    }
      
      return P;
  }
  
  Polynomial operator*(Polynomial P1){
    Polynomial P;
    int a=capacity+P1.capacity;
    P.setCoefficient(a,0);
    for(int i=0;i<capacity;i++){
      for(int j=0;j<P1.capacity;j++){
        if(degCoeff[i]!=0 && P1.degCoeff[j]!=0){
          P.degCoeff[i+j]=degCoeff[i]*P1.degCoeff[j];
        }
            
      }
    }
    return P;
  }
  
  void operator=(Polynomial const &P){
    
    int* newarr=new int[P.capacity];
    for(int i=0;i<P.capacity;i++){
      newarr[i]=0;
    }
    
     for(int i=0;i<P.capacity;i++){
      if(P.degCoeff[i]!=0)
      {
        newarr[i]=P.degCoeff[i];
      }
    }
   //delete [] degCoeff;
    degCoeff=newarr;
    
  }
  
  void print(){
    for(int i=0;i<capacity;i++){
      if(degCoeff[i]!=0){
        cout<<degCoeff[i]<<"x"<<i<<" ";
      }
    }
  }
  
};

#include <vector>
#include <climits>
#include <iostream>
using namespace std;

int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    switch(choice){
            // Add
        case 1:
        {
            Polynomial result1 = first + second;
            result1.print();
            break;
        }
            // Subtract
        case 2 :
        {
            Polynomial result2 = first - second;
            result2.print();
            break;
        }
            // Multiply
        case 3 :
        {
            Polynomial result3 = first * second;
            result3.print();
            break;
        }
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
