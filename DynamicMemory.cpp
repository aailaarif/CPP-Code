// DynamicMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(int* pA, int* pB)
{
	int temp = *pA;
	*pA = *pB;
	*pB = temp;
}

void getGrades(double* pGrades, int size)
{
	for (int i = 0; i < size; i++) {
		cout << "Input a grade for student " << (i + 1) << ":";
		cin >> pGrades[i]; //same as cin >> *(pGrades+i);
	}
}

void printGrades(double* pGrades, int size)
{
	for (int i = 0; i < size; i++) {
		cout << *(pGrades + i) << " "; //same as cout << pGrades[i]
	}
	cout << endl;
}

void reverse(const double* original, double* result, int size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--) 
	{
		result[j] = original[i];
	}
}

double* reverse(const double* original, int size) //returns the first element's memory address from this function
{
	double* reverse = new double[size];
	for (int i = size-1, j=0; i >=0; i--,j++) {
		reverse[j] = original[i];
	}
	return reverse;
}


int main()
{
	//stored in a heap when doing dynamic memory allocation
	int* size = new int;
	cout << "What is the # of students in the class? ";
	cin >> *size;

	double* pGrades = new double[*size];
	cout << "uninitialized 1st element: " << pGrades[0] << ", another way:  " << *pGrades << endl;

	getGrades(pGrades, *size);
	printGrades(pGrades, *size);

	double* reversed = reverse(pGrades, *size);
	cout << "Reversed grades: " << endl;
	printGrades(reversed, *size);

	delete size; //don't need to delete multiple elements, so it doesn't need the []
	delete[] reversed;
	delete[] pGrades; //deletes the dynamic array so that memory can be released for future dynamic allocation
	pGrades = NULL;
	//cout << "trying to dereference the freed memory: " << *pGrades << endl; //causes a runtime error

	if (pGrades != NULL) 
	{
		cout << "Trying to dereference the freed memory:" << *pGrades << endl;
	}

	//if you don't release memory after you create a dynamic variable it causes a memory leak
	
	/*
	int a = 2, b = 3;
	swap(a, b);
	cout << "a and b are swapped: " << a << " " << b << endl;

	swap(&a, &b);
	cout << "a and b are swapped again: " << a << " " << b << endl;
	*/




}

