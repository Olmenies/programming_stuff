/*
*
*       Título: TP5 VECTORES 01
*       Consigna: 1. (x) Cree un vector de enteros de 5 posiciones, inicializándolo con los valores del
*       10,100,94,84,11
*       Autotest:
*       	(x) Usar struct
*       	(x) Hacer un listado de 5 structs
*       Alumno: Nicolás Esteban Olmedo
*
*/

// Nota: Los nombres de las variables son un desastre para poder distinguir bien qué es cada cosa.

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
typedef struct estructura {
	int primera;
	int segunda;
}peposa;
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
void input_data(peposa cumbia[], int cant);
void output_data(peposa cumbia[], int cant);

int main() {
/* Función principal */
	clrscr();

	/* Declaraciones locales */
	int i=0, cantidad=0;

	/* Input de data */
	printf("Ingresar cantidad de elementos: ");
	scanf("%d", &cantidad);

	peposa corcho[cantidad];
	input_data(corcho, cantidad);
	line();
	output_data(corcho, cantidad);

	/* Procesamiento de data */
	/* Output de data */
	output_data(corcho, cantidad);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de line() */
void line() {
	for(int i=0; i<20; i++) {
		printf("***");
	}
	printf("\n");
}

	/* Definificón de input_data() */
void input_data(peposa cumbia[], int cant) {
	int i=0;
	for(i=0; i<cant; i++) {
		printf("Estructura número %d\n", i);
		puts("Ingresar primer entero: ");
		scanf("%d", &cumbia[i].primera);
		puts("Ingresar segundo entero: ");
		scanf("%d", &cumbia[i].segunda);
	}
}

	/* Definición de output_data() */
void output_data(peposa cumbia[], int cant) {
	int i=0;
	for(i=0; i<cant; i++) {
		printf("Estructura número %d\n", i);
		printf("Primer entero: %d\n", cumbia[i].primera);
		printf("Segundo entero: %d\n", cumbia[i].segunda);
	}
}


