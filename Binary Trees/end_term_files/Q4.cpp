#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a,l;
    cin>>a>>l;
    for(int i=0;i<n;i++){
       if(arr[i]>=a && arr[i]<=l){
       cout<<arr[i]<<" ";
       }
    }

}

