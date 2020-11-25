#include <iostream>
using namespace std;

int main()
{
    int number, table_range;

    cout << "Enter the number whose table you want to generate: ";
    cin >> number;

    cout << "Enter range for the multiplication table: ";
    cin >> table_range;
    
    for (int i = 1; i <= table_range; ++i) {
        cout << number << " * " << i << " = " << number * i << endl;
    }
    
    return 0;
}
