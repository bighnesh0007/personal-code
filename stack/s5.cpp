#include <iostream>
#include <stack>
#include <string>
using namespace std;
void solve(stack<int>& s,int count,int n){
    if(count==n/2){
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    solve(s, count+1,n);
    s.push(num);
}
// void solve(stack<int>& s, int count, int n) {
//     if (count == n / 2 && n % 2 == 1) {
//         s.pop();
//         return;
//     } else if (count == n / 2 - 1 && n % 2 == 0) {
//         s.pop();
//         return;
//     }
//     int num = s.top();
//     s.pop();
//     solve(s, count + 1, n);
//     s.push(num);
// }

int main(){
    stack<int> s;
    stack<int> b;
    int count=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        s.push(element);
        b.push(element);
    }
    while (!b.empty()){
        cout<<b.top()<<" ";
        b.pop();
    }
    cout<<endl;
    solve(s,count,n);
    
    while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
