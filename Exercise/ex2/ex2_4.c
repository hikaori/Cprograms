#include<stdio.h>
#define MAXLINE 1000

int mgetline(char line[],int maxline);
void squeeze(char s1[],char s2[]);

int main(void)
{
    char s1[MAXLINE],s2[MAXLINE];
    
    putchar('s');
    putchar('1');
    mgetline(s1,MAXLINE);

    putchar('s');
    putchar('2');
    mgetline(s2,MAXLINE);

    squeeze(s1,s2);

    printf("%s",s1);

    return 0;
}

// get the character 
int mgetline(char s[],int lim)
{
    int i,c;
    
	//why lim-1 ---> because character always has null(\0).
    for(i=0;i<lim-1 && (c=getchar())!=EOF && c != '\n';++i)
        s[i] = c;

    if(c == '\n') // this is for what?===> not necesarry really.
        s[i++] = c;
    
    s[i] = '\0'; //ex) hello_\n
}

void squeeze(char s1[],char s2[])
{
    int i,j,k;
    k=0;

    for(i=0;s1[i]!='\0';++i)
    {
        for(j=0; (s1[i]!=s2[j]) && s2[j]!='\0' ;++j) //counting number of character s2.(j)
            ;
        if(s2[j]=='\0') // is this situation happen?
            s1[k++] = s1[i];
    }
    
    s1[k]='\0';
}
