#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string j = "Jessica";

    while (ss >> word)
    {
        if (word != j)
        {
            continue;
        }
        else if (word == j)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
