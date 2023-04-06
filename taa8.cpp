#include<bits/stdc++.h>
using namespace std;
 void dupliele(int arr[],int n){
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            cout<<"true yaar bhai tune duplicate element daale hai\n";
            return ;
        }
    }
    cout<<"false hai re good tune saare different element daale hai\n";
 }
 int main(){
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the array element\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dupliele(arr,n);
    return 0;

 }