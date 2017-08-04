/*
1. Get the ``Hello, world!'' program to work on your computer. If you're using a Unix machine,
the instructions in the notes should get you started. If you're using a commercial compiler on a
home computer, the compiler's instruction manuals should (really, must) tell you how to enter,
compile, and run a program. (In either case, the ``Compiling C Programs'' handout should help,
too.)
*/

//[answer]
#include <stdio.h>
//int main(){
//	printf("Hello world\n");
//} 

/*
2. What do these loops print?
for(i = 0; i < 10; i = i + 2) {
printf("%d\n", i);
}
*/
//[answer]
// 0
// 2
// 4
// 6
// 8

/*
for(i = 100; i >= 0; i = i - 7) {
printf("%d\n", i);
}
*/
//[answer]
//100
//93
//86
//79
//...
//2


/*
for(i = 1; i <= 10; i = i + 1) {
printf("%d\n", i);
}
*/
//[answer]
//1
//2
//3
//...
//9

/*
for(i = 2; i < 100; i = i * 2) {
printf("%d\n", i);
}
*/
//[answer]
//2
//4
//8
//16
//...
//64

/*
3. Write a program to print the numbers from 1 to 10 and their squares:
1 1
2 4
3 9
...
10 100
*/
//[answer]
//int main(){
//	for(int i = 1; i <= 10; i++) {
//	  printf("%d %d\n", i, i*i);
//	}
//}
 
/*
4. Write a program to print this triangle:
*
**
***
****
*****
******
*******
********
*********
**********

*/
//[answer]
int main(){
	char array[10];
	
	for(int i=1; i<=10; i++){
		for(int j=0; j<=9; j++){
	    	 array[j]='*';
		}
		for(int k=9; k>=i; k--){
	         array[k]='\t';
		}
	  
	  printf("%s\n",array);
	//	puts(array);
	}	
}
