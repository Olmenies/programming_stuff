/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 09
*	Consigna: Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo si se sabe que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150 hs le dan $ 100 adicionales.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
int calc_sueldo(int arg0, int arg1, int arg2);

/* Función principal */
int main() {
	clrscr();
	
	/* Declaraciones locales */
	int cod_empleado, valor_hora, cant_hora, bono, sueldo;
	
	/* Input de data */
	printf("Introducir código de empleado: ");
	scanf("%d", &cod_empleado);
	printf("Introducir valor de la hora trabajada: ");
	scanf("%d", &valor_hora);
	printf("Introducir cantidad de horas trabajadas: ");
	scanf("%d", &cant_hora);
	
	/* Procesamiento de data */
	if (cant_hora > 50) {
		if (cant_hora > 150) {
			bono = 200;
			printf("¡Enhorabuena! Te ganaste un bono de $200\n");
		} else { 
			bono = 100;
			printf("¡Enhorabuena! Te ganaste un bono de $100\n");
		}}	 else 
			bono = 0;
			
	sueldo = calc_sueldo(valor_hora, cant_hora, bono);
	
	/* Output de data */
	printf("Sueldo del empleado %d: %d\n", cod_empleado, sueldo);
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de calc_sueld */
int calc_sueldo(int arg0, int arg1, int arg2) {
	int res;
	res = arg0 * arg1 + arg2;
	return res;
}
