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

void print_left(Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
    {
        print_left(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right)
    {
        print_left(root->right);
        cout << root->right->val << " ";
    }
}

void print_right(Node *root)
{
    if (root == NULL)
        return;
    if (root->right)
    {
        cout << root->right->val << " ";
        print_right(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        print_right(root->left);
    }
}

int main()
{
    Node *root = input_binary_tree();
    if (root->left)
        print_left(root);
    cout << root->val << " ";
    if (root->right)
        print_right(root);
    return 0;
}