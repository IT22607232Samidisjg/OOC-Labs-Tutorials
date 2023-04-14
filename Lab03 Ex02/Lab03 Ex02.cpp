// Lab03 Ex02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;

void findMarks(float t_marks1, float t_marks2, float& t_CA1, float& t_CA2);

int main()
{
	float marks1, marks2, CA1 = 0, CA2 = 0;

	for (int i = 1; i <= 5; i++) 
	{
		cout << "Enter mark1 ";
		cin >> marks1;

		cout << "Enter mark2 ";
		cin >> marks2;

		findMarks(marks1, marks2, CA1, CA2);
		cout << setprecision(2) << setiosflags(ios::fixed);
		cout << "Student" << i << ":"<<endl<< "Marks1"<<":" << marks1 << "\t" << "Marks2" << ":"<< marks2 << "\t" << "CA1" << ":"  << CA1 << "\t" << "CA2" << ":" << CA2 << endl;
	}
	return 0;
}

void findMarks(float t_marks1, float t_marks2, float& t_CA1, float& t_CA2) 
{

	t_CA1 = t_marks1 * 20 /100;
	t_CA2 = (t_marks2 * 30) / 100;
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
