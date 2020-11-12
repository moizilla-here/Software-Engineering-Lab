#include <iostream>
using namespace std;

#define PI 3.14159

    int main()
    {
    	float diameter, area, circum;	
        cout<<" Input the diameter of the circle : ";
    	cin>>diameter;
	
		circum = PI*diameter;
		area = PI*(diameter*diameter)/4;
        cout<<" The area of the circle is : "<< area << endl;
        cout<<" The circumference of the circle is : "<< circum << endl;		
		
        cout << endl;
        return 0;
    }