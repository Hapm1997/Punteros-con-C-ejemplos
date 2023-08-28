//SE CREARA UNA MATRIZ DE ENTEROS Y LUEGO SE REALIZARA 
//LA IMPRESION UTILIZANDO LA MODALIDAD SUBINDICADA EN PRIMERA 
//INSTANCIA Y A CONTINUACION, EL MODO DE DESPLAZAMIENTO DE 
//CON UN PUNTERO

#include <stdio.h>
int main(){
	int matriz[][5] = {
		{ 10 , 12 , 14 , 16 , 18 },
		{ 20 , 22 , 24 , 26 , 28 },
		{ 30 , 32 , 34 , 36 , 38 },
		{ 40 , 42 , 44 , 46 , 48 }
	};
	int i , k;
//	USANDO ARRAYS

	for( i = 0 ; i < 4 ; i++){
		printf("\n\n\t\t\t");
		for( k = 0 ; k < 5 ; k++){
			printf("%5d", matriz[i][k]);
		}
	}
	
//	USANDO PUNTEROS
	printf("\n\n\n\n");
	for( i = 0 ; i < 4 ; i ++){
		printf("\n\n\t\t\t");
		for(k = 0 ; k < 5 ; k ++){
			printf("%5d", *( *( matriz + i ) + k));
		}
	}
	printf("\n\n\n");
	printf("matriz = %p 	matriz + 3 = %p\n", matriz , matriz + 3);
	printf("*matriz = %p 	*matriz + 3 = %p\n", *matriz , *matriz + 3);	
	printf("**matriz = %d 	*(*(matriz + 3) + 2 ) = %d\n", **matriz , *(*(matriz + 3) + 2));
	
//	*(*(matriz + i ) + k )  es equivalente a matriz[i][k]
	
}
