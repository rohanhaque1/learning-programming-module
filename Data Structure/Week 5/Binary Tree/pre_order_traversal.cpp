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

void print_tree(Node *root)
{
    if(root == NULL)
        return;
    cout << root->val << " ";
    print_tree(root->left);
    print_tree(root->right);
}

int main()
{
    // create tree of node
    Node *root = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);
    Node *f = new Node(7);
    Node *g = new Node(8);
    Node *h = new Node(9);
    Node *i = new Node(10);

    // connect nodes to the parent node
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    c->right = g;
    e->left = h;
    h->right = i;

    // print the data structure with pre order traversal
    print_tree(root);
    return 0;
}
