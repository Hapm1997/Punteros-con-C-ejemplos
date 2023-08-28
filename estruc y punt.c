//	OPERADORES DE TIPO PUNTERO
//			*		&
//	* Lo apuntado por
//	& La dirección de


//	Estructura y puntero - Pasaje por valor de una estructura

#include <stdio.h>
#include <stdlib.h>

#define n 5

struct fecha{
	int dia;
	int mes;
	int anio;
};

struct fecha corregir(struct fecha );

int main()
{
	struct fecha hoy;
	hoy.dia = 29;
	hoy.mes = 2;
	hoy.anio = 2023;
	
	printf("\n\n Hoy = %02d : %02d : %d \n\n" , hoy.dia , hoy.mes , hoy.anio);
	
	hoy = corregir(hoy);
	
	printf("\n\n Hoy = %02d : %02d : %d \n\n" , hoy.dia , hoy.mes , hoy.anio);
	
	printf("\n\n\n");
	return 0;
}


struct fecha corregir(struct fecha w){
	if((w.dia == 29) && (w.mes == 2)){
		w.dia = 1;
		w.mes = 3;
	}
	return w;
}
