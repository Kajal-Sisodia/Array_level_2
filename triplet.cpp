#include<iostream>
using namespace std;
int isPair(int arr[], int n,int x, int si){
    int i = si, high = n-1;
    while(i<high){
        int res = arr[i]+arr[high];
        if(res == x){
            // cout<<"("<<arr[i-1]<<", "<<arr[i]<<", "<<arr[high]<<")"<<endl;
            return 1;
        }
        else if(res < x){
            i++;
        }
        else{
            high--;
        }
    }
    // cout<<"No triplet exist!";
    return 0;
}

int findTriplet(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        if(isPair(arr, n, sum-arr[i], i+1)){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[] = {1,2,3,11,23,34,24,10,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum;
    cout<<"Enter the target sum= ";
    cin>>sum;
    if(findTriplet(arr,n,sum)){
        cout<<"Triplet is found";
    }
    else{
        cout<<"Triplet not found!";
    }
    return 0;
}