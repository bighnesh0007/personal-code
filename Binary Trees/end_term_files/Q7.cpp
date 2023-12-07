#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void maxHeap(vector<int>& heap,int& size,int index){
    int smallest=index;
    int left=(index *2)+1;
    int right=(index *2)+2;
    if(size>left && heap[smallest]<heap[left]){

        smallest=left;

    }if(size>right && heap[smallest]<heap[right]){

        smallest=right;

    }
    if(smallest!=index){
        swap(heap[smallest],heap[index]);
        maxHeap(heap,size,smallest);

    }
}

void buildHeap(vector<int>& heap){
    int size=heap.size();
    for (int i = (size-1)/2; i>=0 ; i--)
    {
        maxHeap(heap,size,i);
        
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