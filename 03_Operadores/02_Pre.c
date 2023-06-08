#include <stdio.h>

int main(){

    int var = 1;
    int con = 1;

//Equivalente a var = var+1
    printf("%d - ", ++var);
    printf("%d\n", var);
//Equivalente a con = con-1
    printf("%d - ", --con);
    printf("%d\n", con);


    return 0;
}