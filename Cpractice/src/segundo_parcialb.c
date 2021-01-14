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
*	1) (x) Cantidad de personas afectadas.
*	2) (x) Mes con más afectados en CABA.
*	3) (x) ¿Existieron más casos en CABA o en el Conurbano?
*	4) (x) Durante el primer semestre, que localidad reportó mas casos.
*	5) (x) Imprima de mayor a menor la cantidad de afectados por mes en el Conurbano. 
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define MES 13
#define ZONA 3

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
void pausa(void);

void imprimir_matriz(int zonaXmes[ZONA][MES], int zona_semestral[ZONA]);
void input_data(int zonaXmes[ZONA][MES]);
void mayor_contagios(int zonaXmes[ZONA][MES], int *caba_mas_contagios);
void acumulador_semestral(int zonaXmes[ZONA][MES], int zona_semestral[ZONA]);
void bubblesort(int zonaXmes[ZONA][MES], int orden[MES]);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int caba_mas_contagios = 0, i=0;

	/*
	 * zonaXmes[0][0] = cantidad de contagiados totales
	 * zonaXmes[0][mes] = cantidad de contagiados totales por mes
	 * zonaXmes[zona][0] = Cantidad de contagiados totales por zona
	 */
	int zonaXmes[ZONA][MES] = {0};
	int zona_semestral[ZONA] = {0};
	int orden[MES] = {0};

	/* Menu*/
		/* Input de data */
	input_data(zonaXmes);
	mayor_contagios(zonaXmes, &caba_mas_contagios);
	acumulador_semestral(zonaXmes, zona_semestral);
	bubblesort(zonaXmes, orden);
	imprimir_matriz(zonaXmes, zona_semestral);

		/* Procesamiento de datos */

		/* Output de data */
	printf("\tCantidad de personas afectadas = %d\n", zonaXmes[0][0]);
	printf("\tMes con más afectados en CABA = %d\n", caba_mas_contagios);

	if(zonaXmes[1][0] > zonaXmes[2][0]) {
		printf("\tCABA tuvo más contagios\n");
	} else if(zonaXmes[2][0] > zonaXmes[1][0]) {
		printf("\tProvicia tuvo más contagios\n");
	}
	else {
		printf("\tProvincia y CABA tuvieron la misma cantidad de contagios\n");
	}
	printf("\tCantidad de contagiados semestre CABA: %d\n", zona_semestral[1]);

	printf("Vector conurbano ordenado: \n");
	for(i=1; i<MES; i++){
		printf("Mes = %d \tCasos = %d\n", orden[i], zonaXmes[2][orden[i]]);
	}

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

	/* Definición de imprimir_matriz() */
void imprimir_matriz(int zonaXmes[ZONA][MES], int zona_semestral[ZONA]){
	int zona=0, mes=0;
	line();
	for(zona=0; zona<ZONA; zona++) {
		for(mes=0; mes<MES; mes++) {
			printf("%d", zonaXmes[zona][mes]);
			printf("\t");
		}
		printf("\n");
	}
	line();

	for(zona=0; zona<ZONA; zona++) {
		printf("%d", zona_semestral[zona]);
		printf("\t");
	}
	printf("\n");
	line();
}

	/* Definición de input_data() */
void input_data(int zonaXmes[ZONA][MES]) {
	int mes=0, zona=0;

	do{
		line();
		printf("Ingeresar mes: ");
		scanf("%d", &mes);
		if(mes == 0) {
			break;
		}
		do{
			printf("Ingresar zona (1=CABA - 2=Provincia): ");
			scanf("%d", &zona);
			if(zona > ZONA-1) {
				printf("Zona no válida.");
			}

			if(zona < ZONA-1) {
				break;
			}
		}while(zona > ZONA-1);

 		printf("Ingresar cantidad de contagiados: ");
		scanf("%d", &zonaXmes[zona][mes]);
	} while(mes != 0);

	/* Sumando cantidad de contagiados por mes */
	for(mes=0; mes<MES; mes++) {
		for(zona=0; zona<ZONA; zona++){
			zonaXmes[0][mes] += zonaXmes[zona][mes];
		}
	}

	/* Sumando la cantidad de contagiados por zona*/
	for(zona=0; zona<ZONA; zona++) {
		for(mes=0; mes<MES; mes++) {
			zonaXmes[zona][0] += zonaXmes[zona][mes];
		}
	}	
}

	/* Definición de mayor_contagios() */
void mayor_contagios(int zonaXmes[ZONA][MES], int *caba_mas_contagios) {
	int mes=0, zona=0;

	for(mes=1; mes<MES; mes++) {
		if(zonaXmes[1][mes] > *caba_mas_contagios || mes==1) {
			*caba_mas_contagios = zonaXmes[1][mes];
		}
	}
}

	/* Definición de acumulador_semestral() */
void acumulador_semestral(int zonaXmes[ZONA][MES], int zona_semestral[ZONA]) {
	int zona=0, mes=0;

	for(mes=1; mes<=6; mes++) {
		zona_semestral[1] += zonaXmes[1][mes];
		zona_semestral[2] += zonaXmes[2][mes];

	}
}

	/*Definición de bubblesort*/
void bubblesort(int zonaXmes[ZONA][MES], int orden[MES]) {
	int i=0, j=0, aux=0;

	for(i=0; i<MES; i++) {
		orden[i] = i;
	}

	for(i=1; i<MES-1; i++) {
		for(j=i+1; j<MES; j++) {
			if(zonaXmes[2][orden[j]] > zonaXmes[2][orden[i]]) {
				aux=orden[j];
				orden[j] = i;
				orden[i] = j;
			}
		}
	}
}

