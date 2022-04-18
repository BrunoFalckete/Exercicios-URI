//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*
Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.   

Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade. Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/
#include <stdio.h>
 
int main() {
 
    int numero1;
    int numero2;
    int PROD;
 
        scanf("%d" , &numero1);
        scanf("%d" , &numero2);

        PROD = numero1 * numero2;

        printf("PROD = %d\n", PROD);
 
    return 0;
}