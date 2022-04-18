//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno.
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11).
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada contém 2 valores com uma casa decimal cada um.

Saída
Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo,
com 5 dígitos após o ponto decimal e com um espaço em branco antes e depois da igualdade.
Utilize variáveis de dupla precisão (double) e como todos os problemas, não esqueça de imprimir o fim de linha após o resultado,
caso contrário, você receberá "Presentation Error".
*/
#include <stdio.h>
 
int main() {
 
    double numero1;
    double numero2;
    double media;

    scanf("%lf" , &numero1);
    scanf("%lf" , &numero2);

    numero1 = numero1 * 0.35;
    numero2 = numero2 * 0.75;

    media = numero1 + numero2;

    media = media - 1;

    if (media > 10){
        media = 10;
        printf("MEDIA = %.5lf\n" , media); 
    }else{
        printf("MEDIA = %.5lf\n" , media);
    }
    
    return 0;
}