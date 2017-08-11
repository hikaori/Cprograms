#include<stdio.h>
#include<string.h>

/*
 *
 * <string>
 *
 * one-dimensional array of characters terminate by a null character '\0'
 * e.g "Hello" -> {'H','e','l','l','o','\0'}
 *
 */

void str_function(){
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;

    /* copy str1 into str3 */
    strcpy(str3,str1);
    printf("strcpy(str3 ,str1): %s\n",str3);
    // OUT PUT => strcpy(str3 ,str1): Hello

    /* concatenates str1 and str2 */
    strcat(str1,str2);
    printf("strcat(str1,str2): %s\n",str1);
    //// OUT PUT => strcat(str1,str2): HelloWorld

    /* length of str1 after concatenation */
    len = strlen(str1);
    printf("strlen(str1): %d\n",len);
    /// OUT PUT => strlen(str1): 10
    
    /*strcmp(s1,s2) - returns 0 if s1 and s2 are the same; less than 0 if s1 <s2; */
    char s1[] ="hello";
    char s2[] ="hello!";
    int strCmp = strcmp(s1,s2);
    printf("strCmp: %d\n", strCmp);
    // OUT PUT => strCmp: -33

    /* strstr(s1, s2) - returns a pointer to the first occurrence of string s2 in s1. */
    

}
int main(){
    str_function();
}
