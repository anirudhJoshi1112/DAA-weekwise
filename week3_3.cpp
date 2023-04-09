#include<bits/stdc++.h>
using namespace std;

bool duplicate(int arr[],int n){
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            return true;
        }
    }
     return false;
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(duplicate(arr,n)){
        cout<<"duplicate elements are present\n";
    }
    else{
        cout<<"no duplicates\n";
    }
    return 0;
}
