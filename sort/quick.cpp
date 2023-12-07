#include <iostream>
using namespace std;

// 2,4,1,6,9,9,9,9,9,9
int partition(int arr[],int s,int e){
    int pivot=arr[s];//2
    int cnt=0;

    for(int i=s+1;i<=e;i++){
        
        if(arr[i]<=pivot){ // ! 4 < 2
            cnt++;
        }
    }

    int pivotIndex = s + cnt;//0+1
    swap(arr[pivotIndex],arr[s]);

    int i=s,j=e;
    while (i < pivotIndex && pivotIndex < j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j++;
        }
        if(i < pivotIndex && pivotIndex < j){
            swap(arr[i++],arr[j--]);
        }
                
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int p= partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int arr[10]={12,56,21,78,10,3,65,99,44,22};
    int n=10;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}