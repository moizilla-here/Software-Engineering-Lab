#include <iostream> 
using namespace std; 
  
// Function to display the menu 
void menu() 
{ 
    cout << "Press 1 to add\n"; 
    cout << "Press 2 to subtract\n"; 
    cout << "Press 3 to multiply\n"; 
    cout << "Press 4 to divide\n"; 
    cout << "Press 5 to take modulus\n";
} 
  
// Function to calculate and display the result 
void result(int choice, int a, int b) 
{ 
  
    // Display the result 
    switch (choice) 
    { 
        case 1: { 
            cout << "Sum is " << (a + b) << "\n"; 
            break; 
        } 
        case 2: { 
            cout << "Difference is " << (a - b) << "\n"; 
            break; 
        } 
        case 3: { 
            cout << "Product is " << (a * b) << "\n"; 
            break; 
        } 
        case 4: { 
            cout << "Division is " << (a / b) << "\n"; 
            break; 
        } 
        case 5: { 
            cout << "Modulus is " <<  (a%b) << "\n"; 
            break; 
        }
        default: 
            printf("Wrong Input\n"); 
    } 
} 
  
int main() 
{ 
  
    // Get the two numbers 
  
    int choice, res, num1, num2, loop; 
    char cont;
    char y = 'y';
  
    do 
    {
        menu(); 
    
        // Enter the choice 
        cout << "Enter your choice:\n"; 
        cin >> choice;
        cout << "Choice is " << choice << endl; 

        
        cout << "Enter first number" << endl;
        cin >> num1;
        cout << "Enter second number" << endl;
        cin >> num2;

        result(choice, num1, num2);
        
        cout << "Do you wish to continue?" << endl;
        cout << "Press 'y' for yes or 'n' for no" << endl;
        cin >> cont;

        if (cont == y)
            loop = 1;
        else
        {
            loop = 0;
        }
    }

    while (loop == 1);
        


  
    return 0; 
} 