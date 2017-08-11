//////    Review Questions   ///////

/*1. What would the expression
c = getchar() != EOF
Do?

[answer]
    if not end of character ,get the character.
*/

/*2. Why must the variable used to hold getchar's return value be type int?
[answer]
  So that it can reliably store the value EOF.
*/

/*3. What is the difference between the prefix and postfix forms of the ++ operator?
[answer]
  The prefix form increments first, and the incremented value goes on to participate in the surrounding expression (if any). The postfix form increments later; the previous value goes on to participate in the surrounding expression.
*/

/*4. (trick question) What would the expression
i = i++
Do?
[answer]
 Nothing.it's undefined.
*/

/*5. What is the definition of a string in C?
[answer]
 An array of characters, terminated with the null character \0.
*/


//////    Exercises //////////
/* 1 
#include<stdio.h>
int main(){
    char c;
      while((c = getchar()) != EOF)
   // while((c = getchar())! = EOF)
        putchar(c);
}
*/

//Ex.2  
#include<stdio.h>

int getLine(char line[], int max){
        int nch = 0;
        int c;
        max = max -1; /* leave room for '\0' */

        while((c = getchar()) != EOF){
            if(c == '\n')
                break;
            if(nch < max){
                line[nch] = c;
                nch = nch + 1;
            }
        }

        if( c == EOF && nch == 0)
            return EOF;
    
        line[nch] = '\0';
        return nch;
}

int main(){
    int max = 5;
    char arry[max];
    printf("Ex.2 %d", getLine(arry, max));

// Ex.3
    while(getLine(arry,256) != EOF){
        printf("Ex.3 %s\n",arry);

    }
}
