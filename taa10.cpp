#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n,int& swaps,int& comparisons){
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            comparisons++;
            if(arr[j]>arr[j+1]){
                swaps++;
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
   int n,comparisons=0,swaps=0;
   cout<<"enter the size of array\n";
   cin>>n;
   int arr[n];
   cout<<"enter the element to sort\n";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    bubbleSort(arr,n,comparisons,swaps);

	cout<<"Sorted Array is :- ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Number of Comparisons: "<< comparisons <<endl;
    cout<<"Number of Swaps: "<< swaps <<endl;
    return 0;
}