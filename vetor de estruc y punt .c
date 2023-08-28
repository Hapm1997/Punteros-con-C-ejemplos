//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	Vector de Estructura y puntero - 

#include <stdio.h>
#include <stdlib.h>



struct alumno{
	char nom[20];
	char sex;
	int nota;
};

#define n 5

int main()
{
	struct alumno vec[n] , *P;
	struct 	alumno aux;
	int i , j;

	
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
	
	printf("\n\n\n\t %-15s %8s %10s", "1Nombre" , "Sexo" , "Nota");
	for(P = vec ; P < vec + n ; P ++)
		printf("\n\n\n\t %-15s %8c %10d " , P->nom , P->sex , P->nota );
	getchar(); 
//	getchar();
	
	P = vec;
	
	for(i = 0 ; i < n ; i ++){
		for(j = 0 ; j < n - i - 1 ; j ++){
			if( (P+j)->nota < (P+j+1)->nota){
				aux = *(P + j);
				*(P + j) = *( P + j + 1);
				*(P + j + 1) = aux;
			}
		}
	}
	
	printf("\n\n\n\t %-15s %8s %10s", "2Nombre" , "Sexo" , "Nota");
	for(P = vec , i = 0; i < n ; i ++)
		printf("\n\n\t %-15s %8c %10d" , (P + i)->nom , (P + i)->sex , (P + i)->nota );
		
		
	return 0;
}


