/*
< Binary, Hexadecimal, Decimal >
1. Converting Decimal to Binary.
a. 12
b. 185
c. 294

answer=> a 1001
	 b 10111001
	 c 101100110


2. Converting Binary to Decimal.
a. 101101
b. 11101011
c. 1010

answer=> a 29
	 b 235
	 c 14

3. Converting Decimal to Hexadecimal
a. 138
b. 119
c. 59

answer=> a 8A
	 b 71
	 c 3B


4. Converting Hexadecimal to Decimal
a. 0x1A
b. 0x3F31
c. 0x31C

answer=> a 17
	 b 16177
	 c796


5. Converting Binary to Hexadecimal
a. 10010111
b. 101101111110
c. 1111

answer=> a 12D
	 b 16FD
	 c 18


6. Converting Hexadecimal to Binary
a. 0x1A3B
b. 0xABCD
c. 0x111111

answer=> a 0001101000111011
	 b 1010101111001101
	 c 000100010001000100010001
	 
*/
/*< C >
Compile and debug your program at each step. If you don’t have access to a computer running C, you
may work on paper.*/

/*1. 1. Write a simple C program to read in two integers separated by a space from the keyboard.
Compute the sum of these two integers, then print a message back to the screen, in the format
“<int1> plus <int2> equals <sum>”.*/



/* answer
#include<stdio.h>

int main(){
        int Num1,Num2,sum;
        //Num1 = 1;
        //Num2 = 2;
	
	printf("Enter two integers:");
	scanf("%d %d",&Num1,&Num2);
        sum = Num1 + Num2;
        printf("%d/n",sum);
	
	return 0;
}
*/



/*2. Save your program in the file first.c. What is the command to compile your program into an
executable named first?

answer =>  gcc -o first first.c
*/

/*3. Change your program to read pairs of integers in a loop that executes 5 times (so 5 lines in total
are read). Save the integers in two parallel arrays, each of length 5. Then use another loop to
print 5 messages back to the screen, one for each pair.*/


#include<stdio.h>

int main(){
	int array1[5];
	int array2[5];
	int Num1,Num2,i,j;

	for (i =0; i<5; i++){
		printf("Enter two integers:");
        	scanf("%d %d",&Num1,&Num2);
		array1[i]=Num1;
		array2[i]=Num2;
	}
	
	for(j =0; j<5; j++){
		printf("%d %d\n",array1[j],array2[j]);
	}

	return 0;
}

/*4. What are the basic data types in C and their sizes in bytes?

answer => int(4bits)
	  short(4bits)
	  long(8bits)
	  char(1bits)*/


