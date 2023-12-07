#include<iostream>
using namespace std;
// 0 -> Not a Prime no.
// 1 -> Prime no.
bool isprime(int n){
    for (int i = 2; i <n; i++)
    {
        if (n%i==0){
            return 0;
        }
        
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"is prime number"<<endl;
    }
    else{
        cout<<"Not prime number"<<endl;
        
    }
}
