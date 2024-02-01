// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
//     sort(A, A + N);
//     for (int i = 0; i < N; i++)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;
//     sort(A, A + N, greater<int>());
//     for (int i = 0; i < N; i++)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// final exam problem
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool cmp(Student a, Student b)
{
    if(a.total_marks == b.total_marks)
    {
        return a.id < b.id;
    }
    else
    {
        return a.total_marks > b.total_marks;
    }
    
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     // cout << a[i].total_marks << endl;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if(a[i].total_marks < a[j].total_marks)
    //         {
    //             swap(a[i], a[j]);
    //         }
    //         else if(a[i].total_marks == a[j].total_marks)
    //         {
    //             if(a[i].id > a[j].id)
    //             {
    //                 swap(a[i], a[j]);
    //             }
    //         }
    //     }
    // }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}
