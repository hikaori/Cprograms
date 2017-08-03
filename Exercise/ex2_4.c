#include<stdio.h>
#include<string.h>

int main(){
	char s1[] = "hello";
	char s2[] = "ho";
	printf("%s\n",s1);
	printf("%c\n",s2[0]);

	int squeeze(char s1[],char s2[]);
}

int squeeze(char s1[],char s2[]){
	int k,i,j;
	
	for(k = 0; s2[k] != '\0'; k++){
	   for(i = 0; s1[i] != '\0'; i++){
	      if(s1[i] == s2[k]){
		for(j = i; s1[j] != '\0'; j++){
		  s1[j] == s1[j++];
		}
	      }
	   }
	}
printf("%s\n",s1);
return 0;
}

