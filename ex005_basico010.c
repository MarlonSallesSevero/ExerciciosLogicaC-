#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){

struct dataDefinida{

    int hor;
    int min;
    int seg;
    int dia;
    int mes;
    int ano;
        struct compromisso{
            int dataDiaC;
            int dataMesC;
            int dataAnoC;
            char texto[50];
            int dataHrC;
            int dataMinC;
        }comp;
}dtD;

printf("*Informe a data atual*\n");
    printf("DIA:");
        scanf("%i",&dtD.dia);
            if(dtD.dia < 0 || dtD.dia > 30){
                printf("Valor Invalido");
                    return 0;
                    }
    printf("MES:");
            scanf("%i",&dtD.mes);
                if(dtD.mes < 0 || dtD.mes > 12){
                    printf("Valor Invalido");
                        return 0;
                        }
    printf("ANO:");
                scanf("%i",&dtD.ano);
                    if(dtD.ano < 0 || dtD.ano > 9999){
                        printf("Valor Invalido");
                            return 0;
                            }
printf("*Informe a hora atual*\n");
    printf("HORAS:");
        scanf("%i",&dtD.hor);
            if(dtD.hor < 0 || dtD.hor > 23){
                printf("Valor Invalido");
                    return 0;
                    }
    printf("MINUTOS:");
        scanf("%i",&dtD.min);
            if(dtD.min < 0 || dtD.min > 60){
                printf("Valor Invalido");
                    return 0;
                    }
    printf("SEG:");
        scanf("%i",&dtD.seg);
            if(dtD.seg < 0 || dtD.seg > 60){
                printf("Valor Invalido");
                    return 0;
                    }

printf("*Informe uma data que voce quer marcar um compromisso*\n");
    printf("ANO:");
        scanf("%i",&dtD.comp.dataAnoC);
            if(dtD.comp.dataAnoC < dtD.ano){
                printf("Valor Invalido");
                    return 0;
                    }
        printf("MES:");
            scanf("%i",&dtD.comp.dataMesC);
            if(dtD.comp.dataMesC < dtD.mes && dtD.comp.dataAnoC == dtD.ano){
                printf("Valor Invalido");
                    return 0;
                    }
        printf("DIA:");
            scanf("%i",&dtD.comp.dataDiaC);
            if(dtD.comp.dataDiaC < dtD.dia && dtD.comp.dataMesC == dtD.dia){
                printf("Valor Invalido");
                    return 0;
                    }
        printf("HORA:");
            scanf("%i",&dtD.comp.dataHrC);
            if(dtD.comp.dataHrC < dtD.hor && dtD.comp.dataMesC == dtD.dia){
                printf("Valor Invalido");
                    return 0;
                    }
        printf("MINUTOS::");
            scanf("%i",&dtD.comp.dataMinC);
        printf("Informe um texto de lembrete:");
            scanf("%s",&dtD.comp.texto);
        printf("SEU COMPROMISSO FICOU PARA A DATA %i/%i/%i NO HORARIO %i:%i COM O SEGUINTE LEMBRETE \n *%s*",dtD.comp.dataDiaC,dtD.comp.dataMesC,dtD.comp.dataAnoC,dtD.comp.dataHrC,dtD.comp.dataMinC,dtD.comp.texto);
}
