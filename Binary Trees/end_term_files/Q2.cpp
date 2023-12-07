#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key,data;
    cin>>key>>data;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n;i>=key;i--){
        arr[i]=arr[i-1];
    }
    n++;
    arr[key-1]=data;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
