#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key,int &count){
    int s=0,e=n-1;
    int m;
    while(s<=e){
        m=s+(e-s)/2;
        count++;
        if(arr[m]==key)
        return m;
        else if(arr[m]<key){
            s=m+1;
        }
        else
         e=m-1;
    }
    return -1;
}
int main(){
    int n,count=0;
    cout<<"array ka size daal\n";
    cin>>n;
    int arr[n];
    cout<<"size jitne element bhi daal de\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key \n";
    cin>>key;
    int loki = binarySearch(arr,n,key,count);
    if(loki==-1)
    cout<<"key is not found\n";
    else
    cout<<"key is found at index\n"<<loki<<endl;
    cout<<"the total no. of comparision is "<<count<<endl;
    return 0;
}
