#include<stdio.h>
#include<stdlib.h> /* for atoi():converting a string to an integer */
#include<ctype.h>

int getLine(char[],int);
int myatoi(char str[]);


int main()
{
    char inputline[100];
    float miles;
    float gallons;
    float mpg;
    
    printf("enter miles driven:\n");
    getLine(inputline,100); // this line for setting input to array. return is not really important.
    miles = myatoi(inputline); // getLine でinputline()に格納した値をagumentとして使う。
                            

    printf("enter gallons used:\n");
    getLine(inputline,100);
    gallons = myatoi(inputline);

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
     return nch; 
}

int myatoi(char str[])
{
    int i;
    //int digit;
    int retval = 0;
    
    for(i = 0; str[i] != '\0'; i = i + 1)
    {
        printf("----------");
        if(!isspace(str[i])) // ??dosent take care of space...
            break;
    }
    for(; str[i] != '\0'; i = i + 1)
    {
        if(!isdigit(str[i])) // ?? dosent take care of character....
            break;
        retval = 10 * retval + (str[i]-'0');
    }
    return retval;
}
