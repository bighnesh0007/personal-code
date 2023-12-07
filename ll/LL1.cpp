#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void insert_element(struct Node **head_ref,int element){
        struct Node *newnode=new Node;
        newnode->data=element;
        newnode->next=*head_ref;
        *head_ref=newnode;
}
void print(struct Node *head){
    struct Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}
int main(){
    struct Node* head=NULL;
    int n,element;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>element;
        insert_element(&head,element);
    }
    print(head);
}
