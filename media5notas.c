#include<stdio.h>

int main(){
    int notas[5];
    int soma = 0;
    int media;
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite a nota %i: ", i + 1);
        scanf("%i", &notas[i]);
        soma += notas[i];
    }

    media = soma / 5;

    printf("A media aritmetica das notas eh: %i.\n", media);

    return 0;
}
