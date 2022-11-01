// -----------------------------------------------------------------------
// Programa raizes Bloco 1: Comentários iniciais
// Calcula as raízes de um
// polinômio de 2º grau.
// ----------------------------------------------------------------------
#include <stdio.h> Bloco 2: Diretivas de pré-processamento
#include <stdlib.h>
#include <math.h>
// ----------------------------------------------------------------------
float a,b,c; Bloco 3: Declarações Globais
char r;
void entradas(void);
// ----------------------------------------------------------------------
main() { Bloco 4: Corpo principal
 float delta,r1,r2;
 int continua=1;
 while(continua) {
 entradas();
 delta=(b*b)-(4*a*c);
 if(delta<0){
 printf(“Não existe raiz real”);
 }else{
 r1=(-b+sqrt(delta))/(2*a);
 r2=(-b-sqrt(delta))/(2*a);
 printf (“Raizes: %f %f”,r1,r2);
 }
 printf(“\nDigite S para continuar “);
 scanf(“%s”,&r);
 if(r!=’S’ && r!=’s’) continua=0;
 }
}
// ----------------------------------------------------------------------
void entradas(void) { Bloco 5: Funções definidas pelo usuário
 system(“cls”);
 a=0;
 while (a==0){
 printf(“Coeficiente a: “);
 scanf(“%f”,&a);
 }
 printf(“Coeficiente b: “);
 scanf(“%f”,&b);
 printf(“Coeficiente c: “);
 scanf(“%f”,&c);
}
// ----------------------------------------------------------------------
