#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[], int n, int key){
    int c=1,s=0,e=n-1;
    int m;
    while(s<=e){
        m=s+(s-e)/2;
        if(arr[m]==key){
            cout<<"tera element mil gaya "<<c;
            return;
        }
        else if(arr[m]<key){
            s=m+1;
        }
        else
         e=m-1;
         c++;
        
    }
    cout<<"element is not found"<<c;
}
int main(){
    int n;
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
    binarySearch(arr,n,key);
    return 0;
}