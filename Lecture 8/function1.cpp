#include<iostream>
using namespace std;


int pow(int a, int b){
    int ans =1;
    for (int i = 0; i < b; i++)
    {
        ans=ans *a;
        /* code */
        

    }
    return ans;
}

int main() {
    int a,b;
    cin>>a >> b;
    int ans=pow(a,b);
    cout<<" answer is " << ans <<endl;
    return 0;
}
