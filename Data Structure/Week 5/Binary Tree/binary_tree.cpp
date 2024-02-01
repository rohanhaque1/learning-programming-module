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
    return 0;
}
