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

Node *input_binary_tree()
{
    int val;
    cin >> val;
    Node *rootNode;
    if (val == -1)
    {
        rootNode = NULL;
    }
    else
    {
        rootNode = new Node(val);
    }
    queue<Node *> q;
    if (rootNode)
    {
        q.push(rootNode);
    }
    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *leftNode;
        Node *rightNode;
        if (l == -1)
        {
            leftNode = NULL;
        }
        else
        {
            leftNode = new Node(l);
        }
        if (r == -1)
        {
            rightNode = NULL;
        }
        else
        {
            rightNode = new Node(r);
        }
        pr->left = leftNode;
        pr->right = rightNode;

        if (pr->left)
        {
            q.push(pr->left);
        }
        if (pr->right)
        {
            q.push(pr->right);
        }
    }
    return rootNode;
}

vector<int> v;
vector<int> leaf_node(Node *root)
{
    if (root == NULL)
        return v;

    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }

    leaf_node(root->left);
    leaf_node(root->right);

    return v;
}
int main()
{
    Node *root = input_binary_tree();
    vector<int> v = leaf_node(root);

    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}