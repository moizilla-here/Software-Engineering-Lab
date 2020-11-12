#include<iostream>
using namespace std;

int main()
{
	int a[] = {1,3,5,7,9,11,13,17,19,23};
	int array_size = (int)(sizeof(a)/sizeof(a[0]));

    int x = a[0];
	for(int i=1;i<array_size;i++)
	{
		if(x<a[i])
			x = a[i];
	}

    int max_val = x;
    
    int y = a[0];
    for(int i=1;i<array_size;i++)
	{
		if(y>a[i])
			y = a[i];
	}

    int min_val = y;


    cout<<"The maximum value is: "<<x<<'\n';
    cout<<"The minimum value is: "<<y<<'\n';
	
	return 0;
}