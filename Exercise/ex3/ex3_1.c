#include<stdio.h>
#define MAXLINE 1000
void escape(char s[],char t[]);

int main(void){

	char s[MAXLINE],t[MAXLINE];

	//putchar('s');
	//s[0] = getchar();
	//printf("%s",s);
	printf("enter a string for s \n");
 	gets(s);
	printf("entered string s is %s", s);

	printf("enter a string for t\n");
	gets(t);
	printf("entered string t is %s", t);

	escape(s,t);
}

void escape(char s[],char t[]){
	int k,i;
	k=0;
	for(i=0; t[i]!='\0'; i++){
	while(t[i]==' ')
	{
		s[k]='z';
		i++;
k++;
	}
	  s[k]=t[i];
	  k++;
}
s[k]='\0';
	printf("\nthis is output\n %s:",s);	
}



