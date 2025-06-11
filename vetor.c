#include<stdio.h>

int main(){
    int numeros[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o valor %i: ", i);
        scanf("%i", &numeros[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Numeros[%i] = %i\n", i, numeros[i]);
    }

    return 0;
}
