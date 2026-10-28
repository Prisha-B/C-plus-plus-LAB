#include <iostream>
using namespace std;

class B;

class A
{
    int a;

    public:
    void getdata()
    {
        cout<< "Enter 1st number: ";
        cin>> a;
    }

    void display()
    {
        cout<< "a: " << a << endl;
    }

    friend void swap(A &, B &);
};

class B
{
    int b;

    public:
    void getdata()
    {
        cout<< "Enter 2nd number: ";
        cin>> b;
    }

    void display()
    {
        cout<< "b: " << b << endl;
    }

    friend void swap(A &, B &);
};

void swap(A &obj1, B &obj2)
{
    int temp;
    temp= obj1.a;
    obj1.a = obj2.b;
    obj2.b= temp;
}

int main()
{
    A obj1;
    B obj2;

    obj1.getdata();
    obj2.getdata();

    cout << "Before swapping: "<< endl;
    obj1.display();
    obj2.display();

    swap(obj1, obj2);
    
    cout << "After swapping: "<< endl;
    obj1.display();
    obj2.display();

    return 0;
}
