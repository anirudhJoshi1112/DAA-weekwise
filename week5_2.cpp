#include<bits/stdc++.h>
using namespace std;

void searchpair(int arr[],int n,int key){
    sort(arr,arr+n);
    int left=0;
    int right=n-1;

    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==key){
            cout<<"pair is "<<arr[left]<<"+"<<arr[right]<<"="<<key;
            return;
        }
        else if(sum<key){
            left++;
        }
        else
        right--;
    }
    cout<<"yar koi pair nhi mila :( "<<endl;
}
int main(){
    int n,key;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the array element\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key : ";
    cin>>key;
    searchpair(arr,n,key);
    return 0;
}
