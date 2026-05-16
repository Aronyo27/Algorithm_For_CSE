/*
Bubble Sort : Need n-1 iteration per Step 
TC : O(n^2)

Process :
    1.for i=0 to n-2 do,
    2.      for j=0 to n-i-2 do 
    3.          if(a[j]>a[j+1]),then
    4.              swap a[j] & a[j+1] // for decending if(a[j]<a[j+1])
    6.      End of inner for loop
    7.End of outer for loop
    8.Stop
*/



#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&a,int n);

void bubblesort(vector<int>&a,int n){
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }
}

int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    bubblesort(a,n);
    for(int &it:a)cout<<it<<" "; 
    return 0;
}
