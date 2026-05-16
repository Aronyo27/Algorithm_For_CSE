/*
Merge Sort : TC(nlog n)
    =>Follow Divide & Conquare Technique
    =>Divide the array into two halves
    =>Recursively sort both halves
    =>Merge the sorted halves

Process :
    Merge_Sort(A,low,high)
    Output : Sorted array in ascending order

    1: if(low<high) then,
    2: mid (low+high)/2
    3: Merge_Sort(A,low,mid)
    4: Merge_Sort(A,mid+1,high)
    5: Merge(A,low,mid,high)
    6: End if condition 
    7:Stop

    Merge(A,low,high,mid)
    Output: Merge the sorted halves

    1: Create temp array temp[high-low+1]
    2: set i=low ,j=mid+1,k=0
    3: while i<=mid && j<=high ,do
    4:      if(A[i]<=A[j])then,
    5:          temp[k]=A[i]
    6:          i+=1
    7:      else
    8:          temp[k]=A[j]
    9:          j+=1
    10:k+=1
    11:End of while loop
    12:Copy remaining element from left part [if any]
    13:Copy ramaining element from right part [if any]
    14 Copy temp array to original array
*/


#include<bits/stdc++.h>
using namespace std;

void mergesort(vector<int>&a,int l,int h);
void merge(vector<int>&a,int l,int h,int m);

void mergesort(vector<int>&a,int l,int h){
    if(l<h){
        int m=(l+h)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge(a,l,h,m);
    }
}
void merge(vector<int>&a,int l,int h,int m){
    vector<int>t;
    int i=l,j=m+1,k=0;
    while(i<=m && j<=h){
        if(a[i]<=a[j]){
            t.push_back(a[i]);i+=1;
        }
        else t.push_back(a[j++]);
    }
    while(i<=m){
        t.push_back(a[i++]);
    }
    while((j<=h)){
        t.push_back(a[j]);j++;
    }
    for(int i=l;i<=h;i++){
        a[i]=t[i-l];
    }
}
int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int &it:a)cin>>it;
    mergesort(a,0,n-1);
    for(int &x:a)cout<<x<<" ";
    return 0;
}