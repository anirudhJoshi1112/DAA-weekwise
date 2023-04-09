#include<bits/stdc++.h>
using namespace std;
int last(int arr[],int n,int key){
    int c=1;
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else
        end=mid-1;
    }
    return ans;
}
int first(int arr[],int n,int key){
    int c=1;
   int start=0,end=n-1,mid,ans=-1;
   while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    else
    end=mid-1;
   }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the array element in sorted form\n"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched = ";
    int key;
    cin>>key;
    if(last(arr,n,key)==-1 || first(arr,n,key)==-1) cout<<"not present";
    else cout<<key<<" "<<last(arr,n,key)-first(arr,n,key)+1;
    return 0;
}
