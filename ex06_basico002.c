
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int mcsQt;
float mcsVl;
printf("Informe quantas maças voce ta levando:");
    scanf("%i",&mcsQt);
if(mcsQt >=12){
    mcsVl = 1;
}else{
    mcsVl = 1.30;
}
printf("O valor total deu:%f",mcsQt*mcsVl);
}
