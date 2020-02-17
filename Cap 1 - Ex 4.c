#include "stdio.h"

main(){
int a, b;
printf("Digite um valor inteiro: ");
scanf("%d", &a);
printf("\nDigite outro valor inteiro: ");
scanf("%d", &b);
printf("\nO primeiro e %d e o segundo e %d \n", a, b);

b = a+b;
a = b-a;
b = b-a;

printf("\nDepois da permutacao, o primeiro e %d e o segundo e %d \n", a, b);

}
