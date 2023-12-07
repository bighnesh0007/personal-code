#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;


    Node(int data){
        this -> data = data;
        this -> data = NULL;

    }

};
void InsertHead (Node* &a, int a)
{
    Node temp = new Node(a);
    temp -> next = head;
    head = temp;
}
void print(node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
}


int main(){
Node* node1 = new Node(40);
//cout<<node1 << data<< endl;
//cout<< node1 << next << endl;
Node* head = node1;

InsertHead(Head, 30);
print(Head);


Node* head = node1;

}
