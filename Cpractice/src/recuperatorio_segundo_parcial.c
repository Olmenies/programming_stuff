/*
*
*	Título: Recuperatorio del segundo parcial
*	Consigna:
*	Presidencia de la nación le solicita realizar un programa que permita cargar los siguientes datos de los afectados por COVID:
	- Mes
	- Cantidad de Casos
	- Zona (1 CABA, 2 Conurbano)
	La carga finaliza con Mes= 0

Se solicita saber:
	1) (o) Cantidad de personas afectadas en el conurbano.
	2) (o) Mes con más afectados en CABA.
	3) (o) ¿Existieron menos casos en CABA o en el Conurbano?
	4) (o) Durante el segundo semestre, que localidad reportó mas casos.
	5) (o) Imprima de mayor a menor la cantidad de afectados por mes en CABA.
*		Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

#define MES 13
#define ZONA 3

/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */

void clrscr(void);
void line(void);
void pausa(void);

void input_data(int mesXzona[MES][ZONA]);
void imprimir_matriz(int mesXzona[MES][ZONA], int minimos[ZONA], int maximo_mes[ZONA], int orden[MES], int semestre[MES/2]);

void calculos(int mesXzona[MES][ZONA]);
void calculo_minimos(int mesXzona[MES][ZONA], int minimos[ZONA]);
void calculo_maximo(int mesXzona[MES][ZONA], int maximos[ZONA]);
void orden_vectores(int mesXzona[MES][ZONA], int orden[MES]);
void calculo_semestre(int mesXzona[MES][ZONA], int semestre[MES/2]);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */

	/* mesXzona[0][0] -> Cantidad de casos totales
	 * mesXzona[0][zona] -> Cantidad de casos totales por zona
	 * mesXzona[mes][0] -> Cantidad de casos totales por mes */
	int mesXzona[MES][ZONA] = {0};
	
	/* Vector que guarda el mes con menos casos en cada zona
	 * minimos[0] = zona con menos casos */
	int minimos[ZONA] = {0};

	/* Vector que guarda el mes con mas casos en cada zona
	 * maximo_mes[0] = zona con mas casos */
	int maximo_mes[ZONA] = {0};

	/* Vector que guarda el orden de los contagiados en CABA */
	int orden[MES] = {0};

	/* Vector que guarda los casos semestrales */
	int semestre[MES/2] = {0};

	/* Input de data */
	input_data(mesXzona);

	/* Procesamiento de data */
	calculos(mesXzona);
	calculo_minimos(mesXzona, minimos);
	calculo_maximo(mesXzona, maximo_mes);
	orden_vectores(mesXzona, orden);
	calculo_semestre(mesXzona, semestre);

	/* Output de data */
	imprimir_matriz(mesXzona, minimos, maximo_mes, orden, semestre);
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
	for(i=0; i<20; i++) {
		printf("***");
	}
	printf("\n");
}

	/* Definición de pausa() */

	/* Definición de input_data() */ 
void input_data(int mesXzona[MES][ZONA]) {
	int mes=0, zona=0;

	do {
		do {
			printf("Ingresar mes (0 para salir): ");
			scanf("%d", &mes);
			if(((mes < 1) || (mes > 12)) && (mes != 0))
				printf("Mes no válido, ingresar un mes del 1 al 12");
			if (mes == 0)
				break;
		}while((mes < 1) || (mes > 12));

		if (mes == 0)
			break;

		do {
			printf("Ingresar zona(1-CABA 2-Provincia):");
			scanf("%d", &zona);
			if((zona < 1) || (zona > 2))
				printf("Zona no válida, seleccionar 1 para CABA o 2 para Provincia");
		}while((zona < 1) || (zona > 2));

		printf("Ingresar cantidad de contagiados: ");
		scanf("%d", &mesXzona[mes][zona]);
		printf("\n");

	}while(mes != 0);
	printf("\n");
}

	/* Definición de imprimir_matriz() */
