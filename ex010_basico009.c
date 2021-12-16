#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
srand(time(NULL));

int cartela[5][5];

for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        cartela[i][j] = rand() % 99;
    }
}
for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        printf("matriz[%i][%i]: %i\n",i,j,cartela[i][j]);
        }
    }
}
