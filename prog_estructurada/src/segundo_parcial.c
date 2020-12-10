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
*	1) (o) Cantidad de personas afectadas.
*	2) (o) Mes con más afectados en CABA.
*	3) (o) ¿Existieron más casos en CABA o en el Conurbano?
*	4) (o) Durante el primer semestre, que localidad reportó mas casos.
*	5) () Imprima de mayor a menor la cantidad de afectados por mes en el Conurbano. 
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

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int mes=0, zona=0, acum_total=0, contagiados=0, contagiados_max=0, acum_caba=0, acum_prov=0, acum_semestre_caba = 0, acum_semestre_prov = 0, i=0, j=0;
	int mesXzona[MES][ZONA] = {0};
	int vector[MES] = {0};

	/* Input de data */
	for(mes=1; mes<MES; mes++) {
		printf("Mes %d\n", mes);
		printf("Ingresar contagiados en CABA: ");
		scanf("%d", &contagiados);
		mesXzona[mes][1] = contagiados;
		acum_total += contagiados;
		acum_caba += contagiados;
		if(mes <= 6){
			acum_semestre_caba += contagiados;
		}

		if((contagiados > contagiados_max) || (mes==1)) {
			contagiados_max = contagiados;
		}

		printf("Ingresar contagiados en Provincia: ");
		scanf("%d", &contagiados);
		mesXzona[mes][2] = contagiados;
		acum_total += contagiados;
		acum_prov += contagiados;

		if(mes <= 6){
			acum_semestre_prov += contagiados;
		}
	}

	/* Output de data */
	line();
	printf("\n\tA. Cantidad de personas afectadas: %d", acum_total);
	printf("\n\tB. Mes con más contagiados en CABA: = %d", contagiados_max);
	printf("\n\tC. ¿Dónde hubo más contagios en general?");
	
	if(acum_caba > acum_prov) {
		printf("\n\t\tCaba tuvo más contagios");
	} else if(acum_caba==acum_prov) {
		printf("\n\t\tCaba y provincia tuvieron los mismos contagios");
	} else {
		printf("\n\t\tProvincia tuvo más contagios");
	}

	printf("\n\tD. ¿Dónde hubo más contagios en el primer semestre?\n");
	if(acum_semestre_caba > acum_semestre_prov) {
		printf("\t\tCaba tuvo más contagios en el primer semestre\n");
	} else if(acum_semestre_caba==acum_semestre_prov) {
		printf("\t\tCaba y provincia tuvieron los mismos contagios en el primer semestre\n");
	} else {
		printf("\t\tProvincia tuvo más contagios en el primer semestre\n");
	}

	line();
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
