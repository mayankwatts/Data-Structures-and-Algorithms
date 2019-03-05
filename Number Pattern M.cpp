#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  { 

    int l=i;
    int count=0;
    
    for(int j=1;j<=(2*i);j++)
    {
      count++;
      
     if(count<=i)
      { cout<<j;}
       
       if(j==i+1)
      {
         for(int k=1;k<=(2*(n-i));k++)
       {
        cout<<" ";
       }
      }
      
     
     if(count>i)
      { cout<<l;
	  l--;}
       
    }
    cout<<endl;
  }
  
   return 0; 
}


