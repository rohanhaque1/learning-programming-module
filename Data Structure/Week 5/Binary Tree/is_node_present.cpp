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

Node *input_tree()
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

void print(Node *root)
{
    // if (root == NULL)
    //     return;
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
    Node *root = input_tree();
    print(root);
    return 0;
}