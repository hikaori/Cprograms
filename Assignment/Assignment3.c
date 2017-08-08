///////////////////////////////////////
//      Tutorial Section
///////////////////////////////////////

/* print an addition table for 1+1 up to 10+10 */

#include<stdio.h>

int main(){
    int i,j;
    printf(" ");
    for(j=1; j<= 10; j = j+1)
        printf("%3d",j);
    printf("\n");

    for(i=1; i <= 10; i = i+1){
        printf("%2d",i);
        for(j=1; j <= 10; j = j+1)
            printf("%3d",i+j);
        printf("\n");
    }
  return 0;
}
