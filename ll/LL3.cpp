#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref,int d){
    struct Node* new_node=new Node();
    new_node->data=d;
    new_node->next=*head_ref;
    *head_ref=new_node;
}
void print(struct Node** head_ref){
    struct Node* temp=*head_ref;
    int count=0;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    cout<<count<<endl;
}
int main(){
    int n;
    struct Node* a=NULL;
    push(&a,10);
    push(&a,11);
    push(&a,12);
    push(&a,14);
    push(&a,15);
    push(&a,16);
    push(&a,17);
    print(&a);
}
