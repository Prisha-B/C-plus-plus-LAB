#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str, rev;
    int i, n;
    rev = "";
    cout << "Please enter a string: " << endl;

    cin >> str;
    n= str.length();

    for(i=0; i<=n-1; i++)
    {
        str[i] = tolower(str[i]);
    }
    

    for(i=n-1; i>=0 ; i--)
    {
        rev= rev + str[i];
    }

    if (rev == str)
    {
        cout << "It is a palindrome." << endl;
    }
    else{
        cout << "It is not a palindrome." <<endl;
    }
    return 0;
}