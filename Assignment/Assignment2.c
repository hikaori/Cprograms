/*Review Questions:
1. What are the two different kinds of division that the / operator can do? Under what
circumstances does it perform each?
*/
//[answer]
//'/' => return divide Number
//'%' => return remained Number


/*
2. What are the definitions of the ``Boolean'' values true and false in C?
*/
//[answer]
// true : 1
// false : 0

/*
3. Name three uses for the semicolon in C.
*/
//[answer]
//Terminating declarations, terminating statements, and separating the three control expressions in a for loop.

/*
4. What would the equivalent code, using a while loop, be for the example
for(i = 0; i < 10; i = i + 1)
printf("i is %d\n", i);
*/
//[answer]
//i = 0;
//while(i < 10){
//    printf("i is %d\n",i);
//    i++;
//}
/*
5. What is the numeric value of the expression 3 < 4 ?
*/
//[answer]
//  1 (TRUE)

/*
6. Under what conditions will this code print ``water''?
if(T < 32)
printf("ice\n");
else if(T < 212)
printf("water\n");
else printf("steam\n");
*/
//[answer]
//if T equal to 32 or  greter than 32 and less than 212. 

/*
7. What would this code print?
int x = 3;
if(x)
printf("yes\n");
else printf("no\n");
*/
//[answer]
// yes (numeric Number except 0 is true).

/*
8. (trick question) What would this code print?
int i;
for(i = 0; i < 3; i = i + 1)
printf("a\n");
printf("b\n");
printf("c\n");
*/
//[answer]
//a
//a
//a
//b
//c
//(if there is no {} with for loop, the body for it is one line after it. )

////////////////////////////
//  Tutorial Section
////////////////////////////

/*1. Type in and run this program, and compare its output to that of the original ``Hello, world!'' program (exercise 1 in assignment 1).
*/
/*
#include<stdio.h>

int main(){
    printf("Hello,");
    printf("world!\n");
    return 0;
}
*/

/*2. Type in and run this program:
*/
/*
#include<stdio.h>

int main(){
    int i;

    printf("statement 1\n");
    printf("statement 2\n");
    for(i = 0; i < 10; i = i+1)
    //{ 
        printf("statement 3 \n");
        printf("statement 4 \n");
    //} 
    printf("statement 5\n");

    return 0;
}
*/

/*
3. Type in and run this program:
*/
/*
#include<stdio.h>

int main(){
    int i, j;

    printf("start of program\n");

    for(i = 0; i<3; i = i+1){
        printf("i is %d\n",i);
        for(j = 0; j<5 ;j=j+1)
            printf("i is %d, j is %d\n", i,j);
        printf("end of i = %d loop\n",i);
    }
    printf("end of program\n");

    return 0;
}
*/
/////////////////////////////////////
//   Exercises
/////////////////////////////////////

/*
1. Write a program to find out (the hard way, by counting them) how many of the numbers
from 1 to 10 are greater than 3. (The answer, of course, should be 7.) Your program should have a loop which steps a variable (probably named i) over the 10 numbers. Inside the loop, if i is greater than 3, add one to a second variable which keeps track of the count. At the end of the program, after the loop has finished, print out the count.
*/
/*
[answer]
#include<stdio.h>
int count;

int main(){
    for(int i=1; i <= 10; i++){
        if(i > 3){
            count++;
        }
    }
    printf("count :%d\n",count);
}
*/

/*
 2. Write a program to compute the average of the ten numbers 1, 4, 9, ..., 81, 100, that is, the average of the squares of the numbers from 1 to 10. (This will be a simple modification of Exercise 3 from last week: instead of printing each square as it is computed, add it into a variable sum which keeps track of the sum of all the squares, and then at the end, divide the sum variable by the number of numbers summed.)
 If you keep track of the sum in a variable of type int, and divide by the integer 10, you'll get an integer-only approximation of the average (the answer should be 38). If you keep track of the sum in a variable of type float or double, on the other hand, you'll get the answer as a floating-point number, which you should print out using %f in the printf format string,  not  %d. (In a printf format string, %d prints only integers, and %f is one way to print floating-point numbers. In
 this case, the answer should be 38.5.)
*/
/*
[answer]
#include<stdio.h>
int main(){
    int sum=0;
    int average=0;
    for(int i = 1; i <= 10; i++){
        sum += i*i;
    }
    average = sum / 10;
    printf("average =%d\n",average);
}
*/

