//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*
Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a SOMA entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à SOMA de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
*/

#include <stdio.h>
 
int main() {
    int numero1;
    int numero2;
    int SOMA;
 
        scanf("%d" , &numero1);
        scanf("%d" , &numero2);

        SOMA = numero1 + numero2;

        printf("SOMA = %d\n", SOMA);
 
    return 0;
}