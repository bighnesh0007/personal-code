#include <iostream>
#include <queue>
// #include <deque>
using namespace std;

int main(){
    deque<int> q;
    int choice,value;
    
    do{
        cin>>choice;
        switch (choice)
        {
        case 1:
            cin>>value;
            q.push_back(value);
            cout<<"Order ID "<<value<<" is inserted in the queue."<<endl;
            break;
        case 2:
            if(!q.empty()){
                cout<<"Queue is empty. cannot perform pop operation"<<endl;
                break;
            }
            cout<<"Dequeued coustomer ID: "<<q.front()<<endl;
            q.pop_front();

            break;
        case 3:
            if(dq.empty()){
                cout<<"dequeued is empty."<<endl;
            }
            
            break;
        case 4:
            
            break;
        
        default:
            break;
        }
    }while(choice!=4)
}