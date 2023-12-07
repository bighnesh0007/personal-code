#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
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
    // int sum;
    // sum+=root->data;
    cout << "Enter data for inserting in left for " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right for " << data << endl;
    root->right = buildTree(root->right);
    // cout<<endl<<sum;
    return root;
}
int addBT(node* root){
    if (root == NULL)
        return 0;
    return (root->data + addBT(root->left) + addBT(root->right));
}
int main(){
    node* root=NULL;
    root= buildTree(root);
    int sum = addBT(root);
    cout << "Sum of all the elements is: " << sum << endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    return 0;
}
