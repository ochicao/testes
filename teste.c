/*
 * teste.c
 * 
 * Copyright 2020 Francisco <chico@alien>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include<stdio.h> //biblioteca padrão para comandos i/o
#include<stdlib.h> //necessário para o system("pause")

#define ICMS 0.18
#define MAX 100
#define ERRO "Erro!!!"
//função que soma 10 ao valor recebido
void soma10(int x){
  x = x + 10;  
  printf("Valor de x apos a soma = %d \n",x);
  return;
}
void soma10p(int *x) { //usando ponteiro, por referencia
  *x = *x + 10;  
  printf("Valor de x apos a soma = %d \n",*x);
  return;
}
//Função recursiva que calcula o fatorial
//de um numero inteiro n
double fatorial(int n) {
  double vfat;
  if ( n <= 1 )
    //Caso base: fatorial de n <= 1 retorna 1
    return (1);
  else
  {
    //Chamada recursiva
    vfat = n * fatorial(n - 1);
    return (vfat);
  }
}

int main (void)//função principal
{ //inicio do corpo da função principal
    printf("Ola mundo!!!\n");
    //printf envia um texto para a tela do monitor
    // \n é usado para delocar o cursor para a próxima linha
    printf("Este e um programa escrito em linguagem C\n");
    system("sleep 3");
    // pausa a execução a fim de visualizarmos o resultado
    
    int num;
    num = 10; //atribuindo 10 na variável num
    printf("Valor inicial de num = %d \n",num);
    num += 5; //equivale a num = num + 5
    printf("Somando 5 ao valor inicial temos num = %d \n",num);
    num -= 1; // equivale a num = num - 1
    printf("Sutraindo 1 temos num = %d \n",num);
    num *= 2; // equivale a num = num * 2
    printf("Multiplicando por 2 temos num = %d \n",num);
    num /= 2;// equivale a num = num / 2
    printf("Dividindo por 7 temos num = %d \n",num);

    //Declaração das variáveis
    float nota1, nota2, media;
    //Entrada de dados
    printf("Digite a primeira nota do aluno: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f",&nota2);
    //Processamento
    media = (nota1 + nota2) / 2;
    //Saída
    printf("Media do aluno = %.1f\n",media);
    system("sleep 2");//pausa da tela

    float preco_produto, valor_icms;
    printf("Informe o valor do produto: " );
    scanf("%f", &preco_produto);
    valor_icms = preco_produto * ICMS;
    printf("Valor de imposto a ser pago: R$ %.2f\n",valor_icms );
    system("sleep 2");//pausa da tela

    int i;
    printf("Gerando 10 valores aleatorios:\n\n");
    for (i = 0; i < 10; i++) {
      /* gerando valores aleatórios entre zero e 100 */
      printf("%d ", rand() % 100);
    }
    printf("\n");
    system("sleep 2");//pausa da tela
    printf("contagem regressiva\n");
    for (i = 10; i >=0; i--) {
      /* gerando valores aleatórios entre zero e 100 */
      printf("%d \n", i);
      system("sleep 1");//pausa da tela
    }

    int numero;
    printf("Função com passagem por referência\nDigite um numero: ");
    scanf("%d", &numero);  
    printf("O numero digitado foi: %d \n",numero);  
    soma10(numero);  //chamada da função
    printf("Agora o numero vale: %d \n",numero);    
    soma10p(&numero);  //chamada da função com ponteiro como parâmetro
    printf("Agora o numero vale: %d \n",numero);  

    double f;
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d",&numero);
    //chamada da função fatorial
    f = fatorial(numero);
    printf("Fatorial de %d = %.0lf",numero,f);
  
    return 0; //valor de retorno das função main
} //fim do corpo da função principal e fim do programa

