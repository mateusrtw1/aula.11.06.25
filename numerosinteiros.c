#include<stdio.h>

int main(){
    int numeros[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o valor: ");
        scanf("%i", &numeros[i]);
    }

    printf("Os numeros pares sao:\n");
    for(i = 0; i < 10; i++){
    if(numeros[i] % 2 == 0){
        printf("numeros %i \n", numeros[i]);
    }
}

    return 0;
}
