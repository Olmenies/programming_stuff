/*
*
*	Título: EJERCICIOS SOBRE CICLOS, CONTADORES y ACUMULADORES 01
*	Consigna: Ingresar 25 números, calcular su promedio.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr();
float calc_prom(float arg0, float arg1);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int acum=0,i=0,j,n;
	float prom;

	/* Input de data */
	printf("Ingresar número máximo de iteraciones: ");
	scanf("%d",&j);
	printf("Número maximo de iteraciones elegido: %d\n",j);

	for (i=0; i<=(j-1); i+=1) {
		printf("Ingresar un número(%d restantes): ",(j-i));
		scanf("%d",&n);
		acum += n;
	}
	/* Procesamiento de data */
	prom = calc_prom(acum, j);

	/* Output de data */
	printf("Promedio números ingresados: %0.2f\n",prom);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

float calc_prom(float arg0, float arg1) {
	float res=0;
	res = arg0/arg1;
	return res;
}
