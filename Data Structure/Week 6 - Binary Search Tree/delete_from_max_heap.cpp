#include <bits/stdc++.h>
using namespace std;

void insert_in_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_node = v.size() - 1;
    while (cur_node != 0)
    {
        int parent_node = (cur_node - 1) / 2;
        if (v[parent_node] < v[cur_node])
        {
            swap(v[parent_node], v[cur_node]);
        }
        else
            break;
        cur_node = parent_node;
    }
}

void delete_from_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // duitai ache
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
                break;
        }
        else if (left_idx <= last_idx)
        {
            // left ache
            if (v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
                break;
        }
        else if (right_idx <= last_idx)
        {
            // right ache
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
                break;
        }
        else
            break;
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_in_heap(v, x);
    }
    delete_from_heap(v);
    print_heap(v);
    return 0;
}
