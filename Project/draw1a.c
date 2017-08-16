#include <stdio.h>
#include <stdlib.h>

int main(int argi,char *argv[]){

    int count_Image  = 0;
    int count_lineTo,count_End,count_print,count_draw,count_translate,         count_child,count_comment;
    FILE *fp;

    int c = 0;
    char str1[1000];

    fp = fopen("inputfile.1", "r");
    if( fp == NULL ){
        printf("Opening file error\n");
        return 0;
    }

   // fflush(fp);
    printf("%s started on %c",argv[0],system("date"));
    //system("date")

    printf("\nInput file :%s\n",argv[1]);

    //READING STRING FROM INPUT FILE.    
    while( (c = fgetc(fp)) != EOF ) {
        fscanf(fp,"%s",str1);
    // printf("Read String1 |%s|\n",str1);
    
        // COUNT EACH NUMBER OF COMMAND
        switch(*str1){
            case "Image":
                count_Image++;
                break;
            case 'lineTo':
                count_lineTo++;
                break;
            case 'End':
                count_End++;
                break;
            case 'print':
                count_print++;
                break;
            case 'draw':
                count_draw++;
                break;
            case 'translate':
                count_translate++;
                break;
            case 'child':
                count_child++;
                break;
            case 'comment':
                count_comment++;
                break;  
        }
    }
    printf("%d Image definition(s)",count_Image);
    fclose(fp);

    return 0;
}
