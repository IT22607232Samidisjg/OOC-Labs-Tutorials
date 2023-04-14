#include <iostream>
#include <iomanip>
using namespace std;
int area(int length, int width);

struct Rectangle {
	int length;
	int width;
};

int main() {

	Rectangle yard;
	Rectangle house;


	yard.length = 60;
	yard.width = 30;

	house.length = 20;
	house.width = 10;

	int greenArea = area(yard.length, yard.width) - area(house.length, house.width);
	cout << "Area of the lawn area: " << greenArea;
}

int area(int length,int width) {
	int area = length * width;
	return area;
}