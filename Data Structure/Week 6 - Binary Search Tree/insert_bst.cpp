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

void insert_in_bst(Node *&root, int x)
{
    Node *newNode = new Node(x);
    if (root == NULL)
    {
        root = newNode;
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = newNode;
        }
        else
        {
            insert_in_bst(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = newNode;
        }
        else
        {
            insert_in_bst(root->right, x);
        }
    }
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
    Node *root = input_binary_tree();
    // int x;
    // cin >> x;
    insert_in_bst(root, 12);
    insert_in_bst(root, 32);
    insert_in_bst(root, 22);
    insert_in_bst(root, 27);
    print(root);
    return 0;
}