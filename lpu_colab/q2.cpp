#include <iostream>
#include <stack>
using namespace std;

int main(){
    int choice,value;
    stack<int> s;
    do{
        cin>>choice;
        switch (choice)
        {
        case 1:
            cin>>value;
            s.push(value);
            break;
        case 2:
            if(s.empty()){
                cout<<"Stack is empty. cannot perform pop operation."<<endl;
                break;
            }
            s.pop();
            
            break;
        case 3:
            if(s.empty()){
                cout<<"Stack is empty."<<endl;
            }
            else{
                while (!s.empty())
                {
                cout<<s.top()<<" "<<endl;
                s.pop();
                }
                
            }
            break;
        case 4:
            cout<<"Exiting the program."<<endl;
            break;            
        default:
            cout<<"Invalid choice."<<endl;
            break;
        }
    }while(choice!=4);
}
