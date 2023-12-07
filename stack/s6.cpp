#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string n;
    cin>>n;
    int ans=0;
    stack<char> s;
    for(int i=0;i<n.length();i++){
        char ch = n[i];
        if(ch=='['|| ch=='{' || ch=='('){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top=s.top();
                if((ch==')' && top=='(')||
                (ch==']' && top=='[')  ||
                (ch=='}' && top=='{'))
                {
                    s.pop();
                    ans=1;
                }
                else{
                    ans=0;
                }
            }else{
                ans=0;
            }
        }
    }
    if(ans==1){
        cout<<"balanced"<<endl;
    }else{
        cout<<"not balanced "<<endl;
    }
}
