#include <stdio.h>
#include <string.h>
#include "support.h"



int main(){
    int d = 1;
    while(d == 1){

        float a,b = 0;
        char c[5];

        printf("set two integer numbers separated by an enter\n");
        scanf("%f",&a);
        scanf("%f",&b);
        printf("choose the operation, plus, rest, div, mult, exit\n");
        scanf("%s",&c);

        if(strcmp(c,"plus") == 0){
            printf("%f\n", pluus(a,b));
        }else if(strcmp(c,"rest") == 0){
            printf("%f\n", rest(a,b));
        }else if(strcmp(c,"div") == 0){
            printf("%f\n", div(a,b));
        }else if(strcmp(c,"mult") == 0){
            printf("%f\n",mult(a,b));
        }else if(strcmp(c,"exit") == 0){
            printf("quiting...\n");
            d = 0;
        }

        printf("a is %f, b is %f, c is %s\n", a, b, c);

    }
    return 0;
}