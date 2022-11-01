/*Programa exemplo_1
Demonstração do uso de estrutura
condicional simples*/

#include <stdio.h>
#include <math.h>

main() {
    float n, r;
    scanf("%f",&n);
    if(n>0) {
        r = sqrt(n);
        printf("%f",r);
    }
}