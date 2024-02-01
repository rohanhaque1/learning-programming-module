#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int x = strlen(s);
        sort(s, s + x);
        for (int i = 0; i < x; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
            if (s[i] != ' ')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
