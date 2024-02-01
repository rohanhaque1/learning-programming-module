#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char val : s)
        {
            if (!st.empty())
            {
                if (val == '0')
                {
                    st.push(val);
                }
                else
                {
                    if (val == '1' && st.top() == '0')
                    {
                        st.pop();
                    }
                }
            }
            else
            {
                st.push(val);
            }
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
