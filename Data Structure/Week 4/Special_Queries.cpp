#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> counter;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string person;
            cin >> person;
            counter.push(person);
        }
        else if (cmd == 1)
        {
            if (!counter.empty())
            {
                cout << counter.front() << endl;
                counter.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}
