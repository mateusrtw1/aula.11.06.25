#include<stdio.h>

int main(){
    int vetor[10];
    int contador = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
            if(vetor[i] == 0){
                contador++;
        }
    }

    printf("O numero aparece %i vezes.\n", contador);

    return 0;
}
