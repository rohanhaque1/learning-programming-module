#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *convert_arrat_to_bst(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *rootNode = new Node(a[mid]);
    Node *leftRoot = convert_arrat_to_bst(a, n, l, mid - 1);
    Node *rightRoot = convert_arrat_to_bst(a, n, mid + 1, r);
    rootNode->left = leftRoot;
    rootNode->right = rightRoot;
    return rootNode;
}

void print(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // sort(a, a + n);
    Node *root = convert_arrat_to_bst(a, n, 0, n - 1);
    print(root);
    return 0;
}