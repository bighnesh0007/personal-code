#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n,data;
    stack<int> s;
    cin>>n;
    while (n!=0)
    {
        cin>>data;
        s.push(data);
        n--;
    }
    while (!s.empty())
    {
        if(s.top()%2==0){
            s.pop();
        }else{
            cout<<s.top()<<" ";
        }
    }
    
}