#include<stdio.h>

int findEvenOddSequence(int a[], int n){
    int res=1, count=1;

    for(int i=1; i<n; i++){
        if((a[i]%2==0 && a[i-1]%2!=0) || (a[i]%2!=0 && a[i-1]%2==0)){
            count++;
            if(count > res){
                res = count;
            }
        }
        else{

            count = 1;
        }
        return res;
    }
}

int main() { 

    int arr[] = {5, 10, 20, 6, 3, 8, 7, 1, 6, 12};  

    int n = sizeof(arr) / sizeof(arr[0]); 

 

    int result = findEvenOddSequence(arr, n); 

    printf("Length of the longest alternating even-odd subarray (Optimized): %d\n", result); 

 

    return 0; 

} 