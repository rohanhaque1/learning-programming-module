#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word, name;
        map<string, int> mp;
        int mx = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                name = word;
                mx = mp[word];
            }
        }
        cout << name << " " << mx << endl;
    }
    return 0;
}