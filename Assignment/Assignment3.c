///////////////////////////////////////
//      Tutorial Section
///////////////////////////////////////

/* print an addition table for 1+1 up to 10+10 */
/*
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
*/

/*Depending on whether the sum is even or odd, the
 * program prints an asterisk or a space. */
/*
#include<stdio.h>

int main(){
    int i,j;
    for(i =1; i <= 10; i=i+1)
        {
        for(j = 1; j <= 10 ; j=j+1)
            {
            if((i+j)%2 == 0)
                printf("*");
            else printf(" ");
            }
        printf("\n");
        }
    return 0;
}
*/

/*declares an array, then fills it with the squares of the numbers from 1 to 10:*/
/*
#include <stdio.h>

int main(){
    int i;
    int squares[11];    * [0...10]; [0] ignored */
    /* fill array;*/
/*    for (i = 1; i <= 10; i = i + 1)
        squares[i]= i*i;
    * print table; */
/*    printf("n\tsquare\n");
    for( i = 1; i <= 10; i = i + 1)
        printf("%d\t%d\n",i , squares[i]);
    return 0;
}
*/

///////////////////////////////////////
//        Exercises 
///////////////////////////////////////
/*
1. Write code to sum the elements of an array of int. (Write it as a function, if you like.) Use
it to sum the array
int a[] = {1, 2, 3, 4, 5, 6};
*/

/*
#include<stdio.h>
int main(){
    int a[] = {1,2,3,4,5,6};
    int sum;
    //for (int i = 0; i < sizeof(a); i++){ /// ???? out put number everytime change...???
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        sum += a[i];
    }
    //printf("%d\n",sizeof(a[0]));
    printf("%d\n",sum);
    return 0;
}
*/

/*
2. Write a loop to call the multbytwo() function (chapter 5, section 5.1, p. 1) on the numbers
1-10. For extra credit, compile your main function and the multbytwo() function as two
source files, one function per file.
*/
/*
#include<stdio.h>
int multbytwo(int x);

int main(){
    for(int i = 1; i <= 10; i++){
       printf("multbytwo[%d]: %d\n",i, multbytwo(i));
    }
    return 0;
}
int multbytwo(int x){
    return x * 2;
}
*/


/*
3. Write a square() function and use it to print the squares of the numbers 1-10:
1 1
2 4
3 9
4 16
...
9 81
10 100
*/
/*
#include<stdio.h>
int main(){
    for(int i =1 ;i <= 10 ; i++){
        int num = i * i;
        printf("%d %d\n",i,num);
    }
}
*/


/*
4. Write the function
void printnchars(char ch, int n)
which is supposed to print the character ch, n times. (Remember that %c is the printf format to
use for printing characters.) For example, the call printnchars('x', 5) would print 5 x's. Use this
function to rewrite the triangle-printing program of assignment 1 (exercise 4).
*/
/*
#include<stdio.h>
void printnchars(char ch, int n);
void printnchars(char ch, int n){
    for(int i =1 ;i <= n; i++){
        printf("%c",ch);
    }
}
int main(){
    printnchars('x',5);
}
*/


/*
 * 5. Write a function to compute the factorial of a number, and use it to print the factorials of
 * the numbers 1-7. (Extra credit: print the factorials of the numbers 1-10.)
 */
/*
#include<stdio.h>
int main(){
    for(int i = 1; i <= 7; i++){
        int factorial = 1;
        for(int k = 1; k <= i; k++){
          factorial *= k;
        }
        printf("%d\n",factorial);
    }
}
*/


/*
 * 6. (Kernighan and Ritchie) Write a function celsius() to convert degrees Fahrenheit to
 * degrees Celsius. (The conversion formula is °C = 5/9 * (°F - 32).) Use it to print a
 * Fahrenheit-to-Centigrade table for -40 to 220 degrees Fahrenheit, in increments of 10
 * degrees. (Remember that %f is the printf format to use for printing floating-point
 * numbers. Also, remember that the integer expression 5/9 gives 0, so you won't want to
 * use integer division.)
 */
/*
#include<stdio.h>
void celsius(float F); 

int main(){
  for (int i = -40; i <= 220; i=i+10){
    celsius(i);
  }
}
void celsius(float F){
    float C;
    C = 5.0/9.0 * (F - 32);
    printf("%fF:%f\n",F,C);
}
*/


/*
 * 7. Modify the dice-rolling program (Sec. 4.1) so that it computes the average of all the rolls
 * of the pair of dice. Remember that integer division truncates, so you'll have to declare
 * some of your variables as float or double.
 * For extra credit, also compute the standard deviation, which can be expressed as
 * sqrt((sum(x*x) - sum(x)*sum(x)/n) / (n - 1))
 * (where the notation sum(x) indicates summing all values of x, as usually expressed with the
 * Greek letter sigma; there is not such a sum() function in C!) If you put the line
 * #include <math.h>
 * at the top of the file, you'll be able to call sqrt().
 */
/*
#include<stdio.h>
#include<math.h>
int main(){
}
*/



/*
 * 8. Write either the function
 * randrange(int n)
 * which returns random integers from 1 to n, or the function
 * int randrange2(int m, int n)
 * which returns random integers in the range m to n. 
 */
/*
#include<stdio.h>
#include<stdlib.h>
void randrange(int n);
void randrange2(int min, int max);

int main(){
// for(int i = 1; i <= 5; i=i+1)
    randrange(5);
    randrange2(5,10);
}

void randrange(int n){
    int num = 0;
    num = rand() %  n + 1;
    printf("randrange :%d\n",num);
}

void randrange2(int min, int max){
    int num2 = 0;
    num2 = rand() % ( max - min ) + min;
    printf("randrange :%d\n",num2);
}
*/



/*
9. Rewrite the dice-rolling program to also print a histogram. For example, if there are 21
rolls of 7, the output line ``7: 21'' should also contain a horizontal row of 21 asterisks.
*/
