#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;

};
void print(struct Node**head_ref){
    struct Node* temp= *head_ref;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
        /* code */
    }
}
void push(struct Node**head_ref,int d){
    struct Node* temp=new Node();
    temp->data=d;
    temp->next=*head_ref;
    *head_ref=temp;
}
void reverse(struct Node**head_ref){
    Node* current=*head_ref;
    struct Node* temp=NULL;
    Node* prev=NULL,*next = NULL;
    while (current!=NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    *head_ref=prev;    

}
int main(){
    struct Node* head=NULL;
    push(&head,10);
    push(&head,11);
    push(&head,12);
    push(&head,13);
    push(&head,14);
    push(&head,15);
    push(&head,16);

    print(&head);
    cout<<endl;
    reverse(&head);
    print(&head);

}
