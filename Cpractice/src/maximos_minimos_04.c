/*
*
*	Título: EJERCICIOS SOBRE MAXIMOS y MINIMOS 04
*	Consigna: Ingresar las edades y estaturas de los alumnos, calcular la edad promedio, la edad mayor y la estatura menor, los datos finalizan con edad = 0.
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
float calc_prom(float arg0, float arg1);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int edad, edad_max,cont, acum_edad=0;
	float estatura, estatura_min, edad_promedio;

	/* Input de data */
	do {
		printf("Ingresar edad de un alumno: ");
		scanf("%d", &edad);

		if (edad ==0)
			break;
		printf("Ingresar estatura de un alumno: ");
		scanf("%f", &estatura);

		if(edad > edad_max || cont==0)
			edad_max = edad;
		if(estatura < estatura_min || cont == 0)
			estatura_min = estatura;

		acum_edad+=edad;
		cont ++;

	} while (edad !=0);

	/* Procesamiento de data */
	edad_promedio = calc_prom(acum_edad,cont);

	/* Output de data */
	printf("Edad máxima: %d\n", edad_max);
	printf("Estatura mínima: %.2f\n", estatura_min);
	printf("Promedio edades: %.2f\n", edad_promedio);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr() {
	system("clear");
}

float calc_prom(float arg0, float arg1) {
	float res;
	res = arg0/arg1;
	return res;
}
