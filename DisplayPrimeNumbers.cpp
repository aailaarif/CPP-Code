// DisplayPrimeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    cout << left;
    cout << fixed;
    int divisor = 2;
    int counter = 0;
    int number = 2;
    
    while (counter < 50) {
        bool prime = true;
        for (int divisor = 2; divisor < number; divisor++)
        {

            if (number % divisor == 0)
            {
                prime = false;
                break;
            }  
        }
        if (prime == true) {
            counter++;
            if (counter % 10 == 0){
                cout << setw(10) << number << endl;
        }
            else {
                cout << setw(10) << number;
            }
            
        }
        number++;     
    }
}
