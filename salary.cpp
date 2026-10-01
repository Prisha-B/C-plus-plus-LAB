
#include <iostream>
using namespace std;

class Person
{
    private:
    char name[64];
    int age;
    char address[64];
    float basic, hra, ta, da, totalSalary;

    public:
    // Parameterized constructor
    Person(const char n[], int a, const char addr[], float b)
    {
        int i = 0;

        while(n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';

        i = 0;

        while(addr[i] != '\0')
        {
            address[i] = addr[i];
            i++;
        }
        address[i] = '\0';

        age = a;
        basic = b;
    }

    // Function to calculate salary
    void calculateSalary()
    {
        hra = basic * 0.20;
        ta = basic * 0.10;
        da = basic * 0.10;

        totalSalary = basic + hra + ta + da;
    }

    // Function to display salary slip
    void displaySlip()
    {
        cout << "\n========== SALARY SLIP ==========" << endl;
        cout << "Name          : " << name << endl;
        cout << "Age           : " << age << endl;
        cout << "Address       : " << address << endl;

        cout << "---------------------------------" << endl;
        cout << "Basic Salary  : " << basic << endl;
        cout << "HRA           : " << hra << endl;
        cout << "TA            : " << ta << endl;
        cout << "DA            : " << da << endl;
        cout << "---------------------------------" << endl;

        cout << "Total Salary  : " << totalSalary << endl;
        cout << "=================================" << endl;
    }
};

int main()
{
    // Initializing 10 objects using parameterized constructors
    Person p[10] = {
        Person("Aarav", 25, "Kolkata", 30000),
        Person("Priya", 28, "Delhi", 35000),
        Person("Rahul", 30, "Mumbai", 40000),
        Person("Ananya", 24, "Chennai", 28000),
        Person("Rohan", 32, "Pune", 45000),
        Person("Sneha", 27, "Bangalore", 38000),
        Person("Arjun", 29, "Hyderabad", 42000),
        Person("Ishita", 26, "Guwahati", 32000),
        Person("Kabir", 31, "Jaipur", 50000),
        Person("Meera", 23, "Kolkata", 25000)
    };

    for(int i = 0; i < 10; i++)
    {
        p[i].calculateSalary();
        p[i].displaySlip();
    }

    return 0;
}