#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float calculaNota(float n1,float n2,float n3,char opera){
float totalNota;
if(opera == 'a' || opera == 'A'){
    totalNota = (n1 + n2 + n3)/3;
        return printf("Media Aritmetica igual a: %.2f ",totalNota);
    }else if(opera == 'p' || opera == 'P'){
        totalNota = ((n1 * 5) + (n2 * 3) + (n3 * 2))/3;
            return printf("Media Ponderada igual a: %.2f",totalNota);
    }else{
        return printf("Operacao Invalida");
    }
}

int main(){

float n1,n2,n3;
char opera;
printf("Informe a operacao desejada\nA- MEDIA ARITMETICA\nP-MEDIA PONDERADA\n");
    scanf("%c",&opera);
printf("Informe a primeira nota do aluno:");
    scanf("%f",&n1);
printf("Informe a segunda nota do aluno:");
    scanf("%f",&n2);
printf("Informe a teceira nota do aluno:");
    scanf("%f",&n3);
calculaNota(n1,n2,n3,opera);

}
