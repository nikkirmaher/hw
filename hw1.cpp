#include<iostream>
using namespace std;


int main()
{
	int a;
	int b;
	int c;
	int o;
	int r=(a%b);

	cout << "please input a: \n";
	cin >> a;

	cout << "please input operator (1: add, 2: subtract, 3: multiply, 4: divide):\n ";
	cin >> o;

	cout << "please input b:\n";
	cin >> b;

	if(b==0)
	{
		cout << "Value cannot be divided by zero.\n";
	}
	
	if(o==1)
	{
		c=(a+b);
		cout << "c = " << c << "\n";
		cout << "r = " << r;
	}
	else if(o==2)
	{
		c=(a-b);
		cout << "c = " << c << "\n";
		cout << "r = " << r << "\n";
	}
	else if(o==3)
	{
		c=(a*b);
		cout << "c = " << c << "\n";
		cout << "r = " << r << "\n";
	}
	else if(o==4)
	{
		c=(a/b);
		cout << "c = " << c << "\n";
		cout << "r = " << r << "\n";
	}
	else
	{
		cout << "please input an operator of 1, 2, 3, or 4.\n";
	}

	return 0;
}

	
	