#include <iostream>
#include <stack>
using namespace std;
int main(){
int n;
cin>>n;
stack<int> s;
    if(n>30){
        cout<<"STACK is overflow"<<endl;
        // return 0;
    }
    int data;
    while (n!=0)
    {
        cin>>data;
        s.push(data);
        n--;
    }
    int key;
    cin>>key;
    
    if(!s.empty()){
    bool found=false;
    while (!s.empty())
        {
            if(s.top()==key){
            	
                found=true;
                break;
            }
            s.pop();
        }
    if(found){   
        cout<<"Element found"<<endl;      
    }else{
        cout<<"Element not found"<<endl;
    }    
    }
	else{
    cout<<"The STACK is empty"<<endl;
	}
}
