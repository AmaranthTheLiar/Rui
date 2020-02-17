#include "stdio.h"

main(){
int multi, minimo, menorm, cont=1;

do{
    printf("Digite um numero inteiro (multiplicador): ");
    scanf("%d", &multi);
        if(multi <= 0)
            printf("\nO numero deve ser maior do que zero!\n");
}while(multi <= 0);


do{
    printf("Digite um segundo numero inteiro (limite minimo): ");
    scanf("%d", &minimo);
        if(minimo <= 0)
            printf("\nO numero deve ser maior do que zero!v2\n");
}while(minimo <= 0);

do{
    menorm = multi*cont;
    cont++;

}while(menorm <= minimo);

printf("O menor multiplo e %d", menorm);

}
