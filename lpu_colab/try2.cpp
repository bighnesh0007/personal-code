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
node* BT(node* root){
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return;
    }
    // base case
    root->left=BT(root->left);
    root->right=BT(root->right);
    return root;
}
void inorder(node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root){
    if(root=NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=NULL;
    root=BT(root);
    inorder(root);
    preorder(root);
    postorder(root);
}