#include <iostream>
#include <math.h>
using namespace std;

float calculateArea(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float radius = 0;
    cout << "Enter the radius(in cm):";
    cin >> radius;

    cout << "Circle Area =" << calculateArea(radius) << "cm2" << endl;
    return 0;
}