#include<stdio.h>

int main(){
	int a = 10;
for(int i =0; i<3 ; i++){
	printf("a:%d\n",a);
	int j = ++a;
	int k = a++;
	printf("j: %d\n",j);
	printf("k: %d\n",k);
	}
}
