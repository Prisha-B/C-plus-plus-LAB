
#include <iostream>
using namespace std;

class Person
{
    private:
    char name[64];
    int age;
    char address[64];
    float salary;

    public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter address: ";
        cin >> address;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
    }

    static inline void youngestAge(Person arr[], int n)
    {
        int youngest = 0;

        for(int i = 1; i < n; i++)
        {
            if(arr[i].age < arr[youngest].age)
            {
                youngest = i;
            }
        }

        cout << "\n--- Youngest Person ---" << endl;
        arr[youngest].display();
    }

    static inline void oldestAge(Person arr[], int n)
    {
        int oldest = 0;

        for(int i = 1; i < n; i++)
        {
            if(arr[i].age > arr[oldest].age)
            {
                oldest = i;
            }
        }

        cout << "\n--- Oldest Person ---" << endl;
        arr[oldest].display();
    }
};

int main()
{
    Person p[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "\nEnter details of Person " << i + 1 << endl;
        p[i].getData();
    }

    Person::youngestAge(p, 10);
    Person::oldestAge(p, 10);

    return 0;
}