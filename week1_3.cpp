#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[],int n,int key,int&count){
    int m=sqrt(n),i=0;
    while(arr[min(m,n)-1]<key){
        i=m;
        m+=sqrt(n);
        if(i>=n){
            return -1;
        }
        count++;
    }
    while(arr[i]<key){
        i++;
        if(i==min(m,n)){
            return -1;
        }
        count++;
    }
    if(arr[i]==key){
        count++;
        return i;
    }
    return -1;
}
int main(){
    int n,key,count=0;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter sorted element in array\n";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<"enter the key element";
    cin>>key;

    int index=jumpSearch(arr,n,key,count);
    if(index==-1)
    cout<<"element is not found";
    else
    cout<<"element is found at index"<<index<<endl;
    cout<<"the no. of comparisons are ->"<<count<<endl;
    return 0;
}
