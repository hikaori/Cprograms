#include <stdio.h>

const int MAX = 3;

void pointers_of_string() {
     // Use an array of pointers to char to store a list of strings.
     char *names[] = { "Derrick", "John", "Brian", "Glen" };
    // char **names;
     for(int i = 0; i < 4; i++) {
         printf("The Content of names[%d] = %s\n", i, names[i]);
         // OUT PUT
         // The Content of names[0] = Derrick
         // The Content of names[1] = John
         // The Content of names[2] = Brian
         // The Content of names[3] = Glen
      }
}
int main() {
     pointers_of_string();
        
    int var[] = {10, 100, 200};
    int i, *ptr[MAX];
                                              
    for(i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; 
        printf("The content of var[%d] = %d\n", i, *ptr[i]);
        // OUT PUT
        // The content of var[0] = 10
        // The content of var[1] = 100
        // The content of var[2] = 200
    }
    return 0;
}
