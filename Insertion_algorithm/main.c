//
//  main.c
//  Insertion_algorithm
//

#include <stdio.h>

int const SIZE = 6; //array will only take 6 elements

int main(){
    int A[10]; //array can have a max of 10 elements
    int i;
    
    printf("Enter elements: \n");
    for(i=0;i<SIZE;i++){
        scanf("%d",&A[i]);
    }
    
    printf("Elements entered: \n");
    for(i=0;i<SIZE;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    
    return 0;
}

