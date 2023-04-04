#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[], int n, int key){
    int c=1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"tera dhyan kidhar hai tera element idher hai  "<<c;
            return;
        }
        c++;
    }
    cout<<"nhi hai wo jisse tu dhundh raha hai"<<c;
}
int main(){
    int n;
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
    linearSearch(arr,n,key);
    return 0;
}