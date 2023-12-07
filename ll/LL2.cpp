#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref,int d ){
    struct Node* new_node=new Node();
    new_node->data=d;
    new_node->next=*head_ref;
    *head_ref=new_node;
}
bool same(struct Node* a,struct Node* b){
    while (a!=NULL && b!=NULL)
    {
        if(a->data!=b->data){
            return false;
        }
        a=a->next;
        b=b->next;
    }
    return true;
    
}
void print(struct Node** head_ref){
	struct Node *temp=*head_ref;
	// temp=*head_ref;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}
int main(){
    int n1,n2;
    struct Node* a= NULL;
    struct Node* b=NULL;
    push(&a ,10);
    push(&a ,11);
    push(&a ,12);
    push(&a ,13);
    push(&a ,14);
// b start
    push(&b ,10);
    push(&b ,11);
    push(&b ,12);
    push(&b ,13);
    push(&b ,14);
     push(&b ,15);

    if (same(a, b))
        cout << "Identical";
    else
        cout << "Not identical";
	cout<<endl;
	print(&a);
	cout<<endl;
	print(&b);
}
