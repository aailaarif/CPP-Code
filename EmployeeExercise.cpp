// EmployeeExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Employee 
{
	string theName;
	int id;
	double yearlySalary;
};

Employee readEmployee() 
{
	Employee emp;
	cout << "Enter employee name: ";
	getline(cin, emp.theName);

	cout << "Enter employee ID: ";
	cin >> emp.id;

	cout << "Enter employee yearly salary: $";
	cin >> emp.yearlySalary;

	cin.ignore(); 

	return emp;
}

void printEmployee(const Employee& emp) 
{
	cout << "The employee info is: " << emp.theName << ", " << emp.id << ", $" << emp.yearlySalary << endl;
}

int findEmployee(const Employee array[], int eId, int num)
{
	for (int i = 0; i < num; i++) {
		if (array[i].id == eId) {
			return i;
		}
	}
	return -1;
}




int main()
{
	int size = 0;
	int idToLookFor = 0;
	int returned;
	cout << "Enter how many employees: ";
	cin >> size;
	cin.ignore();
	cout << endl;

	Employee* employees = new Employee[size];

	for (int i = 0; i < size; i++) {
		employees[i]= readEmployee();
		cout << endl;
	}

	for (int i = 0; i < size; i++) {
		printEmployee(employees[i]);
	}

	cout << "Enter an ID to look for: ";
	cin >> idToLookFor;
	returned = findEmployee(employees, idToLookFor, size);
	if (returned != -1){
		cout << "Found Employee: " << employees[returned].theName;
	}
	else {
		cout << "Did not find an employee with that ID!";
	}

	delete[] employees;
	return 0;
}


