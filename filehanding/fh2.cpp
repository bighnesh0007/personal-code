// You are using GCC
#include <iostream>
#include <string>
using namespace std;
int main(){
    char arr[1000];
    for(int i=0;i<1000;i++){
        char data;
        cin>>data;
        if(data=='.'){
            break;
        }
        arr[i]=data;
        
    }
    for(int i=0;i!='.';i++){
        cout<<arr[i];
    }
    
}
