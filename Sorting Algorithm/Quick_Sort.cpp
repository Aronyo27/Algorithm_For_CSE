/*
Quick Sort :
    => Divide & Conquere Technique
    => Select Pivot Element
    => Partitions the array
    => Recursively sorts the subaray

Process :
    QuickSort(A,low,high) // Array A ,Starting idx low ,Ending idx high
        
    1.If low<high , then 
    2.  Set pivot=Partition(A,low,high)
    3.  QuickSort(A,low,pivot-1)
    4.  QuickSort(A,pivot+1,high)
    5:End & Exit

    Partition(A,low,high)
    Output:Pivot position

    1.Set pivot=A[high]
    2.Set i=low-1
    3.for j=low to high-1
    4.  if(A[j]<pivot),then
    5.      i+=1
    6.      swap(A[i],A[j])
    7.End for loop
    8.Swap(A[i+1] & A[high])
    9.return i+1
    
    TC: O(n^2)
    SC: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&a,int low,int high);

void quicksort(vector<int>&a,int low,int high){
    if(low<high){
        int pivot=partition(a,low,high);
        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
}
int partition(vector<int>&a,int low,int high){
    int p=a[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(a[j]<p){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int &a:arr)cout<<a<<" ";
    return 0;
}

