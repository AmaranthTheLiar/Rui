#include "stdio.h"

char caracter = 127;
int inteiro = 32767;
short curto = 32767;
long longo = 2147483647;
unsigned char ucaracter = 255;
unsigned int uinteiro = 65535;
unsigned short ucurto = 65535;
unsigned long ulongo = 4294967295;
float flutuante = 3.4E+38;
double duplo = 1.7E+308;

main(){
char caracterneg = -128;
int inteironeg = -32768;
short curtoneg = -32768;
long longoneg = -2147483648;
unsigned char ucaracterneg = 0;
unsigned int uinteironeg = 0;
unsigned short ucurtoneg = 0;
unsigned long ulongoneg = 0;
float flutuanteneg = -3.4E-38;
double duploneg = -1.7E-307;

printf("\nA variavel char vai de %d a %d, e pode conter caracteres da tabelas ASCII.", caracterneg, caracter);
printf("\nA variavel int vai de %d a %d", inteironeg, inteiro);
printf("\nA variavel short vai de %hd a %hd", curtoneg, curto);
printf("\nA variavel long vai de %ld a %ld", longoneg, longo);
printf("\nA variavel unsigned char vai de %u a %u, e pode conter caracteres da tabela ASCII.", ucaracterneg, ucaracter);
printf("\nA variavel unsigned int vai de %u a %u", uinteironeg, uinteiro);
printf("\nA variavel unsigned short vai de %hu a %hu", ucurtoneg, ucurto);
printf("\nA variavel unsigned long vai de %lu a %lu", ulongoneg, ulongo);
printf("\nA variavel float vai de %g a %g", flutuanteneg, flutuante);
printf("\nA variavel double vai de %g a %g", duploneg, duplo);

}
