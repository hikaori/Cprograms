#include<stdio.h>
////// pointer int* / int** ////////////////////////////////////////
//
//int型変数へのポインタ型（＝int*型）int*は
//「int型変数へのポインタ型（＝int*型）」ですので、
//ポイント先のint型変数が格納されているメモリアドレスが入ります。 
//同様にint**は「int*型変数へのポインタ型（＝int**型）」ですので、
//ポイント先の「int*型変数」が格納されているメモリアドレスが入ります。
//
///////////////////////////////////////////////////////////////////////


int main(){
    int var;
    int *ptr;
    int **pptr;

    var = 2017;

    /* take the address of var */
    ptr = &var;

    /* take the address of ptr using 'address of' operator & */
    pptr = &ptr;

    printf("Content of var = %d\n",var);  // OUT PUT => Content of var = 2017
    printf("Content of *ptr = %d\n",*ptr); // OUT PUT => Content of *ptr = 2017
    printf("Content of **ptr = %d\n",**pptr); // OUT PUT => Content of **ptr = 2017

    return 0;
}
