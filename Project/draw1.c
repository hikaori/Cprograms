#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[]){

    printf("%s started on",argv[0]);
    fflush(stdout);
    system("date");

    printf("Input file : %s\n",argv[1]);

    int maxchar = 256;
    char buffer[256];

    FILE *fp;
    fp = fopen("inputfile.1","r");

    int img_count;
    int lineto_count;
    int end_count;
    int print_count;
    int draw_count;
    int translate_count;
    int child_count;
    int coment_count;

    while(fgets(buffer,maxchar,fp) != NULL){
        fscanf(fp,"%s",buffer);
        printf("Read String1 |%s|\n",buffer);
    
        //'strcmp' is compare string. if it equal return 0.
        if(strcmp(buffer,"Image") == 0){
            img_count++;
        }
        else if(strcmp(buffer,"lineTo") == 0){
            lineto_count++;
         } 
        else if(strcmp(buffer,"End") == 0){
             end_count++;
        }
        else if(strcmp(buffer,"print") == 0){
             print_count++;
         } 
        else if(strcmp(buffer,"draw") == 0){
             draw_count++;
        }
        else if(strcmp(buffer,"translate") == 0){
            translate_count++;
         } 
        else if(strcmp(buffer,"child") == 0){
             child_count++;
        }
        else if(strcmp(buffer,"#") == 0){
             coment_count++;
        } 
    }
    printf("%d Image definition(s)\n", img_count);
    printf("%d lineTo definition(s)\n", lineto_count);
    printf("%d end definition(s)\n", end_count);
    printf("%d print definition(s)\n", print_count);
    printf("%d draw definition(s)\n", draw_count);
    printf("%d translate definition(s)\n", translate_count);
    printf("%d child definition(s)\n", child_count);
    printf("%d coment definition(s)\n", coment_count);
    return 0;
}
