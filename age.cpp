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
        cout << "Enter name: " << endl;
        cin>> name;
        cout << "Enter age: " << endl;
        cin >> age;
        cout << "Enter address :" << endl;
        cin >> address;
        cout << "Enter salary: " << endl;
        cin >> salary;
    }

    void display()
    {
        cout<< "Details of the person: "<< endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
    }

    static inline void youngestAge(Person arr[], int n)
    {
        int min= arr[0].age;
        for(int i=0; i<n; i++)
        {
            if(arr[i].age < min)
            {
                min= arr[i].age;
            }
        }
        cout<< "The youngest age: " << min;
    }

    static inline void oldestAge(Person arr[], int n)
    {
        int max= arr[0].age;
        for(int i=0; i<n; i++)
        {
            if(arr[i].age > max)
            {
                max= arr[i].age;
            }
        }
        cout<< "The oldest age: " << max;
    }

};

int main()
{
    Person p[10];
    for(int i=1; i<=10; i++)
    {
        cout<< "Person " << i << endl;
        p[i].getData();
        p[i].display();
    }
    Person::youngestAge(p, 10);
    Person::oldestAge(p, 10);
    return 0;
}