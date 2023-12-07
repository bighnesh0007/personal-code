
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    stack<int> s;
    cin>>n;
    while (n!=0)
    {
        int element;
        cin>>element;
        s.push(element);
        n--;
    }
    int key;
    cin>>key;
    
    while (!s.empty())
    {
        if(s.top()==key){
        cout<<"Element found";
        return 0;
        }
        s.pop();
    }
    cout<<"Element not found"<<endl;
    return 0;
}