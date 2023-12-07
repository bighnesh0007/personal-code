#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left= NULL;
        this->right=NULL;
    }
};
node* bt(node* root){
    cout<<"Enter your data"<<endl;
    int data;
    cin>>data;

    root=new node(data);
    
    if(data==-1){
        return NULL;
    }

    root->left=bt(root->left);

    root->right=bt(root->right);
    return root;
}
int main(){
    node* root=NULL;
    root=bt(root);

}
// x
// x->d,->l,->r;
// x obj1;
