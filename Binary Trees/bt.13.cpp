#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "Enter your data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left for " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right for " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void preorder(node *root, stack<int> s)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    s.push(root->data);
    cout << root->data << " ";

    preorder(root->left, s);
    preorder(root->right, s);
}
void inorder(node *root, stack<int> s)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, s);

    s.push(root->data);
    cout << root->data << " ";

    inorder(root->right, s);
}
void postorder(node *root, stack<int> s)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left, s);
    postorder(root->right, s);

    s.push(root->data);
    cout << root->data << " ";
}
int main()
{
    stack<int> s1;
    stack<int> s2;

    node *root1 = NULL;
    root1 = buildTree(root1);

    node *root2 = NULL;
    root2 = buildTree(root2);

    postorder(root1, s1);
    postorder(root2, s2);
    if (s1.size() != s2.size())
    {
        cout << "NON-identical" << endl;
        return 0;
    }
    while (!s1.empty() && s2.empty())
    {
        if (s1.top() == s2.top())
        {
            s1.pop();
            s2.pop();
        }
        else
        {
            cout << "NON-identical" << endl;
            return 0;
        }
    }
    cout << "Identical" << endl;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}
