#include <iostream>
using namespace std;

int main()
{
    int n, sum, original, digit;
    sum = 0;

    cout << "Please enter a number: " << endl;
    cin >> n;

    original= n;

    while(n!=0)
    {
        digit= n%10;
        sum += digit * digit * digit;
        n= n/10;
    }

    if (sum == original)
    {
        cout << "It is an Armstrong number." << endl;
    }
    else
    {
        cout << "It is not an Armstrong number." << endl;
    }

    return 0; 
}