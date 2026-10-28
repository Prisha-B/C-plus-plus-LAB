#include <iostream>
using namespace std;

class Media
{
    protected:
    char title[100], publication[100];

    public:
    virtual void read()
    {
        cout<< "Enter title: ";
        cin>> title;

        cout<< "Enter publication: ";
        cin>> publication;
    }

    virtual void show()
    {
        cout<< "Title: "<< title<< endl;
        cout<< "Publication: "<< publication<< endl;
    }
};

class Book : public Media
{
    int pages;

    public:
    void read()
    {
        Media::read();
        cout<< "Enter number of pages: ";
        cin>> pages;
    }

    void show()
    {
        Media::show();
        cout<< "No. of pages: " << pages << endl;
    }
};

class Tape : public Media
{
    float time;

    public:
    void read()
    {
        Media::read();
        cout<< "Enter playing time (in seconds): ";
        cin>> time;
    }

    void show()
    {
        Media::show();
        cout<< "Playing time: " << time << endl;
    }
};

int main()
{
    Media *ptr;
    Book b;
    Tape t;

    cout<< "Enter book details: "<< endl;
    ptr= &b;
    ptr->read();

    cout<< "\nEnter tape details: "<< endl;
    ptr= &t;
    ptr->read();
    
    cout<< "\nBook details: "<< endl;
    ptr= &b;
    ptr->show();

    cout<< "\nTape details: "<< endl;
    ptr= &t;
    ptr->show();

    return 0;
}