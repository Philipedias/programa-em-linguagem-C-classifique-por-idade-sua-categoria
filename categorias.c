#include <stdio.h>

// 02) Escreva um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

int main(void){
    int idade;

    printf("-----------classifique sua categoria--------------\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >=5 && idade <= 7 ) {
        printf("Categoria Infantil A");
    }
    if (idade >= 8 && idade <= 10) {
        printf("Categoria Infantil B");
    }
    if (idade >= 11 && idade <= 13) {
        printf("Categoria Juvenil A");
    }    
    if (idade >= 14 && idade <= 17) {
        printf("Categoria Juvenil B");
    }    
    if (idade >= 18) {
        printf("Categoria Aduto");
    }

    
    return 0;
}