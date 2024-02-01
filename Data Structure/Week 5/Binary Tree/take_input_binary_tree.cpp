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
        // 1. queue theke ber kore ana
        Node *parent = q.front();
        q.pop();
        // 2. jabotiyo sob kaj
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
        // make connection to the left and right node
        parent->left = leftNode;
        parent->right = rightNode;
        // 3. children gulo ke push kora
        if (parent->left)
        {
            q.push(parent->left);
        }
        if (parent->right)
        {
            q.push(parent->right);
        }
    }
    return rootNode;
}

void level_order_print(Node *root)
{
    if (root == NULL)
        return;
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
    level_order_print(root);
    return 0;
}