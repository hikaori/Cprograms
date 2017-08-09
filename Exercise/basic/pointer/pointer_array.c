///////  pointer array //////
//  array => pointer points first address of array.
//  例　my_array => &my_array[0]
//  
//  pointer の基本
//  > * : content(value). what's inside address.
//  
//

#include<stdio.h>
int main(){
    int numbers[5] = {10, 9 ,8, 7 ,6};
    int *p;
    int i;

    p = numbers; /* &numbers[0] */

    printf("p :%d\n",p); // OUT PUT => p :1524566688
    printf("*p :%d\n",*p);  // OUT PUT => *p : 10

    printf("Array values using pointer \n");
    
    for(i = 0; i < 5; i++){
        printf("*(p + %d) = %d\n",i, *(p + i));  // OUT PUT ①
       // printf("(p + %d)= %d\n",i, (p + i));
    }

    for(i =0; i < 5; i++){
        printf("*(number + %d) = %d\n", i, *(numbers + i));  // OUT PUT②
    }
    return 0;
}

///  OUT PUT ①
//*(p + 0) = 10
//*(p + 1) = 9
//*(p + 2) = 8
//*(p + 3) = 7
//*(p + 4) = 6
//
//   OUT PUT②
//*(number + 0) = 10
//*(number + 1) = 9
//*(number + 2) = 8
//*(number + 3) = 7
//*(number + 4) = 6
