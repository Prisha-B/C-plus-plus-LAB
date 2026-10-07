#include <iostream>
using namespace std;

class Student
{
    protected:
    int rollNo;
    string name;

    public:
    void getData_Student()
    {
        cout<< "Enter the roll no:" <<endl;
        cin>> rollNo;
        cout<< "Enter the name: " << endl;
        cin>> name;
    }

    void display_Student()
    {
        cout<< "The name and the roll no is: " << name <<", " << rollNo <<endl;
    }
};

class Exam: public Student
{
    protected:
    int marks[6];

    public:
    void getMarks()
    {
        cout<< "Enter the marks(out of 100): " << endl;
        for(int i= 0; i<6; i++)
        {
            cout<< "Subject " << i+1 << endl;
            cin>> marks[i];
        }
    }

    void display_marks()
    {
        cout<< "The marks are: "<< endl;
        for(int i= 0; i<6; i++)
        {
            cout<< marks[i] <<" ";
        }
    }
}; 

class Result: public Exam
{
    protected:
    int total;
    float percentage;

    public:
    void calculate()
    {
        total= 0;

        for(int i= 0; i<6; i++)
        {
            total += marks[i];
        }
        
        percentage= (total/600.0) * 100.0;
    }

    void display_Result()
    {
        cout<< "\nThe total marks obtained: "<< total << endl;
        cout<< "The percentage: "<< percentage << endl;
    }
};

int main()
{
    Result s1;
    s1.getData_Student();
    s1.display_Student();
    s1.getMarks();
    s1.display_marks();
    s1.calculate();
    s1.display_Result();
    return 0;
}