#include<bits/stdc++.h>
using namespace std;

void commonEle(int arr1[],int m,int arr2[],int n){
    sort(arr1,arr1+m);//it will sort the array upto 0  to m-1 in ascending order
    sort(arr2,arr2+n);
    for(int i=0,j=0;i<m && j<n; ){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
int main(){
    int m,n;
    cout<<"enter the range of arr1 : \n";
    cin>>m;
    int arr1[m];
    cout<<"enter the element in arr1 : ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"enter the range for arr2\n";
    cin>>n;
    int arr2[n];
    cout<<"enter the element in arr2";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<"common elements are\n";
    commonEle(arr1,m,arr2,n);
    cout<<endl;
    return 0;
}
