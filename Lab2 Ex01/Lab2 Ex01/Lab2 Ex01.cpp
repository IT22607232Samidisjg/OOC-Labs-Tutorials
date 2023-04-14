// Lab2 Ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Lab02 EX01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
using namespace std;

int searchKey(int integer[10]);

int main()
{
    int numbers[10];

    for (int i = 1; i <= 10; i++) {

        cout << "Enter a integer: ";
        cin >> numbers[i];
    }

    for (int j = 1; j <= 10; j++) {
        cout << numbers[j] << endl;
    }
    int index = searchKey(numbers);
    cout << index;

}


int searchKey(int integer[10]) {
    int searchNum, flag = 0;
    cout << "Enter search key: ";
    cin >> searchNum;

    for (int i = 0; i < 10; i++) {
        if (searchNum == integer[i]) {
            flag = 1;
            return i - 1;
            break;
        }
    }
    if (flag != 1) {
        cout << "value not found\n";
        return -1;
    }

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
