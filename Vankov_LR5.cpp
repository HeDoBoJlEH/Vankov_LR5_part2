#include "Vankov_LR5.h"

struct MenuItem
{
    string title;
    function<void()> func; 
};

int main()
{   
    map<int, MenuItem> Menu {
        {1, {"Enter A", EnterA}},
        {2, {"Enter B", EnterB}},
        {3, {"Execute \"+\"", ExecutePlus}},
        {4, {"Execute \"-\"", ExecuteMinus}}
    };

    int choice;

    for (;;)
    {
        for (auto item : Menu)
        {
            cout << item.first << ". " << item.second.title << endl;
        }

        cout << "0. Exit" << endl << endl;

        EnterNumber(choice, "Choice a menu option: ");

        if (choice == 0) break;

        cout << endl;

        if (Menu.find(choice) != Menu.end())
            Menu[choice].func();
    }

    return 0;
}