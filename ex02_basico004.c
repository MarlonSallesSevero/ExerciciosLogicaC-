#include <stdio.h>

int main(){

int lados;

printf("Informe o total de Lados da figura geometrica:");
    scanf("%i",&lados);
switch (lados){
        case 3:
        printf("Isto é um tringulo");
            break;
        case 4:
        printf("Isto é um Quadrado ou Retangulo");
            break;
        case 5:
        printf("Isto é um Pentagono");
            break;
        case 6:
        printf("Isto é um Hexagono");
            break;
    }
}


