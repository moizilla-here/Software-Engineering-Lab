#include<iostream>
#include<conio.h>
using namespace std;

int *sortArray(int *a, int b){
    int i,j;
    for(i=0;i<b;i++)
        for(j=i+1;j<b;j++)
            if(*(a+j)<*(a+i))
              {
                int temp=*(a+j);
                *(a+j)=*(a+i);
                *(a+i)=temp;
                }
   return a;
}

int main()
{
    int arr[]={4,32,16,95,102,43,91,9,55,23};
    
    cout << "Unsorted Array:" << endl;
    for(int i=0;i<10;i++)
    {
        cout<< arr[i] << " ";
    }
    int *a=sortArray(arr,10);
    cout << endl << "Sorted Array:" << endl;
    for(int i=0;i<10;i++)
    {
        cout<<*(a+i)<<" ";
    }
    return 0;
}
   

