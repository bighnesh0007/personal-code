#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int n=5,arr[5]={1,1,2,2,3};
//    cin>>n;
    int index=0,size=0;

//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    // }1 1 2 2  4


    for(int i=0;i<n;i++){
        // arr[i]=2
        int count=0;

        for(int j=i+1 ; j<n ; j++){
            // arr[j]=2
            if(arr[i]==arr[j]){
                count++;
            }
        }

        if(count>0){
        	int num=arr[i];
            q.push(num);
        }
    }


    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
        /* code */
    }
    

}

