/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES
*	Consigna: Ingresar la edad y la altura de dos personas, indicar la estatura del de mayor edad.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);

/* Función principal */
int main() {
clrscr();

	/* Declaraciones locales */
	int edad0, edad1, res_edad; 
	float altura0, altura1, res_altura;
	
	/* Input de data */
	printf("Ingresar la edad y altura de una persona: ");
	scanf("%d%f", &edad0, &altura0);
	printf("Ingresar la edad y altura de otra persona: ");
	scanf("%d%f", &edad1, &altura1);
	
	/* Procesamiento de data */
	if (edad0 > edad1) {
		res_edad = edad0;
		res_altura = altura0;
	} else if (edad0 < edad1) {
		res_edad = edad1;
		res_altura = altura1;
	}
		
	/* Output de data */
	printf("La persona con %d años es la mayor y mide %f\n", res_edad, res_altura);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}
