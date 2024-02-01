#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    // mp.insert({"Rohan Haque", 21});
    // mp.insert({"Mariya Ibnat", 18});
    // mp.insert({"Maisha Moon", 19});
    // mp.insert({"Ritu Moni", 20});
    // mp.insert({"Tulona", 21});
    mp["Rohan"] = 21;
    mp["Moon"] = 19;
    mp["Ritu"] = 19;
    mp["Mariya"] = 18;

    cout << mp["Ritu"] << endl;

    // if (mp.count("Sarah"))
    //     cout << "Ase" << endl;
    // else
    //     cout << "Nai" << endl;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    return 0;
}
