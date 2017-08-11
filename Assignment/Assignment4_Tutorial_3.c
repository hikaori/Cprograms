#include<stdio.h>

extern int getLine(char[] ,int);

int main()
{
    char word[20];
    int len;
    int i,j;

    printf("type something:");
    len = getLine(word,20);
    printf("len ;%d",len);

    for(i = 0; i < 80 - len; i++)
    {
        for(j = 0; j < i; j++)
            printf(" ");
        printf("%s\r",word);
    }
    printf("\n");

    return 0;
}

int getLine(char line[], int max)
{
    int nch = 0;
    int c;
    max = max - 1;

   while((c = getchar()) != EOF)
    {
        if(c =='\n')
            break;

        if(nch < max)
        {
            line[nch] = c;
            nch = nch + 1;
        }
    }

        if(c == EOF && nch == 0)
            return EOF;
        
        line[nch] = '\0';
        return nch;
}

