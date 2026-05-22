// implement bubble short
#include <stdio.h>

void printarray(int*arr , int n){
    
    for(int i =0 ; i<n ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubblesort(int *arr , int n){
    int temp;
    for(int i =0 ;i<n-1 ;i++){            //for no. of passes
        for(int j =0 ;j <= n-1-i;j++){     //for comparison in each pass
            if(arr[j]>arr[j+1]){
                temp =arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



int main(){
    int arr[] ={2,1,45,89,23,4,3,2};
    int n =sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;
}
