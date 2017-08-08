#include<stdio.h>

int main(){
	int a = 10;
for(int i =0; i<3 ; i++){
	printf("a:%d\n",a);
	int j = ++a;
	int k = a++;    //aがkに代入されてからa+1がされる。
	printf("j: %d\n",j);
	printf("k: %d\n",k);
	}
}
//// OUT PUT ////
// a:10
// j: 11
// k: 11
// a:12
// j: 13
// k: 13
// a:14
// j: 15
// k: 15
////////////////
