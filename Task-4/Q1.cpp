#include <iostream>
using namespace std;


class Rectangle
{
	private:
		float length;
		float bredth;

	public:
		Rectangle(float l, float w)
		{
			length = l;
			bredth = w;
		}
		
		float area()
		{
			return length * bredth;
		}
};

class Addition
{
	private:
		int num_1;
		int num_2;
	public:
		Addition(int m, int n)
		{
			num_1 = m;
			num_2 = n;
		}
		int addition()
		{
			return num_1 + num_2;
		}
};

class Complex_addition
{
	private:
		float real_part;
		float imaginary_part;
	public:
		Complex_addition
    (float x, float y)
		{
			real_part = x;
			imaginary_part = y;
		}
		Complex_addition operator +(Complex_addition & z)
		{
			Complex_addition result(real_part + z.real_part, imaginary_part + z.imaginary_part);
			return result;
		}
		void display()
		{
			cout << "Z = " << real_part << " + " << imaginary_part << "i" << endl;
		}
};
		

int main()
{
	float a = 5.0;
	float b = 6.5;
	Rectangle rec(a, b);
	cout << "The area is " << rec.area() << endl;

	int num_1, num_2;
	cout << "Enter first number" << endl;
	cin >> num_1;
	cout << "Enter second number" << endl;
	cin >> num_2;
	Addition add(num_1, num_2);
	cout << "The sum is " << add.addition() << endl;
	
    
	float real_1, img_1;
	cout << "Enter real_part part of first number" << endl;
	cin >> real_1;
	cout << "Enter imaginary part of first number" << endl;
	cin >> img_1;
	float real_2, img_2;	
	cout << "Enter real_part part of second number" << endl;
	cin >> real_2;
	cout << "Enter imaginary part of second number" << endl;
	cin >> img_2;
	Complex_addition comp_1(real_1, img_1);
	Complex_addition comp_2(real_2, img_2);
	(comp_1 + comp_2).display();
}