#include<iostream>
#include<conio.h>

using namespace std;

   int main()
    {
     int arr[5];
     int *p=arr;
     cout << "Enter the five numbers: " <<endl;
     cin >> *p;
     cin >> *(p+1); 
     cin >> *(p+2);
     cin >> *(p+3);
     cin >> *(p+4);
     cout<<"The numbers you entered are: " << endl;
     for(int i=0;i<5;i++)
        cout << arr[i] << endl;
     getch();

     return 0;
    }