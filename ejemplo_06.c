//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	Buscar el minimo del vector ingresado

#include <stdio.h>
#include <stdlib.h>

#define n 5


int main()
{
	int vec[n];
	int * p ;
	int * pmin;
	int fmin = 0;
	
	for( p = vec ; p < vec + n ; p ++){
		printf("\n DATO = " );
		scanf("%d" , p);
	}
	
	for( p = vec ; p < vec + n ; p ++){
		printf("%8d" , *p);
	}
	
	printf("\n\n\n");
	
	for( pmin = p = vec ; p < vec + n ; p ++ ){
		if (*p < *pmin){
			pmin = p;
		}
	}
	
	printf("\n\n\n	El minimo es: %d " , *pmin);
	printf("\n\n\n	La posicion es: %d " ,  pmin - vec + 1);
	printf("\n\n\n");
	return 0;
}


