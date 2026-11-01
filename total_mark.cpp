#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    char name[20];

public:
    void getdata()
    {
        cout << "Enter roll no.: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }
};

class Test : virtual public Student
{
protected:
    int mark1, mark2;

public:
    void getmarks()
    {
        cout << "Enter marks in two subjects: ";
        cin >> mark1 >> mark2;
    }
};

class Project : virtual public Student
{
protected:
    int project_marks;

public:
    void getproject()
    {
        cout << "Enter project marks: ";
        cin >> project_marks;
    }
};

class Result : public Test, public Project
{
public:
    void display()
    {
        int total = mark1 + mark2 + project_marks;

        cout << "\nRoll No.: " << roll;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
    }
};

int main()
{
    Result r;

    r.getdata();
    r.getmarks();
    r.getproject();
    r.display();

    return 0;
}