void imprimir_matriz(int mesXzona[MES][ZONA], int minimos[ZONA], int maximo_mes[ZONA], int orden[MES], int semestre[MES/2]) {
	int mes=0, zona=0;

	line();
	puts("Matriz principal - Base de datos");
	line();
	for(zona=0; zona<ZONA; zona++) {
		for(mes=0; mes<MES; mes++) {
			printf("%d\t", mesXzona[mes][zona]);
		}
		printf("\n");
	}

	line();
	puts("Vector minimos");
	line();
	for(zona = 0; zona < ZONA; zona++) {
		printf("%d\t", minimos[zona]);
	}
	printf("\n");
	line();

	puts("Vector maximo");
	line();
	for(zona=0; zona<ZONA; zona++) {
		printf("%d\t", maximo_mes[zona]);
	}
	printf("\n");
	line();

	puts("Vector orden");
	for(mes=0; mes<MES; mes++) {
		printf("%d\t", orden[mes]);
	}
	printf("\n");
	line();
	puts("Vector orden (valores)");
	line();

	for(mes=0; mes<MES; mes++) {
		printf("%d\t", mesXzona[orden[mes]][2]);
	}
	printf("\n");
	line();

	puts("Vector semestre");
	line();
	for(zona=0; zona<ZONA; zona++) {
		printf("%d\t", semestre[zona]);
	}
	printf("\n");
	line();
}

	/* Definición de calculos() */
void calculos(int mesXzona[MES][ZONA]) {
	int mes=0, zona = 0; 

	for(zona = 1; zona < ZONA; zona++) {
		for(mes = 1; mes < MES; mes++) {
			mesXzona[0][zona] = mesXzona[0][zona] + mesXzona[mes][zona];
		}
		mesXzona[0][0] = mesXzona[0][0] + mesXzona[0][zona];
	}

	for(mes = 1; mes < MES; mes++) {
		for(zona = 1; zona < ZONA; zona++) {
			mesXzona[mes][0] = mesXzona[mes][0] + mesXzona[mes][zona];
		}
	}
}

	/* Definición de calculo_minimos() */
void calculo_minimos(int mesXzona[MES][ZONA], int minimos[ZONA]) {
	int mes=0, zona=0;

	for(zona=1; zona<ZONA; zona++) {
		for(mes=1; mes<MES; mes++) {
			if((mesXzona[mes][zona] < minimos[zona]) || (mes == 1)) {
				minimos[zona] = mesXzona[mes][zona];
			}
		}
	}

	if(minimos[1] < minimos[2]) {
		minimos[0] = minimos[1];
	} else
		minimos[0] = minimos[2];

}

	/* Definición de calculo_maximo() */
void calculo_maximo(int mesXzona[MES][ZONA], int maximo_mes[ZONA]) {
	int mes=0, zona=0, aux=0;
	
	for(zona=1; zona<ZONA; zona++) {
		for(mes=1; mes<MES; mes++) {
			if((mesXzona[mes][zona] > aux) || (mes == 1)) {
				aux = mesXzona[mes][zona];
				maximo_mes[zona] = mes;
			}
		}
	}
}
	
	/* Definición de orden_vectores() */
void orden_vectores(int mesXzona[MES][ZONA], int orden[MES]) {
	int i=0, j=0, aux=0;

	for(i=0; i < MES; i++) {
		orden[i] = i;
	}

	for(i=1; i<MES; i++) {
		for(j=i+1; j<MES; j++) {
			if(mesXzona[orden[i]][2] > mesXzona[orden[j]][2]) {
				aux = orden[i];
				orden[i] = orden[j];
				orden[j] = aux; 
			}
		}
	}
}

	/* Definición de calculo_semestre() */
void calculo_semestre(int mesXzona[MES][ZONA], int semestre[MES/2]) {
	int mes=0, zona=0;

	for(zona=1; zona<ZONA; zona++) {
		for(mes=7; mes<MES; mes++) {
			semestre[zona] = semestre[zona] + mesXzona[mes][zona];
		}
	}
}

