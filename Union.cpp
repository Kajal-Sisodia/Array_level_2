#include<iostream>
#include<algorithm>
using namespace std;

void findUnion(int arr1[], int n1, int arr2[], int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i] > arr2[j]){
            cout<<arr2[j++]<<" ";
        }
        else{
            cout<<arr1[i++]<<" ";
            j++;
        }
    }

    // printf remaining elements
    while(i<n1){
        cout<<arr1[i++]<<" ";
    }
    //printf remaining elements
    while(j<n2){
        cout<<arr2[j++]<<" ";
    }

}
int main(){
    //array should be sorted
    int arr1[] = {2,4,5,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {3,5,8,9};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    findUnion(arr1, n1, arr2, n2);
    return 0;
}
