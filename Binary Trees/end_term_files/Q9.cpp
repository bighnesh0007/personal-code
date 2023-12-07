#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void maxHaep(vector<int>& heap,int&size,int index){
    int largest = index;
    int left=(index*2)+1;
    int right=(index*2)+2;
    if(size<left && heap[largest]<heap[left]){
        largest=left;
    }
    if(size<right && heap[largest]<heap[right]){
        largest=right;
    }
    if(largest!=index){
        swap(heap[largest],heap[index]);
        maxHaep(heap,size,largest);
    }
}

void buildHeap(vector<int>& heap)
{
    int size=heap.size();
    for(int i=(size-1)/2;i>=0;i--){
        maxHaep(heap,size,i);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> heap(n);
    for(int i=0;i<n;i++){
        cin>>heap[i];
    }
    buildHeap(heap);
    for(int i=0;i<n;i++){
        cout<<heap[i]<<" ";
    }
    
}