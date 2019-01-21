//
//  main.c
//  Insertion_algorithm
//

#include <stdio.h>

int const SIZE = 5; //array will only take 5 elements
int i;

void insertionSort(int A[]){
    int j,key;
    for(i=1;i<SIZE;i++){
        j = i;
        key = A[i];
        while(j>0 && A[j-1]>key){
            A[j] = A[j-1];
            j = j-1;
        }
        A[j] = key;
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

