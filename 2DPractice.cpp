// 2DPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

const int COLUMN_SIZE = 3;

void initialMatrix(int myMatrix[][COLUMN_SIZE], int rowSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        cout << "Enter a value for row: "<< (row+1) << "\n";
        for (int col=0; col < COLUMN_SIZE; col++)
        {
            cout << "Enter a value for col: " << (col + 1) << ": ";
            cin >> myMatrix[row][col];
        }
    }
}

void sumOfColumn(const int myMatrix[][COLUMN_SIZE], int rowSize, int sums[]) 
{
    for (int col = 0; col < COLUMN_SIZE; col++)
    {
        int sum = 0;
        for (int row = 0; row < rowSize; row++) {
            sum += myMatrix[row][col];
        }
        sums[col] = sum;
    }
}

int largestValue(const int myArray[], int arraySize)
{
    int largest = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if (myArray[i] > largest) {
            largest = myArray[i];
        }
    }
    return largest;
}


int searchValue(const int myArray[], int arraySize, int value, int indexes[])
{
    int count = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if (myArray[i] == value)
        {
            indexes[count] = i;
            count++;
        }
    }
    return (count);
}

void printMatrix(const int myMatrix[][COLUMN_SIZE], int rowSize)
{
    cout << fixed;
    cout << left;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < COLUMN_SIZE; col++)
        {
            cout << setw(5) << myMatrix[row][col];
        }
        cout << endl;
    }
}

void printArray(const int myArray[], int arraySize)
{
    cout << fixed;
    cout << left;
    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(5) << myArray[i];
    }
}
int main()
{
    int indexes[COLUMN_SIZE];
    int sums[COLUMN_SIZE] = { 0 };
    int myMatrix[2][COLUMN_SIZE] = { 0 };
    int value = 0;
    initialMatrix(myMatrix, 2);
    cout << "The matrix is: " << endl;
    printMatrix(myMatrix,2);
    sumOfColumn(myMatrix, 2, sums);
    cout << "The column sums: " << endl;
    printArray(sums, 3);
    cout << endl;
    cout << "The largest column sum is: " << largestValue(sums, COLUMN_SIZE) << endl;
    cout << searchValue(sums, COLUMN_SIZE, largestValue(sums, COLUMN_SIZE), indexes) << " columns having the largest value." << endl;;
    cout << "Column indexes: " << endl;
    printArray(indexes, searchValue(sums, COLUMN_SIZE, largestValue(sums, COLUMN_SIZE), indexes));

}

