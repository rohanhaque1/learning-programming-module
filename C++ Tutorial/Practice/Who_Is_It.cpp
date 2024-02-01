#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char sec;
    int marks;
};
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.sec >> a.marks;
        getchar();
        cin >> b.id >> b.name >> b.sec >> b.marks;
        getchar();
        cin >> c.id >> c.name >> c.sec >> c.marks;

        if (a.marks > b.marks && a.marks > c.marks)
        {
            cout << a.id << " " << a.name << " " << a.sec << " " << a.marks << endl;
        }
        else if (b.marks > a.marks && b.marks > c.marks)
        {
            cout << b.id << " " << b.name << " " << b.sec << " " << b.marks << endl;
        }
        else if (c.marks > a.marks && c.marks > b.marks)
        {
            cout << c.id << " " << c.name << " " << c.sec << " " << c.marks << endl;
        }

        else if (a.marks == b.marks)
        {
            if (a.id < b.id)
            {
                cout << a.id << " " << a.name << " " << a.sec << " " << a.marks << endl;
            }
            else
            {
                cout << b.id << " " << b.name << " " << b.sec << " " << b.marks << endl;
            }
            
        }
        else if (b.marks == c.marks)
        {
            if (b.id < c.id)
            {
                cout << b.id << " " << b.name << " " << b.sec << " " << b.marks << endl;
            }
            else
            {
                cout << c.id << " " << c.name << " " << c.sec << " " << c.marks << endl;
            }
            
        }
        else if (a.marks == c.marks)
        {
            if (c.id < a.id)
            {
                cout << c.id << " " << c.name << " " << c.sec << " " << c.marks << endl;
            }
            else
            {
                cout << a.id << " " << a.name << " " << a.sec << " " << a.marks << endl;
            }
            
        }
    }
    return 0;
}