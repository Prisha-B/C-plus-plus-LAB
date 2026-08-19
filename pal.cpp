#include <iostream>

using namespace std;

int main()
{
    int n, original, rev, rem;
    rev = 0;
    cout << "Please enter a number: " << endl;
    cin >> n;
    original = n;

    while(n!=0)
    {
        rem= n%10;
        rev= rev*10 + rem;
        n= n/10;
    }

    if (rev == original)
    {
        cout << "It is a palindrome." << endl;
    }
    else
    {
        cout << "It is not a palindrome." << endl;
    }
    return 0;
}