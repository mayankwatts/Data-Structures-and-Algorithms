#include <iostream>
using namespace std;

// n - number of rows given
void printPattern(int n){
	// Write your code here
    int m;
  int l=-n;
  
  if(n%2==1)
  {
      m=n/2+1;
    for(int i=1;i<=n;i++)
   { 
      
      
      if(i<=m)
      {
          l=l+n;
          
          for(int k=1;k<=n;k++)
          {
              l++;
              cout<<l<<" ";
          }
          
      }
      
      if(i>m)
      {  
         l=l-(2*n);
         
          for(int k=1;k<=n;k++)
          {
             l++;
             cout<<l<<" ";
     
             
          }
          
         l=l-n; 
      }
    
     cout<<endl;
   }
  }
  
  
  
  if(n%2==0)
  {
     m=n/2; 
   for(int i=1;i<=n;i++)
   { 
      
      
      if(i<=m)
      {
          l=l+n;
          
          for(int k=1;k<=n;k++)
          {
              l++;
              cout<<l<<" ";
          }
          
      }
      
      if(i>m)
      {
         
          for(int k=1;k<=n;k++)
          {
             l++;
             cout<<l<<" ";
             
             
          }
          l=l-(3*n);
          
      }
    
     cout<<endl;
   }
  }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
   return 0;
}
