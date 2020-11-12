#include <iostream>
using namespace std;


int main()
{   
    int option,a=1,b=1,c=1;
    cout<<"Enter ""1"" for AND truth table or ""2"" for OR truth table"<<endl;
    cin>>option;

	if(option==1)
    {
        cout<<"Truth table for AND operation\n";
        cout<<" n1 "<<" n2 "<< " n3 "<<"= result\n";
        for(int n1 =0;n1<=a;n1++)
        {
            for(int n2=0;n2<=b;n2++)
            {
                for(int n3=0;n3<=c;n3++)
                {
                    if (n1&n2&n3){cout<<" "<<n1<<"  "<<n2<<"  "<<n3<<" = "<<"1\n";}
                    else{cout<<" "<<n1<<"  "<<n2<<"  "<<n3<<" = "<<"0\n";}
                }
            }
        }
    }

    else if (option == 2)
    {
        cout<<"Truth table for OR operation\n";
        cout<<" n1 "<<" n2 "<< " n3 "<<"= result\n";
        for(int n1 =0;n1<=a;n1++)
        {
            for(int n2=0;n2<=b;n2++)
            {
                for(int n3=0;n3<=c;n3++)
                {
                    if (n1||n2||n3){cout<<" "<<n1<<"  "<<n2<<"  "<<n3<<" = "<<"1\n";}
                    else{cout<<" "<<n1<<"  "<<n2<<"  "<<n3<<" = "<<"0\n";}
                }
            }
        }
    }
    
    return 0;
}