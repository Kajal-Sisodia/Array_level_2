#include<stdio.h>

int isSubSum(int arr[],int n, int sum){
    int s=0,curr=0;
    for(int e=0; e<n; e++){
        curr += arr[e];
        while(sum<curr){
            {
                curr = curr - arr[s];
                s++;
            }
            if(curr == sum){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[]={-2,-1,4,1,2,1,-1,-2};
    int size = sizeof(arr)/sizeof(arr[0]);
    if(isSubSum(arr, size,8)){
        printf("sum is found");
    }
    else{
        printf("Not found");
    }
    

    
    return 0;
}