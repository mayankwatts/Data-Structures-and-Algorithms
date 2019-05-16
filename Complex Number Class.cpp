class ComplexNumbers {
  private:
  int real;
  int imag;
  
  public:
  
  ComplexNumbers(int real,int imag)
  {
    this->real=real;
    this->imag=imag;
  }
  
  void print()
  {
    cout<<real<<" + i"<<imag;
  }
  
  void plus(ComplexNumbers const &c2)
  {
    real=real+c2.real;
    imag=imag+c2.imag;
  }
  
  void multiply(ComplexNumbers const &c2)
  {
    int a=(real*c2.real)-(imag*c2.imag);
   int b=(real*c2.imag)+(imag*c2.real);
    real=a;
    imag=b;
  }
  
    
};

using namespace std;
#include <bits/stdc++.h>

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}
