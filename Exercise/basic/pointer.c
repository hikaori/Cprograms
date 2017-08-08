#include<stdio.h>
#include<string.h>

int main(){
    int data;
    int *ptr;

    data = 5;

    printf("整数型の変数dataの値 = %d\n", data);  // out put 5
    printf("変数型の変数dataのアドレス = %08X\n",&data); /// out put  5AC41ACC

    ptr = &data;

    printf("ポインタ型の変数ptr = %08X\n", ptr); /// out put  5AC41ACC 
    printf("ptrが指す場所に保存されている値 = %d\n", *ptr);/// out put 5

    // & => address
    // * => addressから値を出す
    
    char array[7];
    char *ptrchar;

    strcpy(array,"abcdef");//char 配列に文字をコピー

    //ptrchar = &(array[0]);
    ptrchar = &(array[0]);
    strcpy(ptrchar,"ghijkl");

    printf("array= %s\n ptr = %s\n",array,ptrchar);
}
