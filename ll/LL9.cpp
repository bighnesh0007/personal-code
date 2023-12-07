#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void print(struct Node** head_ref){
    struct Node* temp=*head_ref;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        /* code */
    }
    
}
void push(struct Node** head_ref,int d){
    struct Node* temp=new Node();
    temp->data=d;
    temp->next=*head_ref;
    *head_ref=temp;
}
void find(struct Node** head_ref,int pos){
    struct Node* new_node=*head_ref;
    struct Node* temp=*head_ref;
    int count=1;
    while (temp->next!=NULL)
    {
        if (count==pos)
        {
            cout<<temp->data<<" ";
            /* code */
        }
        temp=temp->next;
        count++;
        
        /* code */
    }
    

}
int main(){
    int n;
    cin>>n;
    struct Node* a=NULL;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        push(&a,ele);
    }
    int pos;
    cin>>pos;
    
    print(&a);
    find(&a,pos);
    print(&a);

}