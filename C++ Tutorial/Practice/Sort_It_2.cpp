#include<bits/stdc++.h>
using namespace std;

int* sort_it(int N)
{
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N, greater<int>());
    return A;
}

int main()
{
    int N;
    cin >> N;
    int *A = sort_it(N);
    for (int i = 0; i < N; i++)
    {
        cout << A[i]<<" ";
    }
    cout << endl;
    return 0;
}
