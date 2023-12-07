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
int toSumTree(node *Node) 
{ 
    // Base case 
    if(Node == NULL) 
    return 0; 
 
    // Store the old value 
    int old_val = Node->data; 
 
    // Recursively call for left and
    // right subtrees and store the sum as 
    // old value of this node 
    Node->data = toSumTree(Node->left) + toSumTree(Node->right); 
 
    // Return the sum of values of nodes
    // in left and right subtrees and 
    // old_value of this node 
    return Node->data + old_val; 
} 
int main(){
    node* root=NULL;
    root= buildTree(root);
    int sum=toSumTree(root);

    // int sum = addBT(root);
    cout << "Sum of all the elements is: " << sum << endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    return 0;
}
