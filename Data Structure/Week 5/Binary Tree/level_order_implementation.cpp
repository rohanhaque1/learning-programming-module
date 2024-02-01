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

void level_order_print(Node *root)
{
    if(root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
        // 2.jabotiyo ja kaj ase
        cout << f->val << " ";
        // 3. tar children gulo ke rakha
        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    // create tree of node
    Node *root = new Node(50);
    Node *a = new Node(2);
    Node *b = new Node(4);
    Node *c = new Node(6);
    Node *d = new Node(8);
    Node *e = new Node(10);
    Node *f = new Node(12);
    Node *g = new Node(14);

    // connect nodes to the parent node
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    e->left = f;
    f->right = g;

    level_order_print(root);
    return 0;
}
