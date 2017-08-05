#include <stdio.h>

void C(){
         printf("C");
}

void B(){
    C();
    printf("B");
}

void A() {
    B();
    printf("A");
}

int main() {
    A();
}

////// OUT PUT /////
//    CBA
// *functionの順番重要。最後に呼ばれるものを一番上に書く。

