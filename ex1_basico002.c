#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float a;

printf("Informe o valor:");
scanf("%f",&a);

if(a < 0){
    printf("Valor Negativo");
}else if(a > 0){
    printf("Valor Positivo");

}else{
    printf("Valor igual a Zero");

}


}
