#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

int arr[2][2];


for(int i = 1; i < 3; i++){
    for(int j = 1; j < 3; j++){
        printf("[%i][%i]\n",i,j);
            scanf("%i",&arr[i][j]);
        }
    }
}
