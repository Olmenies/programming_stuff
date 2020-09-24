/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES
*	Consigna: Ingresar N sueldos e indicar su suma y su promedio.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
float calc_prom(float arg0, float arg1);
void clrscr(void);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int acum, cant_sueldos, i=0, sueldo;
	float prom;

	/* Input de data */
	printf("Ingresar cantidad de sueldos a analizar: ");
	scanf("%d", &cant_sueldos);

	for (i=0; i<=(cant_sueldos - 1); i++) {
		printf("Ingrear sueldo(%d restantes): ",(cant_sueldos-i));
		scanf("%d", &sueldo);
		acum += sueldo;
	}

	/* Procesamiento de data */
	prom = calc_prom(acum, cant_sueldos);

	/* Output de data */
	printf("Sumatoria de los sueldos ingresados: %d\n", acum);
	printf("Promedio de los sueldos ingresados: %.2f\n ", prom);

	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}
	/* Definición de calc_prom() */
float calc_prom(float arg0, float arg1) {
	float res=0;
	res=arg0/arg1;
	return res;
}
