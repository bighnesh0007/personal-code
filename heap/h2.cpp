#include <iostream>
using namespace std;
class heap{
    public:
    int size;
    int arr[100];
    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int value){
        size = size+1;
        int index = size;
        arr[index]=value;
        while (index>1)
        {
            int parent=index/2;
            if(arr[parent] <arr[index/2]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
            /* code */
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int main(){
    heap h;
    
}