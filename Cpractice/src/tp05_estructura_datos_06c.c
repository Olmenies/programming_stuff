/*
*
*	Título: TP 5 ESTRUCTURAS DE DATOS 06
*	Consigna: 6. Desarrolle un programa que almacene en un vector el número de días que tiene cada mes (supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero,12=diciembre) y muestre en pantalla el número de días que tiene ese mes.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define ARRAY_SIZE 13

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);

void input_data(int *mes);
void output_data(char array_meses[][ARRAY_SIZE], int *dias, int *mes);

void menu(int *dias, int *mes, int *array_cantidad_dias, char array_meses[][ARRAY_SIZE]);
void pantalla_principal(void);

/* Función principal */
int main() {
	clrscr();

	/* Declaraciones locales */
	int mes=0, dias=0;

	char array_meses[][ARRAY_SIZE] = {"Not a month", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
	int array_cantidad_dias[ARRAY_SIZE] = {0 , 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	/* Menu */
	int i=0;
	do {
		pantalla_principal();
		scanf("%d", &i);

		switch(i) {
			case 0:
				break;
			case 1:
				/* Input de data */
				input_data(&mes);

				/*Procesamiento de data */
				dias = array_cantidad_dias[mes];
				break;
			case 2:
				/* Output de data */
				output_data(array_meses, &dias, &mes);
				getchar();
				break;
			default:
				printf("Opción no válida.\n");
                break;
		}

		/* Procesamiento de data */
//		dias = array_cantidad_dias[mes];
	}while(i!=0);

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

	/* Definición de input_data() */
void input_data(int *mes) {
	do {
		printf("Ingresar mes a analizar (1 - 12): ");
		scanf("%d", mes);
		if((*mes < 1) || (*mes > 12)) {
			printf("%d no es un mes válido\n", *mes);
		}
	}while((*mes < 1) || (*mes > 12));
}

	/* Definición de output_data() */
void output_data(char array_meses[][ARRAY_SIZE], int *dias, int *mes) {
	clrscr();
	if(*dias!=0) {
		printf("%s tiene %d días\n", array_meses[*mes], *dias);
		printf("Apretá enter para continuar\n");
	} else {
		printf("Mes ingresado no válido");
	}
	getchar();

}

    /* Definición de pantalla_principal() */
void pantalla_principal(void) {
	clrscr();
	line();
	printf("");
	printf("\t1. Selección de mes\n\t2. Mostrar resultado\n\t0. Salir\n");
	line();
	printf("Ingresar una opción: ");
}
