#include "stdio.h"

main(){
short curto;
long longo;
int inteiro;
float flutuante;
double duplo;
char caracter;
unsigned char ucaracter;
unsigned int uinteiro;
unsigned long ulongo;

printf("Digite um valor short: ");
scanf("%hd", &curto);

printf("Digite um valor long: ");
scanf("%ld", &longo);

printf("Digite um valor int: ");
scanf("%d", &inteiro);

printf("Digite um valor float: ");
scanf("%g", &flutuante);

printf("Digite um valor double: ");
scanf("%g", &duplo);

printf("Digite um valor char: ");
scanf("%d", &caracter);

printf("Digite um valor unsigned char: ");
scanf("%u", &ucaracter);

printf("Digite um valor unsigned int: ");
scanf("%u", &uinteiro);

printf("Digite um valor unsigned long: ");
scanf("%lu", &ulongo);

printf("\n        10        20        30        40        50        60");
printf("\n12345678901234567890123456789012345678901234567890123456789012345");
printf("\n    %-20hd%-20ld%-20d", curto, longo, inteiro);
printf("\n         %-20u%-20u%-20lu", ucaracter, uinteiro, ulongo);
printf("\n              %-20g%-20g%-20d", flutuante, duplo, caracter);

}
