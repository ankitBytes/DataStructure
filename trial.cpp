#include<iostream>
#include<math.h>
using namespace std;
#define pi 3.14;

void areaOfCircle() {

    double radius;
    cout << "Enter the radius of the circle " << endl;
    cin >> radius;

    double area = 3.14 * pow(radius, 2);

    cout << "Area = " << area << endl;
}

int main() {

    areaOfCircle();
    
    return 0;
}