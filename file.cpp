
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    string words[100], word;
    int n = 0;

    while (fin >> words[n])
        n++;

    cout << "File length: " << n << " words\n";

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (words[i] == words[j])
                count++;
        }

        bool found = false;

        for (int k = 0; k < i; k++)
        {
            if (words[i] == words[k])
                found = true;
        }

        if (count > 1 && !found)
            cout << words[i] << " occurs " << count << " times\n";
    }

    fin.close();
    return 0;
}
