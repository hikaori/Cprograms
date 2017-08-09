///// pointer /////////////////////////////
// 　int X  => holding integer type
//   int* Y => holding the memory address of the data type(this case:integer).
//  
//  @@@@ int* Y != int *Y @@@@
//
//  int* Y => address
//  int *Y => content(value)
//
//  &X     => address. think like 'what's memorry address'
/////////////////////////////////////////////

#include<stdio.h>

int main(){
    int var = 20;
    int* ip; /* pointer variable. */
        // 'int*' => think as one of data type. holds the memory address. 
    ip = &var; /* store address of var in pointer varaiable. */
        // '&' => think like what's is memorry address?
    
    printf("Address of var variable: %x\n",&var);
            // OUT PUT //  Address of var variable: 5a48aabc //
    printf("Address stored in ip variable: %x\n",ip);
            // OUT PUT //  Address stored in ip variable: 5a48aabc //


    /* access the content(value)using the pointer */
    printf("Content of ip(&var) variable :%d\n",*ip);
            // OUT PUT //  Content of ip(&var) variable :20 //

    int* ptr = NULL; // The NULL pointer is a constant with a value of zero
                                    // defined in several standard libraries
    printf("The value of ptr is %x\n",ptr);
            // OUT PUT //  The value of ptr is 0  //
}
