#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    int data;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>data;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<data;

}