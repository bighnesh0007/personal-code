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
node* InsertIntoBST(node* root,int d){
    if(root == NULL){
        root=new node(d);
        return root;
    }
    if(d>root->data){
        root->right=InsertIntoBST(root->right,d);
    }else{
        root->left=InsertIntoBST(root->left,d);
    }
    return root;
}
bool takeInput(node* &root,int x){
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data>x){
        return takeInput(root->left,x);
    }else{
        return takeInput(root->right,x);
    }
}
void takeInput(node* &root){
    int data;
    cin>>data;
    while (data!=-1)
    {
        root = InsertIntoBST(root,data);
        cin>>data;
    }
}
int main(){
    node* root=NULL;
    takeInput(root);
}