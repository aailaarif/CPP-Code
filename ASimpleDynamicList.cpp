// ASimpleDynamicList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

void initialize(int* A, int n, int value)
{
	for (int i = 0; i < n; i++)
	{
		*(A + i) = 0;
	}
}

void print(int* A, int n)
{
	for (int i = 0; i < n; i++) {
		cout << *(A + i) << " "; 
	}
	cout << endl;
}

int* addElement(int* A, int& n, int value)
{

	int* bigA = new int[n+1];
	for (int i = 0; i < n; i++)
	{
		*(bigA + i) = *(A + i);
	}
	n++;
	*(bigA + (n-1)) = value;
	delete[] A;
	return bigA;
}

int* deleteFirstElement(int* A, int& n)
{
	if (n <= 1) {
		return NULL;
	}

	int* smallA = new int[n-1];  							
	for (int i = 1; i < n; i++)
	{
		*(smallA + (i-1)) = *(A + i);
	}
	n--;
	delete[] A;
	return smallA;
}

int* deleteElement(int* A, int &n, int index)
{

	if (index > n-1 || index < 0) {
		return A;
	}

	if (n <= 1) {
		return NULL;
	}

	int* changedA = new int[n - 1];

	for (int i = 0; i < index; i++) {
		*(changedA + i) = *(A + i);
	}

	for (int i = index; i < (n-1) ;i++) {
		*(changedA + (i)) = *(A + (i + 1));
	}
	n--;
	return changedA;

}

int main()
{
	cout << "Enter list size: ";
	int n;
	cin >> n;
	int* A = new int[n];
	initialize(A, n, 0);
	cout << "Initial: " << endl;
	print(A, n);
	A = addElement(A, n, 5);
	cout << "After adding element: " << endl;
	print(A, n);
	A = deleteFirstElement(A, n);
	cout << "After deleting element: " << endl;
	print(A, n);
	A = deleteElement(A, n, 1);
	cout << "After deleting element at 1: " << endl;
	print(A, n);
	delete[] A;
}
