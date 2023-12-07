#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int maxsize=100;

void maxHeapify(vector<int>& heap,int size,int index){
    int largest=index;
    int left=(index*2)+1;
    int right=(index*2)+2;

    if(left<size && heap[left]>heap[largest]){
        largest=left;
    }
    if(right<size && heap[right]>heap[largest]){
        largest=right;
    }
    if(largest!=index){
        swap(heap[index],heap[largest]);
        maxHeapify(heap,size,largest);
    }
}
void buildMaxHeap(vector<int>& heap){
    int size =heap.size();
    for (int i = size / 2 - 1; i>= 0; i--)
    {
        maxHeapify(heap,size,i);
        /* code */
    }
}
int main(){
    int n;
    cin>>n;

    vector<int> maxHeap(n);
    for (int i = 0; i < n; i++)
    {
        cin>>maxHeap[i];
        /* code */
    }cout<<endl;
    
    buildMaxHeap(maxHeap);

    for (int i = 0; i < n; i++)
    {
        cout<<maxHeap[i]<<" ";
        /* code */
    }cout<<endl;
    
}