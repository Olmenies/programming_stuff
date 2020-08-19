/* 
*
*	Título: EJERCICIOS DE VARIABLES Y ASIGNACIONES 4
*	Consigna: Ingresar los lados de un triángulo calcular su perímetro.
* Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Definiciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
int suma(int arg0, int arg1, int arg2);

/* Función principal */
int main() {
	clrscr();
	/* Declaración de variables */
	int lado0, lado1, lado2, perimetro;
	/* Input de data */
	printf("Introducir los tres lados del triángulo: ");
	scanf("%d %d %d", &lado0, &lado1, &lado2);
	/* Procesamiento de data */
	perimetro = suma(lado0, lado1, lado2);
	
	/* Output de data */
	printf("El perímetro del triángulo descripto es: %d\n", perimetro);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}
	/* Definición de suma() */
int suma(int arg0, int arg1, int arg2) {
	int res;
	res = arg0 + arg1 + arg2;
	return res;
}
