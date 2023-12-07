#include <iostream>
#include <queue>
#include <deque>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key,index;
    cin>>key>>index;
    for(int i=n-1;i>=0;i--){
        if(i==index){
            arr[i]==key;
            break;
        }
        arr[i+1]=arr[i];

    }
    n++;
    deque<int> q;
    q.push_front(1);
    q.push_back(2);
    q.pop_back();
    q.pop_front();
    q.empty();
    // for (int i = 0; i < n; i++)
    // {
    //     int minIndex = i ;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]< arr[minIndex]){
    //             minIndex=j;
    //         }
    //     }
    //     swap(arr[minIndex],arr[i]);
    //     /* code */
    // }
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}