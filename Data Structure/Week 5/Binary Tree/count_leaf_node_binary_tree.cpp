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
        Node *p = q.front();
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
        p->left = leftNode;
        p->right = rightNode;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return rootNode;
}

int count_leaf_node(Node *root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l + r;
}

int main()
{
    Node *root = input_binary_tree();
    cout << count_leaf_node(root) << endl;
    return 0;
}