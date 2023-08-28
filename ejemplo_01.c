//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	ARITMETICA DE PUNTEROS 01

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A;
	int * P;
	float * Q;
	
	A = 25;
	P = &A;
	Q = (float*) P;
	printf("\n\n Q = %p 	P = %p	\n\n", Q , P);
	
	P = (int*)0X62FE0A;
	
	printf("\n\n P = %p 	Q = %p	\n\n", P , Q);
	printf("\n\n *P = %d 	*Q = %f	\n\n", *P , *Q);
	
	return 0;
}
