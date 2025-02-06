#include<iostream>
using namespace std;

int peakElement(int arr[], int n){
    int l=0, h=n-1;
    while(l<=h){
        int mid = (l+h)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1]<= arr[mid])){
            return mid;
        }
        else if(mid > 0 && arr[mid-1] >= arr[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5,20,40,30,20,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);

    int res = peakElement(arr, size);
    cout<<"Peak Element in the given array is "<<arr[res];
    return 0;
}