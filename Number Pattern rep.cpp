


void printPattern(int n){

	
  cin>>n;
  int p;
  p=2*n-1;
  for(int i=1;i<=p;i++)
  { int l=n;
      
      if(i<=n)
      {
          
          for(int k=1;k<=p;k++)
          {
              if(k>=i && k<=p-i+1)
              {
                  cout<<l<<" ";
              }
              
              if(k<i)
              {
                  cout<<l<<" ";
                  l--;
                  
              }
              if(k>p-i+1)
              {
                  l++;
                  cout<<l<<" ";
              }
          }
          
      }
      
      if(i>n)
      {
         
          for(int k=1;k<=p;k++)
          {
             
             if(k>=p-i+1 && k<i+1)
              {
                  cout<<l<<" ";
              }
              
              if(k<p-i+1)
              {
                  cout<<l<<" ";
                  l--;
                  
              }
              if(k>=i+1)
              {
                  l++;
                  cout<<l<<" ";
              } 
             
          }
          
          
      }
    
    cout<<endl;
  }


}
