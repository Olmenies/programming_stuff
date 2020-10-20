/*
*
*	Título: Primer parcial
*	Consigna: Presidencia de la nación le solicita realizar un programa que permita cargar los siguientes datos de los afectados por COVID:
*			- Edad
*			- Sobrevivió? (1 si, 0 no)
*			- Zona (1 CABA, 2 Conurbano)
*			La carga finaliza con edad = -1
*
*			Se solicita saber:
*			1) (x) Cantidad de personas afectadas.
*			2) (x) Cantidad de fallecidos.
*			3) (x) promedio de edad.
*			4) (x) Edad máxima de los sobrevivientes.
*			5) (x) Edad mínima de los afectados y decir si sobrevivió.
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#include <string.h>

/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
float calc_prom(float arg0, float arg1);
void clrscr(void);

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int edad, estado, zona, cant_afectados=0, cant_fallecidos=0, cant_total=0, acum_edad=0, edad_min, edad_max, estado_min=0;
	float prom_edad;
	char estado_char[20];

	/* Input de data */
	do {
		printf("Ingresar edad del paciente: ");
		scanf("%d", &edad);

		if(edad == -1)
			break;
		do {
			printf("Ingresar estado del paciente (1 sobrevivió, 0 no sobrevivió): ");
			scanf("%d", &estado);

			if(estado<0 || estado >1)
				printf("Código de no válido.\nIngresar un código válido (1 sobrevivió, 0 no sobrevivió)\n");

		}while(estado<0 || estado > 1);
w
		/* Verificación de que el código ingresado sea válido */
		do {
			printf("Ingresar zona (1 CABA, 2 Conurbano): ");
			scanf("%d", &zona);

			if(zona<1 || zona>2)
				printf("Código de zona no válido.\nIngresar un código válido (1 CABA, 2 Conurbano)\n");

		}while(zona<1 || zona>2);

		/* Contador de muertes */
		if(estado==0)
			cant_fallecidos++;

		acum_edad+=edad;
		cant_afectados++;

		/* Edad máxima */
		if((edad > edad_max || cant_afectados == 0) && estado == 1)
			edad_max = edad;

		/* Edad mínima */
		if(edad < edad_min || cant_afectados == 0) {
			edad_min = edad;
			estado_min = estado;
		}

		/* Estado edad mínima */
		switch (estado_min) {
			case 0:
				strcpy(estado_char,"Muerto");
				break;
			case 1:
				 strcpy(estado_char,"Vivo");
				 break;
			 default:
				 printf("Esta opción debería ser inalcanzable. Por favor, reportar asap\n");
		 }

		printf("***\n");
	}while(edad != -1);

	/* Procesamiento de data */
	prom_edad = calc_prom(acum_edad,cant_afectados);

	/* Output de data */
	printf("**************************************************\n");
	printf("Consigna 1:\n");
	printf("\tCantidad de personas afectadas: %d\n", cant_afectados);
	printf("Consigna 2:\n");
	printf("\tCantidad de fallecidos: %d\n", cant_fallecidos);
	printf("Consigna 3:\n");
	printf("\tPromedio de edades: %.2f\n", prom_edad);
	printf("Consigna 4:\n");
	printf("\tEdad máxima de los sobrevivientes: %d\n", edad_max);
	printf("Consigna 5:\n");
	printf("\tEdad mínima: %d\n",edad_min);
	printf("\tEstado del paciente con menor edad: %s\n",estado_char);
	printf("**************************************************\n");
	return 0;
}
/* Otras funciones */
	/* Definición de clrscr() */
void clrscr(void) {
	system("clear");
}
	/* Definición de calc_prom() */
float calc_prom(float arg0, float arg1) {
	float res = 0;
	res = arg0/arg1;
	return res;	
}
