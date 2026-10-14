#include <iostream>
#include <cmath>
using namespace std;

void area(float r)
{
    float A_circle= 3.14 * r * r;
    cout<< "The area of the circle: " << A_circle << endl;
}

void area(int l, int b)
{
    int A_rectangle= l * b;
    cout<< "The area of the rectangle: " << A_rectangle <<endl;
}

void area(float a, float b, float c)
{
    float s, A_triangle;
    if(a+b <= c || a+c <= b || b+c <= a)
    {
         cout<< "Not a valid triangle " << endl;
    }
    else
    {
        s= (a+b+c)/2.0;
        A_triangle= sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "The area of the triangle: " << A_triangle << endl;
       
    }
}

int main()
{
    int length, breadth;
    float radius, A, B, C;

    cout<< "Enter radius of the circle: " << endl;
    cin>> radius;
    area(radius);

    cout<< "\nEnter length and breadth of the rectangle: " << endl;
    cin>> length >> breadth;
    area(length, breadth);

    cout<< "\nEnter three sides of the triangle: " << endl;
    cin>> A >> B >> C;
    area(A, B, C);

    return 0;
}