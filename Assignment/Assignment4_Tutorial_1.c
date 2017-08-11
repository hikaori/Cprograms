#include<stdio.h>
#include<stdlib.h> /* for atoi():converting a string to an integer */

int getLine(char[],int);

int main()
{
    char inputline[100];
    float miles;
    float gallons;
    float mpg;
    
    printf("enter miles driven:\n");
    getLine(inputline,100); // this line for setting input to array. return is not really important.
    printf("getLine %d\n",getLine(inputline,100)); // このライン使う場合はインプットを２回やって！getLine()２回呼んでるから。
    miles =atoi(inputline); // getLine でinputline()に格納した値をagumentとして使う。
                            

    printf("enter gallons used:\n");
    getLine(inputline,100);
    gallons = atoi(inputline);

    mpg = miles / gallons;
    printf("You got %.2f mpg\n",mpg);
    
    return 0;
}

int getLine(char line[], int max)
{
    int nch = 0;
    int c;
    max = max - 1;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            break;

        if(nch < max)
        {
            line[nch] = c;
            nch = nch + 1;
        }
    }
    if(c == EOF && nch == 0)
    {       
        return EOF;
    }

    line[nch] = '\0';
     return nch;       /// ?? nch = length of input ?
}
