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

int sum = 0;
int sum_of_node(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    sum += root->val;
    sum_of_node(root->left);
    sum_of_node(root->right);
    return sum;
}

int main()
{
    Node *root = input_binary_tree();
    cout << sum_of_node(root) << endl;
    return 0;
}