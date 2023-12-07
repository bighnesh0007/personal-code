#include <iostream>
#include <stack>
using namespace std;
int main(){
    int choice,value,count=0;
    stack<int> s;
    do{
    switch (choice)
    {
    case 1:
        cin>>value;
        count++;
        s.push(value);
        break;
    
    case 2:
        if(!s.empty()){
            cout<<s.top()<<endl;
            s.pop();
            count--;
        }else{
            cout<<"Stack is empty!"<<endl;
        }
        
        break;
    case 3:
        if(count>10){
            cout<<"Stack is full!"<<endl;
        }else{
            cout<<"Stack is not full."<<endl;
        }
        break;
    case 4:
        if(!s.empty()){
            cout<<"Stack is empty!"<<endl;
        }else{
            cout<<"Stack is not empty"<<endl;
        }
        break;
    case 5:
        cout<<"Exiting the program."<<endl;
        break;
    default:
    cout<<"Invalid input"<<endl;
        break;
    }
}while(choice!=5 );
}