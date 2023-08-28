//SINTAXIS DE UN PUNTERO FUNCION
//		tipo (* nom_punt )();
//PROTOTIPO
//		tipo (* nom_punt) (tipo , tipo , ... , tipo);
//ASIGNACION AL PUNTERO DE LA DIRECCION DE LA FUNCION
//		nom_punt = nom_funcion;
//INVOCACION DE LA FUNCION A TRAVES DEL PUNTERO
//		nom_funcion(A,B)	que (*nom_punt)(A,B)

//SE MOSTRARA EN ESTE EJEMPLO COMO TRANSFERIR UNA FUNCION COMO ARGUMENTO 
//A OTRA FUNCION UTILIZANDO UN PUNTERO A FUNCION COMO PARAMETRO.
//EN ESTE CASO SE CALCULARA EL VALOR DE X^2 - Y^2  O X^3 + Y^3 SEGUN SE
//SELECCIONE.
//LAS FUNCIONES DE CALCULO DEL CUADRADO O DEL CUBO SE TRANSFERIRAN A LA
//FUNCION DE SUMA COMO ARGUMENTOS, A TRAVES DE UN PUNTERO  A FUNCION QUE FORMA
//PARTE DE UN VECTOR DE 2 PUNTEROS.

#include <stdio.h>

//PROTOTIPOS
int suma(int , int , int(*)(int));
int cuadrado (int);
int cubo (int);

int main(){
	int a , b , seleccion;
	int (*p[2])(int);
	p[0] = cuadrado;
	p[1] = cubo;
	printf("SUMA  DE CUADRADOS : 0 		SUMA DE CUBOS : 1\n\n");
	
//	MENU
	scanf("%d" , &seleccion);
	printf("\n\n Ingreso dos VALORES\n\n");
//	INGRESO DE DATOS
	scanf("%d %d" , &a , &b);
	printf("\n\n Resultado = %d", suma(a , b , p[seleccion]));
}

//FUNCIONES
int cuadrado (int x){
	return (x * x);
}
int cubo (int x){
	return (x * x * x);
}
int suma (int x , int y , int (*ptr)()){
	return (*ptr)(x) + (*ptr)(y);
}
