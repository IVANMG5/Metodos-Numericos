#include <stdio.h>

int main(){

    int min = 60;
    int hora = 60;
    int dia = 24;
    int año = 365;

    double segundos = 19*año*dia*hora*min;

    printf("Segundos vividos %f \n", segundos); 

    return 0;
}