//
//  main.c
//  Insertion_algorithm
//

#include <stdio.h>

int const SIZE = 5; //array will only take 5 elements
int i;

void insertionSort(int A[]){
    int iMin,key;
    for(i=1;i<SIZE;i++){
        iMin = i;
        key = A[i];
        while(iMin>0 && A[iMin-1]>key){
            A[iMin] = A[iMin-1];
            iMin = iMin-1;
        }
        A[iMin] = key;
    }
    
}

int main(){
    int A[10]; //array can have a max of 10 elements
    
    printf("Enter elements: \n");
    for(i=0;i<SIZE;i++){
        scanf("%d",&A[i]);
    }
    
    printf("Elements entered: \n");
    for(i=0;i<SIZE;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    
    insertionSort(A);
    
    printf("Elements sorted: \n");
    for(i=0;i<SIZE;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    
    return 0;
}

