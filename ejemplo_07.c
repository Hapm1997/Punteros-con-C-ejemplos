//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	Ordenar el vector y puntero

#include <stdio.h>
#include <stdlib.h>

#define n 5


int main()
{
	int vec[n];
	int * p ;
	int * o;
	int  j , aux , i;
	
	for( p = vec ; p < vec + n ; p ++){
		printf("\n DATO = " );
		scanf("%d" , p);
	}
	
	for( p = vec ; p < vec + n ; p ++){
		printf("%8d" , *p);
	}
	
	printf("\n\n\n");
	
	for( i = 0 ; i < n - 1 ; i ++){
		for( p = vec , j = 0 ; j <  n - i - 1 ; j ++){
			if( p[j] > p[j+1] ){
				aux   = p[j];
				p[j] 	  = p[j + 1];
				p[j + 1]= aux;
			}
		}
	}
	
	for( p = vec ; p < vec + n ; p ++){
		printf("%8d" , *p);
	}
	
//	for( pmin = p = vec ; p < vec + n ; p ++ ){
//		if (*p < *pmin){
//			pmin = p;
//		}
//	}
//	
//	printf("\n\n\n	El minimo es: %d " , *pmin);
//	printf("\n\n\n	La posicion es: %d " ,  pmin - vec + 1);
	printf("\n\n\n");
	return 0;
}


