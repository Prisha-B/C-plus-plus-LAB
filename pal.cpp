#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void num_palindrome(int n)
{
    int original = n, rev= 0, digit;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (original == rev)
        cout << original << " is a palindrome number." << endl;
    else
        cout << original << " is not a palindrome number." << endl;
}   

void str_palindrome(string str)
{
    string rev;
    int i, n;
    rev = "";

     n= str.length();

    for(i=0; i<=n-1; i++)
    {
        str[i] = tolower(str[i]);
    }
    

    for(i=n-1; i>=0 ; i--)
    {
        rev= rev + str[i];
    }

    if (str == rev)
        cout << str << " is a palindrome string." << endl;
    else
        cout << str << " is not a palindrome string." << endl;
}

int main()
{
    int n;
    string str;

    cout << "Enter a number: ";
    cin >> n;
    num_palindrome(n);

    cout << "Enter a string: ";
    cin >> str;
    str_palindrome(str);

    return 0;
}
