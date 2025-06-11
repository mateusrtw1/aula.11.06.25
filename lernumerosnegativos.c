#include<stdio.h>

int main(){
    int numeros[6];
    int i;

    for(i = 0; i < 6; i++){
        printf("Digite o %i numero inteiro: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    printf("Os numeros negativos sao: \n");
    for(i = 0; i < 6; i++){
        if(numeros[i] < 0){
            printf("%i\n", numeros[i]);
        }
    }

    return 0;
}
