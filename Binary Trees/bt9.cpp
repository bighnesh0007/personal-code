#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=left;
        this->right=right;
    }
};
node* buildTree(node* root){
    cout<<"Enter your data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left for "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right for "<<data<<endl;
    root->right=buildTree(root->right);
}
int maxdepth(node* root){
    if(root==NULL){
        return 0;
    }
    else{
        int ldepth = maxdepth(root->left);
        int rdepth = maxdepth(root->right);

        if(ldepth>rdepth){
            return (ldepth-rdepth);
        }else{
            return (rdepth-ldepth);
        }
    }
}
int main(){
    node* root =NULL;
    root=buildTree(root);
    // maxdepth(root);
    int depth = maxdepth(root);
    cout << "Maximum depth of the tree: " << depth << endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

}