#include <stdio.h>

int main(){
    printf("HELLO\n");

    if(0){
        printf("0 : FALSE\n");
    }

    if(1){
        printf("1 : TRUE\n");   
    }

    if(100){
        printf("100 : TRUE\n");   
     }

    if(-1){
        printf("-1 : TRUE\n");
    }
}

////ifの()の中が0以外TRUEになる。
//// OUT PUT //////////
//HELLO
//1 : TRUE
//100 : TRUE
//-1 : TRUE
