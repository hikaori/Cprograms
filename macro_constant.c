#include<stdio.h> //this is for printing 

#define MAX_NUM 1024
#define TRUE 1
#define FALSE 0
#define NEWLINE '\n'

int main(){
	// const prefix to declare constants with a specific type
	int i;
	i= 10 + 2 + MAX_NUM;

	printf("%d\n",i);
	printf("%c",NEWLINE);
	printf("%d\n", 0xab);
	printf("%d\n",215u);
	printf("%ld\n",30l);
	printf("%lu\n",201ul);
	printf("%d\n",011);

	printf("%f\n",3.1415);
	printf("%Lf\n",31415E-5L);

	printf("%c\n",'x');
	printf("%c\n",'a');
	printf("%c\n",'\f');
	printf("%c\n",'\"');
	
	if(TRUE){
		printf("This is TRUE!\n");
	}
	return 0;
} 
