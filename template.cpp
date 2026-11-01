#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T s[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T x)
    {
        if (top == 4)
            cout << "Stack Overflow\n";
        else
            s[++top] = x;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
            top--;
    }

    void display()
    {
        if (top == -1)
            cout << "Stack is empty";
        else
        {
            for (int i = top; i >= 0; i--)
                cout << s[i] << " ";
        }
    }
};

int main()
{
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();

    s.pop();

    cout << "\nAfter pop: ";
    s.display();

    return 0;
}
