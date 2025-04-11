#ifndef VANKOV_LR5_H
#define VANKOV_LR5_H

#include <iostream>
#include <string>
#include <map>
#include <functional>

using namespace std;

int a, b, res = 0;

// Is string a num?
bool CanStoi(string& input)
{
    if (input.empty()) return false;

    try
    {
        int num = stoi(input);
        if (to_string(num) != input) return false;
    } catch (...) { return false; }

    return true;
}

// Enter correct number from keyboard
void EnterNumber(int& num, string message)
{
    string input;

    cout << message;
    getline(cin, input);

    while (!CanStoi(input))  
    {
        cout << message;
        getline(cin, input);
    }

    num = stoi(input);
}

// Function to set value of variable "a"
void EnterA()
{
    EnterNumber(a, "Enter value of a: ");
}

// Function to set value of variable "b"
void EnterB()
{
    EnterNumber(b, "Enter value of b: ");
}

// Function to sum up variables "a" and "b"
void ExecutePlus()
{
    res = a + b;
    cout << "Sum of a and b: " << res << endl;
}

// Function to minus variables "a" and "b"
void ExecuteMinus()
{
    res = a - b;
    cout << "A minus B: " << res << endl;
}


#endif