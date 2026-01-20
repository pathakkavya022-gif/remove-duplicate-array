#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int j=0;
    if(n==0)
    return 0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];

        }
    }
    return j+1;
}
int main(){
    int binary;
    int arr[]={1,1,2,2,3,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    binary=duplicate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}