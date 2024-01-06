// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void doubleInput(int& a)
{
	a = a * 2;

}

void doubleInput(int* pA)
{
	*pA = (*pA) * 2;
}

void printDoubles(double* array, int size) //array name is a pointer
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i]<< " ";
	}
	cout << endl;
}

int main()
{
	int a = 20;
	cout << "initial value of a: " << a << endl;
	doubleInput(a);
	cout << "value of a after function: " << a << endl;

	doubleInput(&a);
	cout << "Further doubled a: " << a << endl;

	double values[3] = { 1.1, 2.2, 3.3 };
	printDoubles(values, 3);
	/*
	cout << "a's memory address: " << &a << endl;
	cout << "a's value: " << a << endl;

	int* pInt=&a; //asterisk makes it a pointer type
	cout << "pInt (currently same as a's address): " << pInt << endl;

	cout << "Indirect way to get a's value: " << *pInt << endl; //asterisk gets the value that is stored at the address
	//can only be applied on a pointer variable

	a = 10;
	cout << "a's new value : " << a << " " << *pInt << endl;

	*pInt = 100;

	cout << "a new value(100): " << a << " " << *pInt << endl;

	int x = 10, y = 20;
	//int* pX, pY; //only considers the x variable as a pointer
	int* pX, *pY; //makes it 2 pointers

	pX = &x;
	pY = &y;
	

	cout << "x's address: " << pX << " y's address: " << pY << endl;
	cout << "x's value: " << x << " using  pointer: " << *pX <<" y's value: " << y << " using pointer: " << *pY << endl;
	//pX = pY; //pX now refers to the memory address of pY
	*pX = *pY; //value of y is assigned to x variable
	cout << "New pX: " << pX << ", pY: " << pY << endl;
	cout << "value that pX points to: " << *pX << " value that pY points to: " << *pY << endl;
	cout << "new value of x: " << x << " value of y: " << y << endl;

	double b = 1.5;
	//pX = &b; pointer types must match i.e. a double memory address cannot be stored in an int memory address

	pInt = NULL; 
	//cout << "Not allowed to refer to null address: " << *pInt << endl; //causes a runtime error
	cout << endl;

	double floats[4] = { 11.1, 11.2, 20.1, 30.3 };
	cout << "first element address: " << floats << endl;
	cout << "first element value: " << floats[0] << " " << *floats << endl;

	cout << endl;
	cout << "Second element address: " << (floats + 1) << endl; //memory address of the second value of an array is 1 added to 
	//the address of the first one
	cout << "Second value: " << *(floats + 1) << endl;

	//floats = floats+1 //causes an error, array name is a constant pointer
	double* pDouble = floats;
	cout << "pDouble pointer value: " << pDouble << endl;
	cout << "First element value: " << *(pDouble) << endl;
	cout << "first value using index: " << pDouble[0] << endl;

	pDouble++; //add one to pDouble and assign this value back to pDouble
	cout << "pDouble pointing to 2nd element: " << *pDouble << endl;

	cout << "subtraction on two addresses to get the # of elements: " << (pDouble - floats) << endl;
	pDouble = pDouble + 2;
	cout << "value pointed by current pDouble point: " << (*pDouble) << endl;

	cout << boolalpha << (pDouble == floats) << endl;
	cout << "comparing the values at two locations: " << (*pDouble == *floats) << endl;*/
}


