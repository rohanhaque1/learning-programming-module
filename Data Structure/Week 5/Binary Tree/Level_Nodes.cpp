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
        rootNode = NULL;
    else
        rootNode = new Node(val);
    queue<Node *> q;
    if (rootNode)
        q.push(rootNode);
    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *leftNode;
        Node *rightNode;
        if (l == -1)
            leftNode = NULL;
        else
            leftNode = new Node(l);
        if (r == -1)
            rightNode = NULL;
        else
            rightNode = new Node(r);
        pr->left = leftNode;
        pr->right = rightNode;
        if (pr->left)
            q.push(pr->left);
        if (pr->right)
            q.push(pr->right);
    }
    return rootNode;
}

int tree_height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = tree_height(root->left);
    int r = tree_height(root->right);
    return max(l, r) + 1;
}

vector<int> level_order(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    vector<int> v;
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int level = p.second;

        if (level == x)
        {
            v.push_back(node->val);
        }
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    return v;
}

int main()
{
    Node *root = input_binary_tree();
    int x;
    cin >> x;
    if (x > tree_height(root) - 1)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        vector<int> v = level_order(root, x);
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}