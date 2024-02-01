#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat)); // to initialize array with 0
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // for undirected graph
        mat[a][b] = 1;
        mat[b][a] = 1;

        // // for directed graph
        // mat[a][b] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // // To check if matrix of 3, 4 connected
    // if (mat[2][3] == 1)
    //     cout << "Connected" << endl;
    // else
    //     cout << "Not Connected" << endl;
    return 0;
}