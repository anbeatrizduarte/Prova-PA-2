#include <stdio.h>

int main() {
	int y, *p, x; // p é um ponteiro 
	
	y = 0; //--
	p = &y; // o ponteiro p esta recebendo o endereço de y --
	x = *p; // a variavel x esta conteudo apontado por p --
	x = 4; // o x recebe valor 4
	(*p)++; // o valor de y é incrementado em 1, e passa a ser i
	x--; // o valor de x é decrementado em 1, e x passa a ser 3
	(*p) += x; // o valor de y é incrementado por x, y = 1 + 3 = 4
	printf("y = %d\n", y); // o valor de y é imprimido
	return 0;
}

// é esperado y = 4
