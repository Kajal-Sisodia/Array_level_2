#include<iostream>
using namespace std;

void multiplyMat(int arr1[], int arr2[], int n){
    arr2[0]=arr1[0]; 
    for(int i=1; i<n; i++){
        arr2[i] = arr2[i-1] * arr1[i];
    }
    int prod = 1;
    for(int i=n-1; i>0; i--){
        arr2[i] = arr2[i-1] * prod;
        prod *= arr1[i];
    }
    arr2[0] = prod;
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = n1;
    int arr2[n2];
    multiplyMat(arr1, arr2, n1);

    for(int i=0; i<n2; i++){
        cout<<arr2[i]<<" ";         //120 60 40 30 24 
    }
    return 0;
}