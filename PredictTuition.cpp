// PredictTuition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program accepts the current tuition as well as rate increase per year and tells the user how long it takes to get to the inputted future tuition
//Aaila Arif

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int predictTuition(double currentTuition, double rate, double futureTuition) 
{
	int years = 0;
	while (currentTuition < futureTuition) {
		currentTuition = currentTuition + (currentTuition * rate);
		years++;
	}
	return years;
}
int predictTuitionByReference(double& currentTuition, double rate, double futureTuition)
{
	int years = 0;
	while (currentTuition < futureTuition) {
		currentTuition = currentTuition + (currentTuition * rate);
		years++;
	}
	return years;
}
int main()
{
	double currentTuition;
	double rate;
	double futureTuition;

	cout << "Enter the current tuition: ";
	cin >> currentTuition;

	cout << "Enter the decimal rate: ";
	cin >> rate;

	cout << "Enter the future tuition: ";
	cin >> futureTuition;

	
	cout << "Current Tuition after first function call: " << currentTuition << ". Years to get to future tuition: " << predictTuition(currentTuition, rate, futureTuition) << endl;
	cout << "Current Tuition after second function call: " << currentTuition << ". Years to get to future tuition: " << predictTuitionByReference(currentTuition, rate, futureTuition) << endl;
}

