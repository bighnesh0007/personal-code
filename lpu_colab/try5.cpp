#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
bool identical(node* root1,node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if (root1!=NULL && root2!=NULL)
    {
        return (root1->data == root2->data) && identical(root1->left,root2->left) &&identical(root2->right, root2->right);
        /* code */
    }
    
}
int main(){
    node* root1=NULL;
    node* root2=NULL;
    if(identical(root1,root2)){
        cout<<"yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}