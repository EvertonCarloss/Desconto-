#include <stdio.h>
#include <locale.h>

// CONFERINDO O VALOR DE UM PRODUTO E SEU DESCONTO.

void main () {

setlocale(LC_ALL,"Portuguese");

// DECLARANDO VARIAVEIS.
char nome [20];
float preco, desconto, novovalor;

// INSERINDO DADOS.
printf("PRODUTO : ");
gets (nome);
printf("PREÇO DO PRODUTO : R$ ");
scanf("%f",&preco);
printf("DESCONTO [%%] : ");
scanf("%f",&desconto);
// CALCULANDO O NOVO VALOR COM O DESCONTO.
novovalor = preco -  (preco* desconto / 100) ;
// SAIDA DOS DADOS.
printf("O  PRODUTO %s CUSTAVA R$%.2f.\n PORÉM , COM OS %.2f%% DE DESCONTO, PASSA A CUSTAR %.2f. ",nome,preco,desconto,novovalor );



}
