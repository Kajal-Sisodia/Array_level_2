#include<iostream>
#include<algorithm>
using namespace std;

void findIntersection(int arr1[], int n1, int arr2[], int n2){
    int i=0, j=0;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]< arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    // array should be sorted
    int arr1[] = {2,4,5,7};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {4,5,7,8};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    findIntersection(arr1, n1, arr2, n2);
    return 0;
}