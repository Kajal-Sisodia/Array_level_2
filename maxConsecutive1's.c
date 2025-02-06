#include<stdio.h>
#include<stdlib.h>

int maxConsecutiveOnes(int arr[], int n){
    int res=0, curr=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            curr=0;
        }
        else{
            curr++;
            if(curr>res){
                res = curr;
            }
        }
    }
    return res;
}

int main(){
    int arr[]={1,1,0,1,1,1,0,1,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = maxConsecutiveOnes(arr,size);
    printf("Maximum Consecutive Ones: %d",res);
    return 0;
}