#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n]; // or dynamic array
    // Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    // Student mn;
    // mn.marks = INT_MAX;
    // // mn.marks = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i].marks < mn.marks)
    //     {
    //         mn = a[i];
    //     }
    // }
    // cout << mn.name << " " << mn.roll << " " << mn.marks << endl;


    // for max object
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n;i++)
    {
        if(a[i].marks > mx.marks){
            mx = a[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
    return 0;
}
