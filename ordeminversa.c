#include<stdio.h>

int main(){
    char nomes[5][21];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome %i: ", i + 1);
        scanf("%20s", nomes[i]);
    }

    printf("Nomes na ordem inversa: \n");
    for(int i = 4; i >= 0; i--){
        printf("%s\n", nomes[i]);
    }

    return 0;
}
