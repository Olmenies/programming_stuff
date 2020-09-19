/*
*
*	Título: EJERCICIOS DE OPERACIONES CONDICIONALES 10
*	Consigna: Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida, considerar los años bisiestos (existe una funcion que devuelve “B” en caso de bisiesto y “N” si no lo es).
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>

/* Macros del procesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void	clrscr(void);
int bisiesto(int); //no es necesario declarar el nombre de la variable, solo el tipo //

/* Función principal */
int main() {
	/* Declaraciones locales */
	int dia, mes, ano, valida;
	valida = 0;

	/* Input de data */
	printf("Ingresar una fecha con el formato dd/mm/aaaa: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	/* Procesamiento de data */
	if (ano!=0 && dia>0 && mes>0) {
		switch(mes) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (dia <= 31)
					valida = 1;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (dia <= 30 )
					valida = 1;
				break;
			case 2:
				if (bisiesto(ano)) {
					if (dia <= 29)
						valida = 1;
				}
				break;
		}
	}
	
	/* Output de data */
	if (valida == 0)
		printf("Fecha no válida\n");
	else
		printf("Fecha válida\n");
	return 0;
}

/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}

	/* Definición de bisciesto() */
int bisiesto(int ano) {
	if ((ano % 4 == 0 && ano & 100 != 0) || (ano % 4 == 0))
		return 1;
	else
		return 0;
}
