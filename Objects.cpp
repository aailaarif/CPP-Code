// Objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype> //provides boolean values to represent if a property exists or not (char)
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;
int main()
{
    vector<string> students;
    cout << "# of elements: " << students.size() << endl;
    students.push_back("John");
    students.push_back("Tyler");
    cout << "After insertion, # of students: " << students.size() << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << students[i] << endl;
    }

    students.pop_back();
    cout << "After deletion: " << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << students[i] << endl;
    }

    char cstring[6] = "Hello"; //need to make it 6 to include the terminator character
    string content = "Hello";
    string another("Hello"); //use constructor of string class
    cout << "# of characters: " << another.length() << endl;
    cout << boolalpha << another.empty() << endl;
    another = "World";
    cout << "Overloaded =: " << another << endl;
    another.assign("World");
    cout << "The content is changed: " << another << endl;

    cout << endl;
    another.append("!");
    cout << "append ! to World: " << another << endl;
    another += "!";
    cout << "Same effect as append function: " << another << endl;
    //cout << "Hello" + "World"; cannot add 2 memory addresses together (two pointers), + operand needs a string object

    another.clear(); 
    cout << "Now it is empty: " << another.empty() << endl;
    cout << "# of characters: " << another.length() << endl;
    another.insert(0, "Hello");
    cout << "After insertion: " << another << endl;
    another.insert(another.length(), "World");
    cout << "After second insertion: " << another << endl;

    cout << "Extract second character: " << another[1] << " " 
        << another.at(1) << endl; //at throws an exception if you refer to an index outside of the possible indices

    char first = another.at(0);

    bool flag = isupper(first);
    cout << "Is it uppercase? " << flag << endl;
    flag = islower(first);
    cout << "Is it lowercase? " << flag << endl;
    flag = isdigit(first);
    cout << "Is it a digit? " << flag << endl;
    flag = isspace(first);
    cout << "Is it a space? " << flag << endl;
    flag = isalpha(first);
    cout << "Is it a letter? " << flag << endl;

    string sub = another.substr(5, 5); //if you omit second value, it extracts till the end
    cout << "Extract 5 characters from index 5: " << sub << endl;
    sub = another.substr(5);
    cout << "Extract characters till the end from index 5: " << sub << endl;

    another.replace(5, 5, " World"); //replace from index 5, 5 characters, with " World"
    cout << "Space added: " << another << endl;

    if (another.find("el") != string::npos) {
        cout << "el is first found at index: " << another.find("el") << endl;
        if (another.find("el", another.find("el") + 1)!=string::npos) {

            cout << "Second match of el is found!\n";

        }
        else {
            cout << "There is no second match of el\n";
        }
    }
    else {
        cout << "el does not exist in the string!\n";
    }

    string exercise = "Running " + to_string(11.5); //default value is 6 sig digs
    cout << "Exercise info: " << exercise << endl;

    stringstream ss;
    ss << fixed << setprecision(2);
    ss << "Running " << 11.5;
    cout << "Info with 2 decimal places for float values: " << ss.str() << endl; //str function is to retrieve values from object
    
    string type;
    double time;
    string timeStr;

    ss >> type; //extracts till first space
    ss >> timeStr; //extracts from non-space character, will be a string type
    time = stod(timeStr); //converts a string to double, stoi converts to int
    cout << "type: " << type << " time: " << fixed << setprecision(3) << time << endl;

    return 0;
}

