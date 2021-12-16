
#include <stdio.h>

int main(){

float res,raio,base,alt,lado;
int oper;
printf("1 - Area Circulo\n");
printf("2 - Area Retangulo\n");
printf("3 - Area Quadrado\n");
printf("Informe a operação\n");
scanf("%i",&oper);

switch(oper){
        case 1:
             printf("Informe o raio do Circulo:");
             scanf("%f",&raio);
             res = 3.14*(raio*raio);
             printf("O valor da area do circulo eh: %.2f",res);
                break;

        case 2:
             printf("Informe a base do Retangulo:");
             scanf("%f",&base);
             printf("Informe a altura do Retangulo:");
             scanf("%f",&alt);
             res = base * alt;
             printf("O da area eh retangulo eh:%.2f",res);
                break;
        case 3:
             printf("Informe o valor do lado do quadrado:");
             scanf("%f",&lado);
             res = lado * lado;
             printf("O valor da area do quadrado eh:%.2f",res);
                break;
    }
}

