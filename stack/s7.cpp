#include <iostream>
#include <stack>
using namespace std;
void reverse(stack<int> s,int n){
    if(!s.empty()){
    int num=s.top();
    s.pop();
    reverse(s,n);
    s.push(num);
    }else{
        return;
    }
}
int main(){
    int n;
    stack<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        s.push(element);
    }
    reverse(s,n);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop(); 
        /* code */
    }
    
}