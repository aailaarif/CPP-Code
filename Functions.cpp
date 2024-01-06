// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void printUserInfo(const string& , int ); //don't need names for the variables and it ends with a semicolon


void formatRow(int degree, int precision, int width, string align)
{
	const double PI = 3.141592;
	double radian = degree * PI / 180;
	double sine = sin(radian);
	double cosine = cos(radian);
	double tangent = tan(radian);
	if (align == "right")
	{
		cout << right;
	}
	else if (align == "left")
	{
		cout << left;
	}
	cout << fixed;
	cout << setprecision(precision);
	cout << setw(width) << degree << setw(width) << radian << setw(width) << sine << setw(width) << cosine << setw(width) << tangent << endl;
}

int larger(const int& a,const int& b) 
{
	//a++; not allowed because of constant declaration
	int result;
	if (a > b)
	{
		result = a;
	}
	else
	{
		result = b;
	}
	return result;
}
int getIntegerInput() 
{
	cout << "Enter an integer: ";
	int input;
	cin >> input;
	while (cin.fail())
	{
		cout << "it is not an int; Enter a new int: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> input;
	}
	return input;
}

void swap(int& a, int& b) //makes the variable a reference to the same location in memory as the variable passed in
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Inside swap function, a= " << a << " b= " << b << endl;
}

double divide(double a=2, double b=2) //gives a default value to b, so b can be omitted;default values need to be given for both
{
	return a / b;
}

double larger(double a, double b) //overloaded
{
	double result;
	if (a > b)
	{
		result = a;
	}
	else
	{
		result = b;
	}
	return result;
}

int main()
{

	printUserInfo("Aaila", 20);
	cout << "\n" << divide(10) << endl;
	cout << divide(10, 5) << endl; //the function will use the 5 since it has been provided
	
	cout << larger(1.5, 0.6) << endl;
	//cout << larger(1.5, 1) << endl; ambiguous invocation of functions - 1.5 can be truncated and 1 can be turned into a decimal
	cout << larger(1.5, (double)1) << endl; //casting fixes this issue
	//in-line function stops overhead making the code compile faster and be more efficient
	//replace invocation of function with function body = in-line function
	//requesting memory for varible is an example of an overhead, short functions may be shorter than that
	
	
	
	/*
	int i = getIntegerInput();
	int j = getIntegerInput();
	cout << "Larger value between " << i << " and " << j << " is: " << larger(i, j) << endl;
	swap(i, j);
	cout << "After calling swap function, i: " << i << " j: " << j << endl;
	int u = 10, v = 20;
	swap(u, v);
	cout << "After calling swap function, u: " << u << " v: " << v << endl;
	//formatRow(30, 4, 8, "left");
	//formatRow(60, 4, 8, "left");
	//formatRow(90, 4, 8, "left");

	int& refI = i; //refers to i in memory
	i++;
	cout << "After increment, refI: " << refI << " i: " << i << endl;
	refI = 10;
	cout << "Both variables are changed to 10: " << "refI: " << refI << " i: " << i << endl;
	*/
	return 0;
}

void printUserInfo(const string& username, int age)
{
	cout << "User name: " << username << " , age: " << age;
}

