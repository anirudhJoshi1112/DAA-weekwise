#include<iostream>
using namespace std;

void findIndices(int arr[],int n){
    for(int k=2;k<n;k++){
        int i=0,j=k-1;
        while(i<j){
            if(arr[i]+arr[j]==arr[k]){
                cout<<"muze mil gye"<<i<<" "<<j<<" "<<k<<endl;
                return;
            }
            else if(arr[i]+arr[j]<arr[k]){
                i++;
            }
            else
            j--;
        }
    }
    cout<<"no such indices exist"<<endl;
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the array element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findIndices(arr,n);
    return 0;
}