#include <iostream>
using namespace std;

int sort_assen(int arr[])
    {
        int i,j,temp;

        for(i=0;i<10;i++)
        {		
            for(j=i+1;j<10;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp  =arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }


int main()
{
	//array declaration
	int arr[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		cout<<"Enter element ["<<i+1<<"] ";
		cin>>arr[i];
	}
	
	
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<10;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	
    sort_assen(arr);

	cout<<"Sorted (Ascending Order) Array elements:"<<endl;
	for(i=0;i<10;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	
	return 0;
	
}