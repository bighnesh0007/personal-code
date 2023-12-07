#include<iostream>
#include<vector>
#include<algorithm>
const int maxValue=100;
using namespace std;

void HeapMax(vector<int>& heap,int& size,int index){
    int largest=index;
    int left=(index*2)+1;
    int right=(index*2)+2;
    if(left<size && heap[largest]<heap[left]){
        largest=left;
    }if(right<size && heap[largest]<heap[right]){
        largest=right;
    }
    if(largest!=index){
        swap(heap[largest],heap[index]);
        HeapMax(heap,size,largest);

    }
}
void insert(vector<int>& heap,int data){
    if(heap.size()>maxValue){
        cout<<endl;
        return;
    }
    heap.push_back(data);
    int index=heap.size()-1;
    while (index>0 && heap[index]>heap[(index-1)/2])
    {
        swap(heap[index],heap[(index-1)/2]);
        index=(index-1)/2;
        /* code */
    }
    
    
}

int main(){
    vector<int> maxHeap;
    int data;
    while (cin>>data)
    {
        insert(maxHeap,data);
        /* code */
    }
    for(int i=0;i<maxHeap.size();i++){
        cout<<maxHeap[i]<<" ";
    }
    

}