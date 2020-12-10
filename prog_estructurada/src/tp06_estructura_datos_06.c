/*
*
*	Título: TP 6 ESTRUCTURAS DE DATOS #2 06
*	Consigna: 6. Un restaurant tiene 6 mozos y 12 mesas, cada vez que cobran una mesa se anotan los siguientes datos, que terminan con número de factura = 0
*	. Número de factura
*	. Número de mozo
*	. Número de mesa
*	. Cantidad de personas que comieron
*	. Monto de la cuenta
*	Se desea saber lo siguiente
*	A. Cantidad de personas atendidas por cada mozo
*	B. Cantidad de facturas realizadas
*	C. Caja diaria realizada
*	E. Monto facturado por cada mesa en total
*	F. Porcentual facturado por cada mozo sobre el total
*	G. Si a cada mozo se le da el 5% de su venta cuánto le corresponde a cada uno
*	H. Cuál mozo atendió más personas en total
*	I. Cuántas facturas superaron $ 45
*	J. Mesa a la que se facturó más veces, o sea que más recambio de clientes tuvo
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define X_MESAS 12
#define Y_MOZOS 6

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
void pausa(void);

void input_data(int **matriz);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int matriz[X_MESAS][Y_MOZOS] = {0};

	/* Input de data */
	/* Procesamiento de data */
	/* Output de data */
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

	/* Deinición de pausa() */
void pausa(void) {
	printf("Ingresá enter para continuar...");
	getchar();
	getchar();
}

