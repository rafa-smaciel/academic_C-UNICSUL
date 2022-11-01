// Programa para calcular a área de triãngulos
main() {
    float base, altura, area;
    inicio:
    printf("Base..:");scanf("%f",&base);
    printf("Altura..:");scanf("%f",&altura);
    if(base<1 || altura<1) goto fim;
    area=base*altura/2;
    printf("Área...: %f\n\n",area);
    getch();
    goto inicio;
    fim:
    exit(0);
}