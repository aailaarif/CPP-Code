// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArray(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void getScores(double scores[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a score for student " << (i + 1) << " :";
        cin >> scores[i];
    }
}

void reverseArray(const double original[], double result[], int size) //const keyword keeps it from being changed
{
    for (int i = 0, j = size - 1; i < size; i++, j--) 
    {
        result[j] = original[i];
    }
}

void reverseArray(double original[], int size)
{
    for (int i = 0, j = size - 1; i < size / 2; i++, j--) //can hold multiple variables in for loop
    {
        double temp = original[i];
        original[i] = original[j];
        original[j] = temp;
    }
}

void shiftArrayToLeft(double original[], int size)//cannot return arrays
{
    for (int i = 0; i < size - 1; i++)
    {
        original[i] = original[i + 1];
    }
}


int main()
{
    const int size = 4;
    double scores[4]; //declaration of an array, locate 14 continuous spaces in memory
    cout << "Not initialized, all are assigned with arbitrary values\n ";
    cout << scores[0]<< endl;
    scores[0] = 100;
    cout << "First element has 100, others still uninitialized: " << scores[0] << "\t" << scores[1] << endl;

    getScores(scores, size);
    /*for (int i = 0; i < 4; i++)
    {
        cout << "Enter a score for student " << (i + 1) << " :";
        cin >> scores[i];
    }
    */
    printArray(scores, 4); //first parameter is an array, but the function just thinks it is a memory address, that's why we need the second parameter
    
    cout << "First element memory address: " << scores << endl;

    cout << "Trying to refer to an invalid index: " << scores[-1]  << " " << scores[4] << endl;

    double copy[size] = { 1,2,3,4 }; //initializer list
    //omit hte size if it is a full list
    cout << "\n printing the copy array: ";
    printArray(copy,size);

    cout << "The number of bytes for copy array: " << sizeof(copy) << endl;
    cout << "The # of bytes for a double element: " << sizeof(double) << endl;//sizeof(copy[0])
    cout << "Size of copy array: " << sizeof(copy) / sizeof(double) << endl;

    int integers[size] = { 100, 200 }; //partial list,initializes the last two elements with 0
    cout << integers[0] << " " << integers[1] << " " << integers[2] << " " << integers[3] << endl;
    int integers2[size] = { 0 }; //means initialize all values with 0
    cout << integers2[0] << " " << integers2[1] << " " << integers2[2] << " " << integers2[3] << endl;
    //copy=scores; cannot change the memory address, it is a constant
    for (int i = 0; i < size; i++)
    {
        copy[i] = scores[i]; //need to do individual copies
    }
    /*
    reverseArray(scores, copy, size);
    cout << "After reversed: \n";
    cout << "Scores stay the same: ";
    printArray(scores, size);
    cout << "Reversed as: ";
    printArray(copy, size);

    cout << "Reversed in place: "; //cannot call an array by reference
    reverseArray(scores, size);
    printArray(scores,size);
    */
    cout << "Enter a score for Student: " << size+1 << ": ";
    shiftArrayToLeft(scores, size);
    cin >> scores[size - 1];
    printArray(scores, size);


    return 0;
}
