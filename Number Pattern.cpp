#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  { 

    int l=i-1;
    int count=0;
    
    for(int j=1;j<=(2*i-1);j++)
    {
      count++;
      if(j==1)
      {
         for(int k=1;k<=(n-i);k++)
       {
        cout<<" ";
       }
      }
      
     if(count<=i)
      { l++;
          cout<<l;
      }
     
       
    }
    cout<<endl;
  }
  
   return 0; 
}




