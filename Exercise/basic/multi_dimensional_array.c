#include <stdio.h>


int main() {
    int arr[3][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} };

    int val = arr[2][3];

     printf("arr[2][3] = %d\n", val); // OUT PUT: 11

     for(int r = 0; r < 3; r++) {
        for(int c = 0; c < 4; c++) {
             printf("arr[%d][%d] = %d\n", r, c, arr[r][c]);
             // OUT PUT : content
         }
     }
}

