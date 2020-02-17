#include "stdio.h"

main(){
int input, lido, centena, dezena, unidade, invertido;

do{
    printf("\nDigite um numero inteiro de tres digitos (de 100 a 999): ");
    scanf("%d", &input);
        if(input > 999 || input <100)
            printf("\nO valor deve ser maior do que zero e possuir tres digitos (de 100 a 999)!\n");
}while(input > 999 || input < 100);

lido = input;

centena = input/100;
    input = input%100; //a variavel se torna o resto dela mesma dividida por 100
dezena = input/10;
    input = input%10;
unidade = input;

invertido = (unidade*100)+(dezena*10)+(centena);


printf("\nO valor lido e: %d \nO valor invertido e: %d \n", lido, invertido);


}
