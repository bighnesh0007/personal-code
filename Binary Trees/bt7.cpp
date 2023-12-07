#include <iostream>
#include<queue>
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
node* builtTree(node* root){
    cout<<"Enter your data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left for "<<data<<endl;
    root->left=builtTree(root->left);
    cout<<"Enter data for inserting in right for "<<data<<endl;
    root->right=builtTree(root->right);
    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int count=1;
    while (!q.empty())
    {
        // queue<node*> q;
        node* temp=q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
                count++;
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    cout<<endl<<count<<endl;
    
}
int main(){
    node* root=NULL;
    root = builtTree(root);
    levelOrderTraversal(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

}