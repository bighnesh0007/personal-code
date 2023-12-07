#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp;
    temp=n;
    int rem,sum=0;
    while (temp!=0)
    {   
        rem=temp%10;
        sum=sum*10+rem;
        temp/=10;
    }
    cout<<sum<<" "<<endl;
    
}
