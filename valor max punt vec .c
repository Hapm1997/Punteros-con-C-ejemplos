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

#define n 6

int main()
{
	int i, *max , vec[n] , *p;
	
//	INGRESO DE DATOS
	for(p = vec ; p < vec + n ; p ++){
		printf("\n\t %d_Ingrese un valor: " , (p + 1));
		scanf("%d" , p);
	}
	
//	for(i = 0 ; i < n ; i++){
//		*(p + i ) = vec[i];
//	}
	
	printf("\n\t\t\t Valores ingresados\n");
	for(i = 0 ; i < n ; i ++){
		printf("\n\t\t\t\t Pos: %d %d" , (i + 1) , vec[i]);
	}
//	getchar(); 

//CALCULO DE MAX
	for(max = p = vec , i = 0 ; i < n ; i ++){
		if(*(p + i ) > *max){
			max = p + i;
		}
	}
	
	printf("\nImpresion de resultado\n");
	printf("\n\n Max = %d" , *max);
	printf("\n	 Pos = %d" , (1 +(max - vec)));
	
	
		
	return 0;
}


