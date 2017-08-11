#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* function to generate and return random numbers ad int[](int*) */

int* get_random(){
    time_t t;
    static int randoms[10];

    /* set the seed */
    srand((unsigned) time(&t)); // initialize random number generator
                                //srand() を使わないと毎回同じ乱数が出てしまう

    for (int i = 0; i < 10 ; i++){
        randoms[i] = rand() % 50; //rand() % 50 =  0-49 
        printf("randoms[%d] = %d\n", i ,randoms[i]);
    }
    
    return randoms;
}

int main(){
    int *p;

    p = get_random();

    for (int i = 0; i < 10; i++){
        printf("*(p + %d) = %d\n", i , *(p + i));
    }
    return 0;
}
// OUT PUT //
// randoms[0] = 26
// randoms[1] = 43
// randoms[2] = 2
// randoms[3] = 31
// randoms[4] = 39
// randoms[5] = 3
// randoms[6] = 45
// randoms[7] = 1
// randoms[8] = 35
// randoms[9] = 5
// *(p + 0) = 26
// *(p + 1) = 43
// *(p + 2) = 2
// *(p + 3) = 31
// *(p + 4) = 39
// *(p + 5) = 3
// *(p + 6) = 45
// *(p + 7) = 1
// *(p + 8) = 35
// *(p + 9) = 5

