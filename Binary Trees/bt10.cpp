#include <iostream>
#include <cmath>
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
int maxdepth(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ldepth = maxdepth(root->left);
    int rdepth = maxdepth(root->right);
    return 1 + max(ldepth, rdepth);
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = maxdepth(root->left);
    int rheight = maxdepth(root->right);

    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);

    return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}
int main(){
    node *root = NULL;
    root = buildTree(root);
    int absDiameter = abs(diameter(root));
    cout << "Diameter of the given binary tree is : " << absDiameter ;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}
