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
    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            // for ascending sort based on marks
            if(a[i].marks > a[j].marks)
            {
                swap(a[i], a[j]);
            }

            // // if both marks are equal
            else if(a[i].marks == a[j].marks)
            {
                if(a[i].roll > a[j].roll)
                {
                    swap(a[i], a[j]);
                }
            }

            // // for descending sort based on marks
            // if(a[i].marks < a[j].marks)
            // {
            //     swap(a[i], a[j]);
            // }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
        return 0;
}
