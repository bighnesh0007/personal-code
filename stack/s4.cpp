#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string element;
        cin>>element;
        s.push(element);
    }
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

}