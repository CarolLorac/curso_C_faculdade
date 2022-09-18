/*
ALOCA��O DIN�MICA DE MEM�RIA - malloc, realloc e free
Sites utilizados: https://www.ime.usp.br/~pf/algoritmos/aulas/aloca.html
				  https://www.cprogressivo.net/2013/04/Como-usar-a-funcao-malloc-para-alocar-memoria-em-linguagem-C.html
				  
Na aloca��o din�mica, as aloca��es/determina��es de espa�o na mem�ria das vari�veis acontecem depois do programa ser executado (durante a execu��o).
Para utilizar essa funcionalidade, � necess�rio utilizar a biblioteca stdlib -> #include <stdlib.h>

Malloc() - aloca espa�o para um bloco de bytes consecutivos na mem�ria RAM e devolve o endere�o (ponteiro) desse bloco
char *ptr;
ptr = malloc (1); // dentro do parenteses coloca a quantidade de bytes do bloco a ser alocado

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM_STRING 16 // Tamanho a ser alocado 
#define NOME "S�rgio Yoshioka" // String a ser copiada 

int main(void)
{
    char *str; // defini��o ponteiro para char
    
    str = malloc(TAM_STRING); //aloca na mem�ria um bloco de 16 bytes 
    
    if (str == NULL) 
    {
        printf("N�o h� espa�o suficiente para alocar mem�ria\n");
    }
    else
    {
        strcpy(str, NOME); //Copia o conte�do de NOME (S�rgio Yoshioka) e adiciona na vari�vel str
        printf("\nString = %s", str); 
        free(str); // libera mem�ria alocada
        printf("\nString = %s", str); 
    }
}
