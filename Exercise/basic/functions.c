#include <stdio.h>

extern int e; //extern => think about as 'final' in java.
int g;
static int s = 10; 

void foo(){
    int a = 10;
    static int sa = 10;
    // A static variable inside a function keeps its value
    // between function calls(invocations) *c言語の場合のみ

    a += 5;
    sa += 5;
    s += 5;

    printf("a = %d,sa = %d,s =%d\n", a, sa,s);
}

int main() {
    
    for(int i = 0; i < 10; i++){
        foo();
    }
    return 0;
}

////  OUT PUT //////
// a = 15,sa = 15,s =15
// a = 15,sa = 20,s =20
// a = 15,sa = 25,s =25
// a = 15,sa = 30,s =30
// a = 15,sa = 35,s =35
// a = 15,sa = 40,s =40
// a = 15,sa = 45,s =45
// a = 15,sa = 50,s =50
// a = 15,sa = 55,s =55
// a = 15,sa = 60,s =60









/////////////////////
