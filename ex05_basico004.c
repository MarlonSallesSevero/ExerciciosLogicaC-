#include <stdio.h>
int main(){

int sit_pass,destino;

printf("1 - NORTE\n");
printf("2 - NORDESTE\n");
printf("3 - CENTROESTE\n");
printf("4 - SUL\n");

printf("Informe o destino:");
scanf("%i",&destino);
printf("Informe '10' para somente ida, ou, '20' para ida e volta");
scanf("%i",&sit_pass);

switch (sit_pass){
        case 10:
            switch (destino){
                case 1:
                    printf("Valor total da viagem so de ida eh: 500\n");
                        break;
                case 2:
                    printf("Valor total da viagem  so de ida eh: 350\n");
                        break;
                case 3:
                    printf("Valor total da viagem  so de ida eh: 350\n");
                        break;
                case 4:
                    printf("Valor total da viagem  so de ida eh: 300\n");
                        break;
            }
                break;
        case 20:
            switch (destino){
                   case 1:
                        printf("Valor total da viagem ida e volta eh: 900\n");
                            break;
                   case 2:
                        printf("Valor total da viagem ida e volta eh: 650\n");
                            break;
                   case 3:
                        printf("Valor total da viagem ida e volta eh: 600\n");
                            break;
                   case 4:
                        printf("Valor total da viagem ida e volta eh: 550\n");
                            break;
        }
            break;
    }
}

