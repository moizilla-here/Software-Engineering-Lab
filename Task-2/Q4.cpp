#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num, rows, col, k;
    cout << "Enter the number of rows of pascal triangle you want: ";
    cin >> num;
    long array[100][100];

    for (rows = 0; rows < num; rows++)
    {
        for (col = 0; col < (num - rows - 1); col++)
            cout << " ";

        for (k = 0; k <= rows; k++)
        {
            if (k == 0 || k == rows)
            {
                array[rows][k] = 1;
                cout << array[rows][k];
            }
            else
            {
                array[rows][k] = (array[rows - 1][k - 1]) + (array[rows - 1][k]);
                cout << array[rows][k];
            }
        }
        cout << endl;
    }
    return 0;
}