//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	ARITMETICA DE PUNTEROS 04

#include <stdio.h>
#include <stdlib.h>

#define N 5


void funcion(int , int[]);

int main()
{
	int A = 25;
	int VEC[N] = {12 , 4 , 7 , 10 , 23};
	int i;
	
	printf("\n\n\t\t 	Valores Originales	\n\n\t\t");
	printf("%5d \t\t", A);
	
	for(i = 0 ; i < N ; i++)
		printf("%5d" , VEC[i]);
	
	funcion(A , VEC);
	
	printf("\n\n\t\t 	Valores Despues de la Funcion	\n\n\t\t");
	printf("%5d \t\t", A);
	
	for(i = 0 ; i < N ; i++)
		printf("%5d" , VEC[i]);
		
	printf("\n\n\n");
	return 0;
}

void funcion(int A , int V[]){
	int i ;
	A = 2 * A;
	for(i = 0 ; i < N ; i++){
		V[i] = 2 * V[i];
	}
}
