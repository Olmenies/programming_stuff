/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES
*	Consigna: Ingresar 20 notas y nombres de alumnos, indicar los aplazados ( menos de 4) y el nombre a quien pertenece esa nota.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#include <string.h>

/* Macros del procesador */
#define MAX_LIMIT 20

/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int i=0, cant_alumnos;
	char nombre_alumno[20];
	float nota_alumno;

	/* Input de data */
	printf("Ingresar cantidad de alumnos a analizar: ");
	scanf("%d",&cant_alumnos);

	for (i=0; i<=(cant_alumnos-1); i++) {
 		while ((getchar()) != '\n'); //Solamente estoy limpiando el buffer, fflush hacía lío :)

		printf("Ingresar nombre del alumno: ");
		scanf("%s", nombre_alumno);

		printf("Ingresar nota del alumno %s: ", nombre_alumno);
		scanf("%f", &nota_alumno);

		if (nota_alumno < 4) {
			puts("Alumno desaprobado.");
			printf("Nombre del alumno: %s\n",nombre_alumno);
			printf("Nota del alumno %s: %.2f\n", nombre_alumno, nota_alumno);
		}
	}

	/* Procesamiento de data */
	/* Output de data */

	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}
