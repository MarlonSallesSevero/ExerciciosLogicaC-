#include <stdio.h>

int main(){

float quant_hab,cod,cod_cons1,cod_cons2,cod_cons3,consumo_mes,val_kwh,gastoRes,gastoCom,gastoInd,mediaGast;
quant_hab,cod,cod_cons1,cod_cons2,cod_cons3,consumo_mes,val_kwh,gastoRes,gastoCom,gastoInd,mediaGast = 0;
        printf("Informe a quantidade de habitantes:");
            scanf("%f",&quant_hab);
        printf("Informe o valor do Kwh:");
            scanf("%f",&val_kwh);
        printf("Informe o tipo, e na sequencia o valor gasto:\n");
                  printf("1-Residencial\n");
                  printf("2-Comercial\n");
                  printf("3- Industrial\n");
    while(quant_hab > 0){
        printf("Informe o cod:\n");
             scanf("%f",&cod);
                 if(cod = 1){
                    printf("Informe a quantidade de habitantes de Residencial\n");
                        scanf("%f",&cod_cons1);
                    quant_hab = quant_hab - cod_cons1;
                    printf("Informe a quantidade gasta:\n");
                        scanf("%f",&gastoRes);
                 }else if(cod = 2){
                    printf("Informe a quantidade de habitantes de Comercial\n");
                        scanf("%f",&cod_cons2);
                    quant_hab = quant_hab - cod_cons2;
                    printf("Informe a quantidade gasta:\n");
                        scanf("%f",&gastoCom);
                 }else if(cod = 3 ){
                    printf("Informe a quantidade de habitantes de Industrial\n");
                        scanf("%f",&cod_cons3);
                    quant_hab = quant_hab - cod_cons3;
                    printf("Informe a quantidade gasta:\n");
                        scanf("%f",&gastoInd);
                    }
                 else{
                    printf("Cod Invalido\n");
             }
        }

    printf("A quantidade de habitantes Residenciais é de: %.2f e  gastam um total de: %.2f\n",cod_cons1,(cod_cons1 * val_kwh));
    printf("A quantidade de habitantes Comercial é de: %.2f e  gastam um total de: %.2f\n",cod_cons2,(cod_cons2 * val_kwh));
    printf("A quantidade de habitantes Industrial é de: %.2f e  gastam um total de: %.2f\n",cod_cons3,(cod_cons3 * val_kwh));
    mediaGast = (cod_cons1 + cod_cons2 + cod_cons3)/3;
    printf("Media de Gasto de %2.f:",mediaGast);
    };

