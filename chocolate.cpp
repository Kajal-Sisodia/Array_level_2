#include<iostream>
#include<algorithm>
using namespace std;

int minDiff(int arr[], int n, int m){
    if(m>n){
        return -1;
    }
    sort(arr, arr+n);
    int res = arr[m-1] - arr[0];
    for(int i=1; (i+m-1)<n; i++){
        res = min(res, (arr[i+m-1]-arr[i]));
    }
    return res;

}

int main(){
    int arr[] = {7, 3, 1, 8, 9, 12, 56};
    int m;
    cout<<"Enter number of students: ";
    cin>>m;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int res = minDiff(arr, n, m);
    cout<<res;
    return 0;
}
