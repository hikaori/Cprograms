#include<stdio.h>

const int MAX = 3;

void increment(){
    int arr[] ={10, 100, 200};
    int i;
    int *ptr;
    //int *ptr; , int* ptr; は同じ。

    ptr = arr; /* arr address in pointer */
    for (i = 0; i < MAX; i++){
        printf("Adress of arr[%d] = %x\n", i ,ptr); //print out address
        printf("Content of arr[%d] = %d\n", i ,*ptr); // print out content
        ptr++;
    }
}

void pointer_comparison(){
    int arr[] = {10, 100 ,200};
    int i, *ptr;
    //int *ptr; , int* ptr; は同じ。

    ptr = arr;  /* arr address in pointer */
    i = 0;
    while(ptr <= &arr[MAX-1]){
        printf("Adress of arr[%d] = %x\n", i ,ptr); //print out address
        printf("Content of arr[%d] = %d\n", i ,*ptr); // print out content
        ptr++;
        i++;
    }  
}

int main(){
    increment();
    pointer_comparison();
    return 0;
}
