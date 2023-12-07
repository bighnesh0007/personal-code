#include <iostream>
#include <deque>
using namespace std;
int main(){
    int n;
    int choice,value;
    deque<int> dq;
    do
    {
        cin>>choice;
        switch (choice)
        {
        case 1:
            cin>>value;
            dq.push_front(value);
            cout<<"Customer ID "<<value<<" is enqueued."<<endl;
            break;

        case 2:
        if(dq.empty()){
                cout<<"Stack is empty. cannot perform pop operation."<<endl;
                break;
            }
            cout<<"Dequeued coustomer ID: "<<dq.back()<<endl;
            dq.pop_back();
            break;
        case 3:
         if(dq.empty()){
                cout<<"dequeued is empty."<<endl;
            }
            else{
                while (!dq.empty())
                {
                cout<<dq.front()<<" ";
                dq.pop_front();
                }
                
            }
        default:
            cout<<"Invalid option."<<endl;
            break;
        }

        /* code */
    } while (choice!=4);
    
}
