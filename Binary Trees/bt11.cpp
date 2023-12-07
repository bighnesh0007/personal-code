#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree() {
    cout << "Enter your data (-1 for NULL): "<<endl;;
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* root = new node(data);
    cout << "Enter data for the left child of " << data << ": "<<endl;
    root->left = buildTree();
    cout << "Enter data for the right child of " << data << ": "<<endl;
    root->right = buildTree();

    return root;
}

int height(node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max(leftHeight, rightHeight);
}

int diameter(node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int leftDiameter = diameter(root->left);
    int rightDiameter = diameter(root->right);

    return max(max(leftDiameter, rightDiameter), leftHeight + rightHeight + 1);
}

int main() {
    node* root = NULL;
    root = buildTree();
    cout << "Diameter of the given binary tree is: " << diameter(root) << endl;
    return 0;
}
