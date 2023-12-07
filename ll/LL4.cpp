#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void insert(struct Node** head_ref,int d){
    struct Node* temp=new Node();
    temp->data=d;
    temp->next=*head_ref;
    *head_ref=temp;
}
void print(struct Node** head_ref){
    struct Node* temp=*head_ref;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
bool search(struct Node** head_ref,int d){
    struct Node* temp=*head_ref;
    while (temp!=NULL)
    {
        if(temp->data==d){
            return true;
        }
    temp=temp->next;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    struct Node* head=NULL;
    insert(&head,10);
    insert(&head,11);
    insert(&head,12);
    insert(&head,13);
    insert(&head,14);
    insert(&head,15);
    insert(&head,16);

    print(&head);
    cout<<endl;

    if (search(&head,n)){
        cout << "is present";
    }else{
        cout << "not present";
    }
}
