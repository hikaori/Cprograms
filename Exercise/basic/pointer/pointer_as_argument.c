#include<stdio.h>

void swap_wrong(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    // return で何も返さない為、このメソッドは呼ばれても何もしない。
}

void swap(int *px,int *py){
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

double get_average(int *arr,int size){ //*arr => pointer(address)
    int sum = 0;
    double avg;

    for(int i = 0; i < size; i++){
         sum += arr[i];
    }
    avg = (double)sum / size;
    
    return avg;
}

int main(){
    int a = 10;
    int b = 7;
    swap(&a,&b);
    printf("a: %d, b: %d\n",a,b); //OUT PUT => a: 7, b: 10

    int transaction[5] = {1000, 2000, 1500, 900, 1200};
    double avg = get_average(transaction,5);
    printf("The average is : %f \n", avg); //OUT PUT => The average is : 1320.000000 

    return 0;
}

