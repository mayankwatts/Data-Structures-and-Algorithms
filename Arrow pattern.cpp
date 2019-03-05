#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  { int l;
  
      l=n/2+1;
      
      if(i<=l)
      {
          for(int k=1;k<i;k++)
          {
              cout<<" ";
          }
          
          for(int j=1;j<=i;j++)
          {
            cout<<"*";
            cout<<" ";  
          }
      }
      
      if(i>l)
      {
          for(int k=1;k<n-i+1;k++)
          {
              cout<<" ";
          }
          
          for(int j=1;j<=n-i+1;j++)
          {
            cout<<"*";
            cout<<" ";  
          }
      }
    
    cout<<endl;
  }
  
   return 0; 
}


