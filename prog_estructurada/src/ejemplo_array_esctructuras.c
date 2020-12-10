/*
*
*	Título: Ejemplo de estructuras de datos con struct 
*	Consigna: Solamente estoy probando esta gilada
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
struct perro {
	char nombre[30];
	int edadMeses;
	float peso;
}perros[3];

	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
void pausa(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	/* Input de data */
	for(int i=0; i<3; i++) {
		printf("Ingresar nombre del perro: ");
		scanf("%s", perros[i].nombre);
		printf("Ingresar edad del perro en meses: ");
		scanf("%i", &perros[i].edadMeses);
		printf("Ingresar peso del perro: ");
		scanf("%f", &perros[i].peso);
		line();
	}
	/* Procesamiento de data */
	/* Output de data */
	line();
	for(int i=0; i<3; i++) {
		printf("Nombre del perro (%i): %s\n", i+1, perros[i].nombre);
		printf("Edad del perro en meses (%i): %i\n", i+1, perros[i].edadMeses);
		printf("Peso del perro (%i): %.2f\n", i+1, perros[i].peso);
	}
	line();
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

	/* Deinición de pausa() */

