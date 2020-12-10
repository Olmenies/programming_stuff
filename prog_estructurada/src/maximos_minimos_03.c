/*
*
*	Título: EJERCICIOS SOBRE MAXIMOS y MINIMOS 03
*	Consigna: Ingresar los sueldos y nombres de 30 empleados, indicar el sueldo mayor y a quién pertenece.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#include <string.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	float sueldo, sueldo_max;
	int i;
	char nombre[20], nombre_max[20];

	int condicion_salida = 30;

	/* Input de data */
	for(i=0;i<=(condicion_salida-1);i++) {
		printf("Ingresar nombre del empleado(%d restantes): ", (condicion_salida-i));
		fflush(stdin);
		scanf("%s",nombre);
		printf("Ingresar sueld del empleado %s: $", nombre);
		scanf("%f", &sueldo);

		if(sueldo > sueldo_max || i == 0) {
			sueldo_max = sueldo;
			strcpy(nombre_max,nombre);
		}
	}
	/* Procesamiento de data */
	/* Output de data */
	printf("Empleado con mayor sueldo: %s\n", nombre_max);
	printf("Sueldo del empleado %s: $%.2f\n", nombre_max, sueldo_max);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void)
{
	system("clear");
}
