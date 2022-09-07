/*
APS 1 – Programação Estruturada
Professor: Sérgio Assunção Monteiro
Nome da disciplina: Programação Estruturada
Código da Turma: 931
Nome do aluno: Erick Marllon da Silva
Matrícula: 2022100686
unidade: Meier V
*/

/*
Questão 01  
Desenvolver um programa em C que faça:
1. Criar 5 vetores contendo 10 valores reais gerados aleatoriamente;
2. Utilizar uma função recursiva para somar apenas os elementos pares de cada vetor;
3. Retornar maior elemento do item 2;
4. Colocar a solução no GITHUB (https://github.com/ErickMarllon).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define c 10

void entrada_dados(int x[]);
int ehPar(int num);
int somar_numeros_pares_recursivo(int q, int x[]);
void maior_numero( int x);
int maior;
		
 int main(){
		srand(time(NULL));
		setlocale(LC_ALL, "");
		int v1[c],v2[c],v3[c],v4[c],v5[c];
		int soma_par;
		int ehPar(int num);
		
//		1. Criar 5 vetores contendo 10 valores inteiros gerados aleatoriamente;
		printf("Gerando números inteiros de forma aleatoria.\n\n");
		entrada_dados(v1);printf("\n\n");
		entrada_dados(v2);printf("\n\n");
		entrada_dados(v3);printf("\n\n");
		entrada_dados(v4);printf("\n\n");
		entrada_dados(v5);printf("\n\n===================================================================\n\n");
	 
//		2. Utilizar uma função recursiva para somar apenas os elementos pares de cada vetor;
		printf("Somando números pares de cada vetor.\n\n");
		soma_par = somar_numeros_pares_recursivo(c-1, v1);
		printf("\nA soma dos pares é: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(c-1, v2);
		printf("\nA soma dos pares é: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(c-1, v3);
		printf("\nA soma dos pares é: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(c-1, v4);
		printf("\nA soma dos pares é: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(c-1, v5);
		printf("\nA soma dos pares é: %i\n",soma_par);
		maior_numero(soma_par);
		printf("\n\n===================================================================\n\n");
		
		
		//    3. Retornar maior elemento do item 2;
		printf("O maior elemento entre todos os vetores.\n\n");
		printf("\nO maior elemento é: %d\n", maior);
		printf("\n\n===================================================================\n\n");
}

//		1. Criar 5 vetores contendo 10 valores reais gerados aleatoriamente;
void entrada_dados(int x[]){
int i;
	for(i=0;i<c;i++){
	x[i]=rand()%100;
	printf("%d ",x[i]);
	}
}

//		2. Função para saber se o número é par;
int ehPar(int num){
	if(num%2==0){
	  return 1;
	}
	return 0;
}

//		2. Utilizar uma função recursiva para somar apenas os elementos pares de cada vetor;
int somar_numeros_pares_recursivo(int q, int x[]){
int r;
	if(q==0){
	return ehPar(x[0])?x[0]:0;
	}
r = ehPar(x[q])?x[q]:0;
return r+somar_numeros_pares_recursivo(q-1,x);
}

//    3. Retornar maior elemento do item 2;
void	maior_numero( int x){
int q;

	if(maior < x){
	maior = x;
	}
}
