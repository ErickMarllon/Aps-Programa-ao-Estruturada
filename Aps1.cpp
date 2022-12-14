/*
APS 1 ? Programa??o Estruturada
Professor: S?rgio Assun??o Monteiro
Nome da disciplina: Programa??o Estruturada
C?digo da Turma: 931
Nome do aluno: Erick Marllon da Silva
Matr?cula: 2022100686
unidade: Meier V
*/

/*
Quest?o 01  
Desenvolver um programa em C que fa?a:
1. Criar 5 vetores contendo 10 valores reais gerados aleatoriamente;
2. Utilizar uma fun??o recursiva para somar apenas os elementos pares de cada vetor;
3. Retornar maior elemento do item 2;
4. Colocar a solu??o no GITHUB (https://github.com/ErickMarllon).
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
		printf("Gerando n?meros inteiros de forma aleatoria.\n\n");
		entrada_dados(v1);printf("\n\n");
		entrada_dados(v2);printf("\n\n");
		entrada_dados(v3);printf("\n\n");
		entrada_dados(v4);printf("\n\n");
		entrada_dados(v5);printf("\n\n===================================================================\n\n");
	 
//		2. Utilizar uma fun??o recursiva para somar apenas os elementos pares de cada vetor;
		printf("Somando n?meros pares de cada vetor.\n\n");
		soma_par = somar_numeros_pares_recursivo(c-1, v1);
		printf("\nA soma dos pares ?: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(c-1, v2);
		printf("\nA soma dos pares ?: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(c-1, v3);
		printf("\nA soma dos pares ?: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(c-1, v4);
		printf("\nA soma dos pares ?: %i\n",soma_par);
		maior_numero(soma_par);
		
		soma_par = somar_numeros_pares_recursivo(c-1, v5);
		printf("\nA soma dos pares ?: %i\n",soma_par);
		maior_numero(soma_par);
		printf("\n\n===================================================================\n\n");
		
		
		//    3. Retornar maior elemento do item 2;
		printf("O maior elemento entre todos os vetores.\n\n");
		printf("\nO maior elemento ?: %d\n", maior);
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

//		2. Fun??o para saber se o n?mero ? par;
int ehPar(int num){
	if(num%2==0){
	  return 1;
	}
	return 0;
}

//		2. Utilizar uma fun??o recursiva para somar apenas os elementos pares de cada vetor;
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
