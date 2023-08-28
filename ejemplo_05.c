//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	ARITMETICA DE PUNTEROS 05

#include <stdio.h>
#include <stdlib.h>

#define n 5


int main()
{
	int vec[n];
	int i;
	int * p;
	
//	CARGA DEL VECTOR 1
	
//	for(i = 0 ; i < n ; i ++){
//		printf("\n vec[%d] = " , (i + 1));
//		scanf("%d" , &vec[i]);
//	}

//	CARGA DEL VECTOR 2

	for( p = vec ; p < vec + n ; p ++){
		printf("\n DATO = " );
		scanf("%d" , p);
	}
	
//	IMPRESION 1 DEL VECTOR

//	printf("\n\n\n\t Impresion 1 del vector\n\n\t");
//	for(i = 0 ; i < n ; i ++){
//		printf("%8d" , vec[i]);
//	}

//	IMPRESION 2 DEL VECTOR		

	for( p = vec ; p < vec + n ; p ++){
		printf("%8d" , *p);
	}
	
	printf("\n");
	for( p = vec , i = 0 ; i < n ; i++){
		printf("%8d" , *(p + i));
	}
	
	printf("\n\n\n");
	return 0;
}


