#include "stdio.h"

main(){
int input, lido, cem, cinq, dez, um;

do{
    printf("\nDigite um valor inteiro positivo: ");
    scanf("%d", &input);
        if(input <= 0 || input > 32767)
            printf("\nO valor deve ser inteiro e positivo!\n");
}while(input <= 0 || input > 32767);

lido = input;

cem = input/100;
    input = input%100;
cinq = input/50;
    input = input%50;
dez = input/10;
    input = input%10;
um = input;

printf("\nO valor lido e R$%d \b. O menor numero possivel de notas e: \n%d notas de R$100 \n%d notas de R$50 \n%d notas de R$10 \n%d notas de R$1\n", lido, cem, cinq, dez, um);

}
