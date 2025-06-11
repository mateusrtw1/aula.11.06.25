#include<stdio.h>

int main(){
    int numeros[8];
    int i, menor, maior;

    for( i = 0; i < 8; i++){
        printf("Digite o %i numero inteiro: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    menor = maior = numeros[0];

    for(i = 1; i < 8; i++){
        if(numeros[i] < menor){
            menor = numeros[i];
        }
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }

    printf("Menor valor: %i\n", menor);
    printf("Maior valor: %i\n", maior);

    return 0;
}
