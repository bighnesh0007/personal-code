#include <iostream>
using namespace std;
struct Node{
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
void search(struct Node**head_ref,int key){
    struct Node* temp= *head_ref;
    int count=0;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            count++;
        }
        
        temp=temp->next;
    }
    cout<<count<<endl;
}
int main(){
    struct Node* head=NULL;
    push(&head,10);
    push(&head,11);
    push(&head,10);
    push(&head,12);
    push(&head,10);
    push(&head,13);
    push(&head,10);
    push(&head,14);
    push(&head,15);
    push(&head,10);
    push(&head,16);
    push(&head,10);


    print(&head);
    cout<<endl;
    
    search(&head,10);
    print(&head);
// 6;
    cout<<endl;
}