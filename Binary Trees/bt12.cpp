#include <iostream>
#include <cmath>
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
node* buildTree(node* root){
    cout<<"Enter your data: "<<endl;
    int data;
    cin>>data;
    root= new node(data);
    if(data==-1){
        return NULL;
    }
//    node* root = new node(data);
    cout << "Enter data for the left child of " << data << ": "<<endl;
    root->left = buildTree(root->left);
    cout << "Enter data for the right child of " << data << ": "<<endl;
    root->right = buildTree(root->right);
    return root;

}
int height(node* root){
    if(root == NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    return (1+ max(lheight , rheight));
}
bool isBalanced(node* root){
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh - rh) && isBalanced(root->left) && isBalanced(root->right)){
        return 1;
    }
    return 0;
}
int main(){
    node* root =NULL;
    root=buildTree(root);
     if (isBalanced(root))
        cout << "Tree is balanced";
    else
        cout << "Tree is not balanced";
    return 0;
}
