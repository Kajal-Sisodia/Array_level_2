#include<stdio.h>

int findCandidate(int arr[], int n){
    int max_index=0, count=1;
    for(int i=1; i<n; i++){
        if(arr[max_index]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            max_index = i;
            count = 1;
        }
    }
       return arr[max_index];
}
int isMajority(int arr[], int n, int cand){
    int count = 0;
    for(int i=0;  i<n; i++){
        if(arr[i]==cand){
            count++;
        }
    }
    if(count> n/2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int arr[]={1,3,3,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = findCandidate(arr,size);
    
    if(isMajority(arr,size,res)){
        printf("%d is the Majority Element", res);
    }
    else{
        printf("No element found");
    }
    return 0;
}