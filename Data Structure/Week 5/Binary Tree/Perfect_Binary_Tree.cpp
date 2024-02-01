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

int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}

int main()
{
    Node *root = input_binary_tree();
    int height = tree_height(root);
    int count = count_node(root);
    int total_node = pow(2, height) - 1;
    if (count == total_node)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}