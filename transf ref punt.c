//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	TRANSFERENCIA POR REFERENCIA DE UN PUNTERO

#include <stdio.h>
#include <stdlib.h>

#define n 3

//int main()
//{
//	int vec[n] , *p_ultimo , a;			//		DECLARACION DE VARIABLES
//	p_ultimo = vec;						//		INICIALIZACION DEL PUNTERO
//	
//	agregar(vec , p_ultimo , a);	
//	
//	return 0;
//}
//
//
//agregar(int *vec , int * p_ultimo ,  int nuevo){
//	if(p_ultimo == vec + n){
//		printf("No hay lugar");
//		return;
//	}	
//	*p_ultimo = nuevo;
//	p_ultimo ++;
//}

// VECTOR DE PUNTEROS
// 

int main(){
	struct alum{
		char nombre[10];
		int nota;
	};	
	struct alum vec[n] , *punt[n], *paux ;
	int i , j;
	
//	INGRESO DE DATOS
	for(paux = vec ; paux < vec + n ; paux ++){
		fflush(stdin);
		printf("\nIngrese el nombre : \t");
		gets(paux->nombre);
		printf("\nIngrese la nota: \t");
		scanf("%d" , &(paux->nota));
	}
	
//	INICIALIZACION DEL VECTOR DE PUNTEROS
	for(i = 0 ; i < n ; i++){
//		punt[i]		 = &vec[i];
		*(punt + i ) = vec + i;
	}
	
	printf("\n\t\t Datos ingresados");
	for( i = 0 ; i < n ; i ++){
		printf("\n\t	%12s \t	%d", punt[i]->nombre , punt[i]->nota);
	}
	
	
//	ORDENAMIENTO
	for ( i = 0 ; i < n - 1 ; i ++){
		for( j = 0 ; j < n - i - 1 ; j ++){
			if( punt[j]->nota > punt[j + 1]->nota){
				paux 		= punt[j];
				punt[j] 	= punt[j + 1];
				punt[j + 1] = paux;
			}
		}
	}
	
	printf("\n\n");
	
//	IMPRESION DE DATOS
printf("\n\t\t Datos ordenados");
	for( i = 0 ; i < n ; i ++){
		printf("\n\t	%12s \t	%d", punt[i]->nombre , punt[i]->nota);
	}
	
	
printf("\n\t\t Datos orignales");
	for( paux = vec , i = 0 ; i < n ; i ++){
		printf("\n\t	%12s \t	%d", (paux+i)->nombre , (paux+i)->nota);
	}
	
	
}
