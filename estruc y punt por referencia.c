//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	Estructura y puntero - Pasaje por referencia de una estructura

#include <stdio.h>
#include <stdlib.h>

#define n 5

struct fecha{
	int dia;
	int mes;
	int anio;
};

void corregir(struct fecha *);

int main()
{
	struct fecha hoy;
	hoy.dia = 29;
	hoy.mes = 2;
	hoy.anio = 2023;
	
	printf("\n\n Hoy = %02d : %02d : %d \n\n" , hoy.dia , hoy.mes , hoy.anio);
	
	corregir(&hoy);
	
	printf("\n\n Hoy = %02d : %02d : %d \n\n" , hoy.dia , hoy.mes , hoy.anio);
	
	printf("\n\n\n");
	return 0;
}


void corregir(struct fecha *P){
	if(P->dia == 29 && P->mes == 2){
		P->dia = 1;
		P->mes = 3;
	}
}
