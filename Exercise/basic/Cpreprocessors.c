//  preprocessors
//  1.#include
//  2.#define 記号定数 値
//  3.#define マクロ名 置換文字列
//  4.#ifdef 記号定数
//  　　　　：
//  　#endif
//

#define MAX_ARRAY_LENGTH 20
#include<stdio.h> //#include "myheader.h" =>自分で定義した.hファイルの場合。


// 定義されている　FILE_SIZE　の値を42に変更する場合
#undef FILE_SIZE
#define FILE_SIZE 42


//例文メイン記載
#define MESSAGE "YOU UNROCK."
#ifndef MESSAGE                 //if MESSAGE is undefined
    #define MESSAGE "YOU ROCK!"  // define "YOU ROCK!"
#endif


#ifdef DEBUG
    /* Your debugging statements */
#endif

//(#)operator - Stringize,it converts a macro parameter into a string constant.
//this operator may be used only in amacro having a specified argument or parameter list.
//#define メソッド名1　メソッド名2 => メソッド名1　 を　メソッド名2　 に置き換える。　
#define message_for(a,b)\
        printf(#a " and " #b ":We love you!\n")


//(##)operator - token-pasting operator:it combines two arguments.
//It permits two separat tokens in the macro def to be joined into a single token.
#define tokenpaster(n) printf("token" #n "= %d\n",token##n)
                                                //token##n => token + n
                                                //       例題）token + n(34) =>token34

// プログラム内のforever を for(;;)に置き換える。
#define forever for(;;) /* infinite loop */

#define square(x) ((x) *(x)) 
//((x) *(x))にする理由　x = 2+3　の場合 2 + 3 x 2 + 3 = 11となってしまう。
//                                      (2+3) x (2+3) = 25

#define MAX(x,y) ((x)>(y)?(x):(y))


int main(){
    printf("MESSAGE : %s\n",MESSAGE); 
    //OUT PUT => MESSAGE : YOU UNROCK.
    //OUT PUT => MESSAGE : YOU ROCK!
    //                    (if commentout '#define MESSAGE "YOU UNROCK."')
    
    message_for(kaori,Starbucks);
    //OUT PUT =>  kaori and Starbucks:We love you!
    
    int token34 = 40;
    tokenpaster(34);
    //OUT PUT =>  token34= 40
    
    printf("square : %d\n", square(2 + 3));

    /////// predefine ///////
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__); // Defined as 1 when the compiler compiles with the ANSI standard.
}

