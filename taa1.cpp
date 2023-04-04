#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key,int&count){
    for(int i=0;i<n;i++){
        count++;
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    int count=0;
    cout<<"arre size to bata de array ka \n"<<n;
    cin>>n;
    int arr[n];
    cout<<"bhai jitna size dala utne he element bhi dal de \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"key insert ker\n";
    cin>>key;
    int loki = linearSearch(arr,n,key,count);
    if(loki==-1)
    cout<<"key is not found\n";
    else
    cout<<"key is found at index\n"<<loki<<endl;
    cout<<"the total no. of comparision is "<<count<<endl;
    return 0;
}