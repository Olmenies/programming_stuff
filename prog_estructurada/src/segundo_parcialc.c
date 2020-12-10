/*
*
*	Título: Segundo Parcial
*	Consigna:Presidencia de la nación le solicita realizar un programa que permita cargar los siguientes datos de los afectados por COVID:
*	- Mes
*	- Cantidad de Casos
*	- Zona (1 CABA, 2 Conurbano)
*	La carga finaliza con Mes= 0
*
*	Se solicita saber:
*	1) () Cantidad de personas afectadas.
*	2) () Mes con más afectados en CABA.
*	3) () ¿Existieron más casos en CABA o en el Conurbano?
*	4) () Durante el primer semestre, que localidad reportó mas casos.
*	5) () Imprima de mayor a menor la cantidad de afectados por mes en el Conurbano. 
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define MES 13
#define ZONA 3

struct Meses {
	int orden;
	int mes;
	int casos_caba;
	int casos_prov;
};

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
void pausa(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int i=0, j=0;

	/* Input de data */
	do{
		printf("Ingresar mes de carga: ");
		scanf("%d", mes)
	}while(mes < 1 || mes > 12);
	

	/* Procesamiento de data */
	/* Output de data */

//	printf("Mes 1\n");
//	printf("Casos en CABA = %d\n", Mes1.casos_caba);
//	printf("Casos en Provincia = %d\n", Mes1.casos_prov);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() */
void line(void) {
	int i=0;
	for(i=0; i<=20; i++) {
		printf("***");
	}
	printf("\n");
}

	/* Definición de pausa() */
void pausa(void) {
	printf("Ingresá enter para continuar...");
	getchar();
	getchar();
}

