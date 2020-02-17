#include "stdio.h"

main(){
int input, horas, minutos, segundos;
do{
    printf("Digite uma quantidade positiva de segundos: ");
    scanf("%d", &input);
        if(input <= 0)
            printf("\nO valor deve ser maior do que zero!\n");


}while(input <= 0);

horas = input/3600;
    input = input-horas*3600;
minutos = input/60;
    input = input-minutos*60;
segundos = input;

printf("\nO tempo total e %d \bh %d \bm %d \bs \n", horas, minutos, segundos);

}
