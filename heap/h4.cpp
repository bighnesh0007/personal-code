#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int maxSize=100;

void minHeapify(vector<int>& heap,int size,int index){
    int smallest=index;
    int left=2*index+1;
    int right=2*index+2;

    if(left<size && heap[left]<heap[smallest]){
        smallest = left;
    }
    if(right<size && heap[right]<heap[smallest]){
        smallest = right;
    }
    if(smallest!=index){
        swap(heap[index],heap[smallest]);
        minHeapify(heap,size,smallest);
    }
}

void insertPriority(vector<int>& heap,int& heapSize,int newPriority){
    if(heapSize == maxSize){
        cout<<"Heap is full. Connot insert more properties."<<endl;
        return;
    }

    heapSize++;
    int i=heapSize-1;
    heap[i]=newPriority;

    while (i>0 && heap[(i-1)/2]>heap[i])
    {
        swap(heap[i],heap[(i-1)/2]);
        i=(i-1)/2;
    }
}
int main(){
    vector<int> minHeap(maxSize);
    int heapSize=0;
    int newPriority;
    while (cin>>newPriority)
    {
        insertPriority(minHeap,heapSize,newPriority);
    }
    for (int i = 0; i < heapSize; i++)
    {
        cout<<minHeap[i]<<" ";   
    }
}