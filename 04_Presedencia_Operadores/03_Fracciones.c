#include <stdio.h>

int main(){
    double a=1; double b=3; double c=5;
    double d=30; double e=23; double z;

    z = (a/b+(b/c+(a/d/(e/d))));
    printf("%f \n",z);

    double x=5; double y=2; double t=1;
    double m=4;

    double h = ((x+(y/t))/t+(y/(y-(t/m))));
    printf("%f\n",h);

    return 0;
}