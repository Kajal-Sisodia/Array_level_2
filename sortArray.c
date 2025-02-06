#include<stdio.h>

void swapItem(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void sort(int arr[], int n){
    int low=0, high=n-1, mid=0;

    while(mid <=high){
        if(arr[mid]==0){
            swapItem(arr, mid,low);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swapItem(arr, mid,high);
            high--;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d, ",arr[i]);
    }
}


int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    
    return 0;
}