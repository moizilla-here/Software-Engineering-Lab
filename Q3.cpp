#include<iostream>
using namespace std;
int main()
{
      int n1=0, n2=1, i, n, sum=0;
      cout<<"Total Terms: "; cin>>n;
      cout<<"Fibonacci Series: ";
  
      for(i=0 ; i<n ; i++)
     {  
               if(i <= 1)
      {
           sum=i;
                }
                else
                {
                      sum=n1 + n2;
             n1=n2;
                      n2=sum;  
                }
     cout<<sum<<" ";
      }  
    
   return 0;
}