#include<iostream>
using namespace std;

void findPair(int arr[], int n, int sum){
    int res =0, l=0, h=n-1;
    while(l<=h){
        res = arr[l]+arr[h];
        if(res < sum){
            l++;
        }
        else if(res > sum){
            h--;
        }
        else{
            cout<<"("<<arr[l]<<", "<<arr[h]<<")";
            break;
        }
    }
}

int main(){
    int arr[] = {1,2,11,12,24,35};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cout<<"Enter the target sum: ";
    cin>>sum;
    findPair(arr, size, sum);
}