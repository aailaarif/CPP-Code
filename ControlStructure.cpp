// ControlStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*
    bool condition = true;
    cout << "Default shown 1:" << condition << endl;
    cout << boolalpha << condition << endl; //makes the compiler show boolean value using words 
    cout << false << endl; //only need to specify boolalpha once
    cout << noboolalpha; //changes it back to the default numbers
    cout << condition << endl;
    int a = 5;
    //condition = (a = 3); //will be true bc a is assigned as 3, and that is positive
    //condition = (a==3) //would return false because it is checking if a is equal to 3
    //condition = (a = 0); would print false
    //condition = !(a==0) not operator would make this true
    cout << boolalpha << condition << endl;

    condition = (a < 2) || (a++); //evaluates at a=5 and updates after because that is a post increment
    cout << "condition is true: " << condition << ", a is increased by 1, a=" << a << endl;

    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    char letter;

    if (grade <= 100 && grade >= 0)
    {

        if (grade < 60)
        {
            letter = 'F';
            //cout << "Work harder!\n";
            //cout << "Your grade: " << grade << endl;
        }
        else if (grade < 70)
        {
            letter = 'B';
        }
        else if (grade < 80)
        {
            letter = 'C';
        }
        else if (grade < 90)
        {
            letter = 'B';
        }
        else
        {
            letter = 'A';
        }
    }
    else
    {
        cout << "Score shoiuld be in the range [0,100]\n";
    }

    cout << "Your letter grade is " << letter << endl;
    /*else
    {
        cout << "Keep up the good work!\n";
    }
    *//*
    switch (letter)
    {
    case 'A':
        //cout << "Perfect!\n"; 
        //break; //need break statements in order to end the case block
    case 'B':
        //valid statement
    case 'C':
        cout << "Do not need to retake the class \n";
        break;
    default:
        cout << "Retake the class\n";//if it isnt a,b,or c, it goes to default
        break;
    }*/

    int number = 0;
    do
    {
        cout << "Input a positive integer: ";
        cin >> number;
    } while (number <= 0); //semicolon at the end of this do while block
    for (int divisor = 2; divisor < number; divisor++)
    {

        if (number % divisor == 0)
        {
            cout << "It is not a prime number\n";
            break;
           // cout << divisor << " is a divisor of " << number << endl;
        }
        
    }
    /*while (divisor <= number) //no semicolon or it will consider it as an empty while block
    {
        if (number % divisor == 0)
        {
            cout << divisor << " is a divisor of " << number << endl; 
        }
        divisor++;
    }*/
    return 0;
    
}

