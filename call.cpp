#include <iostream>
using namespace std;

//Call by reference

void swap_ref(int *a, int *b)
{
    int temp= *a;
    *a= *b;
    *b= temp;
}

void swap_value(int p, int q)
{
    int temp= p;
    p= q;
    q= temp;
    cout<< "After swap: a= " << p << ", b= " << q << endl;
}

int main()
{
    int x= 5, y= 10, a= 40, b= 50;
    cout<< "Call by reference: "<< endl;
    cout<< "Before swap: x= "<< x << ", y= " << y << endl;
    swap_ref(&x, &y);
    cout<< "After swap: x= " << x << ", y= " << y << endl;

    cout<< "\n\nCall by value: "<< endl;
    cout<< "Before swap: a= "<< a << ", b= " << b << endl;
    swap_value(a, b);

    return 0;
}
