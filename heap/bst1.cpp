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
node* insertIntoBST(node* root,int d){
    if(root==NULL){
        root=new node(d);
        return;
    }
    if(d > root->data){
        root->right=insertIntoBST(root->right,d);
    }
    else{
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}
void input(node* root){
    int data;
    cin>>data;
    while (data!=-1)
    {
        root=insertIntoBST(root,data);
        cin>>data;
        /* code */
    }
    
}
int main(){
    node* root=NULL;
    input(root);
}