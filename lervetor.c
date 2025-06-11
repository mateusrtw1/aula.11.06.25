#include<stdio.h>

int main(){
    int vetor[7];
    int soma = 0;

    for(int i = 0; i < 7; i++){
        printf("Digite o elemento %i: ", i);
        scanf("%i", &vetor[i]);
    }

    for(int i = 0; i < 7; i++){
        if(i % 2 != 0){
            soma += vetor[i];
        }
    }

    printf("Soma dos valores nas posicoes impares: %i\n", soma);

    return 0;
}
