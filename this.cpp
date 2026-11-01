#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    void getdata(int roll)
    {
        this->roll = roll;
    }

    void display()
    {
        cout << "Roll No.: " << roll;
    }
};

int main()
{
    Student s;
    s.getdata(10);
    s.display();

    return 0;
}
