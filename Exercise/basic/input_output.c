#include<stdio.h>

void get_put_char(){
    int c;
    printf("Enter a value:");
    c = getchar();

    printf("\nYou entered:");
    putchar(c);
    // 'hello'を入力した場合のOUTPUT'h'
}

void get_puts(){
    char str[100];

    printf("Enter a value:");
    gets(str);

    printf("\nYou enterd:");
    puts(str);  // OUT PUT -> You enterd:hello
}

void scanf_printf(){
    char str[100];
    int i;
    printf("enter a vale:");
    scanf("%s %d",str, &i);

    printf("\nYou enterd: %s %d", str, i);
    //OUT PUT -> You enterd: hello 0
}

int main(){
//      get_put_char();
      get_puts();
//      scanf_printf();
}
