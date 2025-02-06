#include<stdio.h>

int maxSubArray(int arr[], int n){
    int max_sum = -100;
    int res = 0;
    for(int i=0; i<n; i++){
        res +=arr[i];
        if(max_sum<0){
            res = arr[i];
            max_sum += res;
        }
        
    }
    return max_sum;
}

int main(){
    int arr[]={-2,-1,4,1,2,1,-1,-2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = maxSubArray(arr, size);
    printf("%d",res);

    
    return 0;
}