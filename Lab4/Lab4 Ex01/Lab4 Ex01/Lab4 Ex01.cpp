// Lab4 Ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;

float CircArea(float r);
float RecArea(float length, float width);
float SqureArea(float length);
float landPerimeter(Rectangle rectangleBig, float& perimeter);
float findCost(float unitCost, float& perimeter);


struct Circle {
	float radius;
};

struct Rectangle {
	float length;
	float width;
};

struct Square {
	float length;
};

int main()
{
	Circle circle1;
	Rectangle rectangle1,rectangleBig;
	Square square1;
	float perimeter;
	float perUnit = 10;

	cout << "Input the radius of circle(m2): ";
	cin >> circle1.radius;

	cout << "Input the Length of Rectangle(m2): ";
	cin >> rectangle1.length;

	cout << "Input the width of rectangle(m2): ";
	cin >> rectangle1.width;

	cout << "Input the length of square(m2): ";
	cin >> square1.length;

	cout << "Input the Length of Big Rectangle(m2): ";
	cin >> rectangleBig.length;

	cout << "Input the width of Big rectangle(m2): ";
	cin >> rectangleBig.width;

	float cArea = CircArea(circle1.radius);
	float rArea = RecArea(rectangle1.length, rectangle1.width);
	float sArea = SqureArea(square1.length);
	float rBigArea = RecArea(rectangleBig.length, rectangleBig.width);
	float greenArea = rBigArea - (cArea + rArea + sArea);
	float perimeterofYard = landPerimeter(rectangleBig,perimeter);
	float total = findCost(perUnit,perimeter);

	cout << setprecision(3) << setiosflags(ios::fixed);
	cout << "Area of the Green Colour Area(m2) : " << greenArea << "m2" << endl;
	cout << "Perimeter of the land: " << perimeter << "m" << endl;
	cout << "Cost of the fence(Rs): " << total << endl;
}

float CircArea(float r){
	float areaCircle = 3.14 * r * r;
	return areaCircle;
}


float RecArea(float length, float width) {
	float areaRec = length * width;
	return areaRec;
}

float SqureArea(float length) {
	float areaSquare = length * length;
	return areaSquare;
}
float landPerimeter(Rectangle rectangleBig, float& perimeter) {
	perimeter = (rectangleBig.length + rectangleBig.width) * 2;
	//float perimeter1 = 2 * (length + width);
	return perimeter;
}

float findCost(float unitCost, float& perimeter) {
	
	float cost1= unitCost * perimeter;
	return cost1;
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
