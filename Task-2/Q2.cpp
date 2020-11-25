
#include <iostream>
#include<stdio.h>
#include <conio.h> 
using namespace std;

void most_occurred_number(int nums[])
{
  int max_count = 0;
  cout << "Most occurred number is ";
  for (int i=0; i<10; i++)
  {
   int count=1;
   for (int j=i+1;j<10;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }

  for (int i=0;i<10;i++)
  {
   int count=1;
   for (int j=i+1;j<10;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count)
       cout << nums[i] << endl;
  }
 }


int main()
{
    int numbers[10],i,biggest,smallest;
    cout << "ENTER TEN NUMBERS TO COMPARE\n";
    for(i=0;i<10;i++)
    {
        cout << "ENTER NUMBER : \n";
        cin >> numbers[i];
    }
    biggest=smallest=numbers[0];
    for(i=1;i<10;i++)
    {
        if(biggest<numbers[i])
            biggest=numbers[i];
        if(smallest>numbers[i])
            smallest=numbers[i];
    }
    cout << "The biggest number is " << biggest << endl;
    cout << "The smallest number is " << smallest << endl;
    most_occurred_number(numbers);

    return 0;
}