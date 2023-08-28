//SINTAXIS DE UN PUNTERO FUNCION
//		tipo (* nom_punt )();
//PROTOTIPO
//		tipo (* nom_punt) (tipo , tipo , ... , tipo);
//ASIGNACION AL PUNTERO DE LA DIRECCION DE LA FUNCION
//		nom_punt = nom_funcion;
//INVOCACION DE LA FUNCION A TRAVES DEL PUNTERO
//		nom_funcion(A,B)	que (*nom_punt)(A,B)

//SE CONSIDERARAN DOS FUNCIONES SUMAR Y RESTAR, Y UN VECTOR DE DOS PUNTEROS A 
//FUNCION p[]. LA ASIGNACION DE DICHO PUNTERO TENDRA LUGAR SIMULTANEAENTE CON SU 
//DECLARACION.
//LA SELECCION DE LA FUNCION SE REALIZARA A TRAVES DEL SUBINDICE DEL VECTOR DE PUNTEROS

#include <stdio.h>
int sumar (int , int);
int restar (int , int);
int main(){
	int a , b , i;
	int ( *p[]) () = {sumar , restar};
	
//	Ingreso de datos
	scanf("%d %d", &a , &b);
	do{
		printf("\n	Ingrese opcion. -0 Sumar 	-1 Restar\n");
		scanf("%d", &i);
	}while((i != 0) && (i != 1));
	printf("\n\n Resultado = %d", (*p[i]) (a, b));
}

int sumar(int x , int y){
		return x + y;
}
int restar(int x , int y){
	return x - y;
}