/*
3. Write a program to print the numbers between 1 and 10, along with an indication of whether each is even or odd, like this:
1 is odd
2 is even
3 is odd
*/
/*
#include<stdio.h>
int main(){
    for(int i=1; i <= 10; i++){
        if(i % 2 == 0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);
        }
    }
}
*/


/*
4. Write a program to print the first 7 positive integers and their factorials. (The factorial of 1 is 1, the factorial of 2 is 1 * 2 = 2, the factorial of 3 is 1 * 2 * 3 = 6, the factorial of 4 is 1 * 2 * 3 * 4 = 24, etc.) [Extra credit: why did I only ask for the first 7?]
*/
/*
[answer]
#include<stdio.h>
int main(){

    for(int i=1; i <= 7; i++){
        int factorial = 1;
        for(int j=1; j <= i; j++){
            factorial *= j;
        }
    printf("factorial of  %d : %d\n", i ,factorial);
    }
}
*/

/*
5. Write a program to print the first 10 Fibonacci numbers. Each Fibonacci number is the sum of the two preceding ones. The sequence starts out 0, 1, 1, 2, 3, 5, 8, ...
*/
/*#include<stdio.h>
int main(){
    int A = 0 ;
    int B = 1 ;
    int sum = 0;

    for(int i=1 ; i <= 10; i++){
        sum = A + B;
        printf("%d\n", sum);
        
        A = B ;
        B = sum ;
    }
}*/

///////////////////////////////////
//   Recursion
//////////////////////////////////
/*
(1. Using loops) vs ( 2. Without using loops) 1. Factorial
Given n of 1 or more, return the factorial of n, which is n * (n-1) * (n-2) ... 1. Compute the result recursively (without loops).
factorial(1) → 1 factorial(2) → 2 factorial(3) → 6
*/
/*[answer]
#include<stdio.h>
int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
 printf("factorial :%d",factorial(4));
}
*/

/*
2. Fibonacci
The fibonacci sequence is a famous bit of mathematics, and it happens to have a recursive definition. The first two values in the sequence are 0 and 1 (essentially 2 base cases). Each subsequent value is the sum of the previous two values, so the whole sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21 and so on. Define a recursive fibonacci(n) method that returns the nth fibonacci number, with n=0 representing the start of the sequence.
fibonacci(0) → 0 fibonacci(1) → 1 fibonacci(2) → 1
*/
/*[answer]
#include<stdio.h>
int fibonacci(int n){
    if(n <= 1 ){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    printf("fibonacci:%d",fibonacci(6));

}
*/

/*
3. BunnyEars
We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies (1, 3, ..)
    have the normal 2 ears. The even bunnies (2, 4, ..) we'll say have 3 ears, because
    they each have a raised foot. Recursively return the number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).
    bunnyEars2(0) → 0 bunnyEars2(1) → 2 bunnyEars2(2) → 5
*/
/*[answer]
#include<stdio.h>
int bunnies(int n){
    if(n==0){
        return 0;
    }
    else if(n % 2 == 0){
        return bunnies(n-1)+3;
    }
    else{
        return bunnies(n-1)+2;
    }
}
int main(){
    printf("bunnies :%d",bunnies(5));
}
*/

/*
4. Power N
Given  base  and  n  that are both 1 or more, compute recursively (no loops) the
value of base to the n power, so powerN(3, 2) is 9 (3 squared).
powerN(3, 1) → 3 powerN(3, 2) → 9 powerN(3, 3) → 27
*/

/*[answer]
#include<stdio.h>
int powerN(int base, int n){
    if(n == 1){
        return base;
    }
    else{
        return powerN(base,n-1)*base;
    }
}
int main(){
    printf("powerN :%d",powerN(3,3));
}
*/

/*
5. Sum Digits
Given a non-negative int n, return the sum of its digits recursively (no loops).
Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
sumDigits(126) → 9 sumDigits(49) → 13 sumDigits(12) → 3
*/

#include<stdio.h>
int sumDigits(int n){
    if(n == 0){
        return 0;
    }
    else{
        return  n % 10 + sumDigits(n /10); 
    }
}
int main(){
   printf("sumDigits :%d",sumDigits(12));

}

