//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	Vector puntero - 

#include <stdio.h>
#include <stdlib.h>



struct alumno{
	char nom[20];
	char sex;
	int nota;
};

#define n 3

int main()
{
	struct alumno vec[n] , *P;
	struct 	alumno *vp[n] , *paux; 
//	struct alumno aux;
	int i , j;

	
//	INICIALIZAION DEL VECTOR DE PUNTEROS

	for( i = 0 ; i < n ; i ++)
		vp[i] 	  = &vec[i];
		*(vp + i) = vec + i;
		
	
	
	for(P = vec ; P < vec + n ; P ++){
		fflush(stdin);
		printf("\n\n\n\t\t Nombre: ");
		gets(P->nom);
		printf("\n\t\t Sexo: ");
		P->sex = getchar();
		printf("\n\t\t Nota: ");
		scanf("%d" , &(P->nota));
	}
	printf("\n\n\n");	
	printf("\n\n\n");
	
	printf("\n\n\n\n\t\t BARRIENDO VECTOR DE ESTRUCTURAS\n");
	printf("\n\t %-15s %8s %10s", "1Nombre" , "Sexo" , "Nota");
	for(P = vec ; P < vec + n ; P ++)
		printf("\n\n\n\t %-15s %8c %10d " , P->nom , P->sex , P->nota );
	getchar(); 
//	getchar(); 
	
//	P = vec;
//	
//	printf("\n\n\n\n\t\t BARRIENDO CON VECTOR DE PUNTEROS\n");
	for(i = 0 ; i < n ; i ++){
		for(j = 0 ; j < n - i - 1 ; j ++){
			if( (*(vp + j))->nota < (*(vp + j + 1))->nota){
				paux = *(vp + j);
				*(vp + j) = *( vp + j + 1);
				*(vp + j + 1) = paux;
			}
		}
	}
	
	printf("\n\n\n\n\t\t BARRIENDO CON VECTOR DE PUNTEROS Ordenado\n");
	printf("\n\t %-15s %8s %10s", "Nombre" , "Sexo" , "Nota");
	for( i = 0 ; i < n ; i ++)
		printf("\n\n\n\t %-15s %8c %10d " , (*(vp + i))->nom , (*(vp + i))->sex , (*(vp + i))->nota );
	getchar(); 
		
	printf("\n\n\n\n\t\t BARRIENDO VECTOR DE ESTRUCTURAS\n");
	
	printf("\n\t %-15s %8s %10s", "2Nombre" , "Sexo" , "Nota");
	for(P = vec , i = 0; i < n ; i ++)
		printf("\n\n\t %-15s %8c %10d" , (P + i)->nom , (P + i)->sex , (P + i)->nota );
		
		
	return 0;
}


