/*
*
*	Título: EJERCICIOS SOBRE MAXIMOS y MINIMOS 05
*	Consigna: En una carrera de autos se ingresan el número de auto y su tiempo, indicar cuál ganó y cúal fue el último. *
*	Nota: Se asume que la entrada de datos se finaliza con el auto 0
*	Alumno: 
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int car, pos_prim, pos_ult, cont=0;
	float tiempo, tiempo_min, tiempo_max;

	/* Input de data */

	do {
		printf("Ingresar un número de auto: ");
		scanf("%d", &car);

		if(car == 0)
			break;

		printf("Ingresar el tiempo del auto %d: ", car);
		scanf("%f", &tiempo);

		if(tiempo > tiempo_min || cont == 0) {
			tiempo_min = tiempo;
			pos_ult = car;
		}
		if(tiempo < tiempo_max || cont == 0) {
			tiempo_max = tiempo;
			pos_prim = car;
		}

		cont++;

	} while (car != 0);

	/* Procesamiento de data */
	/* Output de data */
	printf("Última posición: %d\n", pos_ult);
	printf("Primera posición: %d\n", pos_prim);
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}
