#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void print(struct Node**head_ref){
    struct Node* temp =*head_ref;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        /* code */
        temp=temp->next;
    }
    
}
void push(struct Node** head_ref,int d){
    struct Node* temp=new Node();
    temp->data=d;
    temp->next=*head_ref;
    *head_ref=temp;
}
void rev(struct Node** head_ref,int pos){
    struct Node* tail=*head_ref;
}
int main(){

}