#include<iostream>
#include<algorithm>
using namespace std;

void findPair(int arr[], int n, int target){
    int left=0, right = n-1;
    int flag = 0;
    while(left<right){
        int sum = arr[left] + arr[right];

        if(sum == target){
            cout<<"("<<arr[left]<<","<<arr[right]<<")";
            flag = 1;
            left++;
            right--;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    if(flag==0){
        cout<<"No pair found";
    }
}

int main(){
    int arr[] = {7,8,10,12,56,20,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int target;
    cout<<"Enter target sum: ";
    cin>>target;
    findPair(arr, n, target);
    return 0;
}