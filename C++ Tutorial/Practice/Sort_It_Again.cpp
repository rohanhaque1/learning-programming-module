#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].eng_marks < a[j].eng_marks)
            {
                swap(a[i], a[j]);
            }
            else if(a[i].eng_marks == a[j].eng_marks)
            {
                if(a[i].math_marks < a[j].math_marks)
                {
                    swap(a[i], a[j]);
                }
                else if(a[i].math_marks == a[j].math_marks)
                {
                    if(a[i].id > a[j].id)
                    {
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}





// #include <bits/stdc++.h>

// using namespace std;

// class Student
// {
// public:
//     string name;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_marks;
// };

// bool cmp(Student a, Student b)
// {
//     if (a.eng_marks > b.eng_marks)
//     {
//         return true;
//     }
//     else if(a.eng_marks == b.eng_marks)
//     {
//         if(a.math_marks > b.math_marks)
//         {
//             return true;
//         }
//         else if(a.math_marks == b.math_marks)
//         {
//             if(a.id < b.id)
//             {
//                 return true;
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     Student a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
//     }
//     sort(a, a + n, cmp);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
//     }
//     return 0;
// }
