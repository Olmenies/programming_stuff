/*
*
*	Título: TP 7 EJERCICIOS COMBINADOS 04
*	Consigna: 4. Una empresa desea analizar los sueldos a sus 50 empleados durante el año, para ello conoce:
*		. Legajo del empleado
*		. Cantidad de horas trabajadas
*		. Valor de la hora
*		. Mes
*	En un vector en memoria se deben cargar los nombres de los empleados, se desea saber:
*		A. (x) Sueldo anual de cada empleado
*		B. (x) Total de sueldos pagados cada mes
*		C. (o) Máximo sueldo pagado cada mes y a quién pertenece
*		D. (x) Porcentaje que representa cada sueldo anual sobre el total
*		E. () Nombre del empleado que cobró más en el primer semestre
*		F. (o) Cantidad de meses en que el total de sueldos superó los $100,000
*		G. () Imprimir ordenado en forma descendente por sueldo anual de cada empleado:
*			G.1. () Legajo
*			G.2. () Nombre
*			G.3. () Sueldo anual de cada empleado
*	Alumno: Nicolás Esteban Olmedo
*
*/

/* Directivas del preprocesador */
#include <stdio.h>
#define Y_CANTIDAD_EMPLEADOS 3
#define X_MES 4 //acordate que acá va 13 

/* Macros del preprocesador */
/* Declaraciones globales */
	/* Declaración de variables globales */
	/* Declaración de prototipos de funciones */
void clrscr(void);
void line(void);
void pausa(void);

void input_data(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS], char nombres_empleados[Y_CANTIDAD_EMPLEADOS][20]); 
void calculo_sueldo_total(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]); 
void calculo_sueldo_mes(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]);
void calculo_acumulador(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]);
void calculo_porcentaje(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]);
void calculo_contador_meses(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS], int *contador_meses);
void sueldo_maximo(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]);
void imprimir_matriz(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS], char nombres_empleados[Y_CANTIDAD_EMPLEADOS][20]);

void pantalla_00();
void pantalla_01();

/* Función principal */
int main() {
	clrscr();
	/* Declaraciones locales */
	int contador_meses=0, opcion=0, i=0, j=0;

	/* MesxEmpleado[0][Y_CANTIDAD_EMPLEADOS] = Sueldo total de cada empleado por mes
	 * MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS] = Total de sueldos pagados por mes
	 * MesxEmpleado[X_MES][empleado] = Porcentaje del total que representa cada sueldo anual sobre el total
	 * */
	float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS] =  {0};
	char nombres_empleados[Y_CANTIDAD_EMPLEADOS][20];

	/* Input de data */

	do{
		clrscr();
		pantalla_00();
		printf("Ingresar una opción: ");
		scanf("%d", &opcion);

		switch(opcion){
			case 1:
				input_data(MesxEmpleado, nombres_empleados);
				calculo_sueldo_total(MesxEmpleado);
				calculo_sueldo_mes(MesxEmpleado);
				sueldo_maximo(MesxEmpleado);
				calculo_acumulador(MesxEmpleado);
				calculo_porcentaje(MesxEmpleado);
				calculo_contador_meses(MesxEmpleado, &contador_meses);
				break;
			case 2:
				do{
					clrscr();
					pantalla_01();
					printf("Ingresar una opción: ");
					scanf("%d", &opcion);

					switch(opcion){
						case 1:
							line();
							printf("Sueldo anual de cada empleado:\n");
							for(i=1; i<Y_CANTIDAD_EMPLEADOS; i++) {
								printf("%s: %.2f\n", nombres_empleados[i], MesxEmpleado[0][i]);
							}
							line();
							pausa();
							break;
						case 2:
							line();
							printf("Sueldo total pagado por mes: \n");
							for(i=1; i<X_MES; i++) {
								printf("Mes %d: %.2f\n",i , MesxEmpleado[i][0]);
							}
							line();
							pausa();
							break;
						case 3:
							break;
						case 4:
							line();
							printf("Porcentaje del sueldo anual sobre el total:\n");
							for(i=1; i<Y_CANTIDAD_EMPLEADOS; i++) {
								printf("%s: %.2f\n",nombres_empleados[i], MesxEmpleado[X_MES][i]);
							}
							line();
							pausa();
							break;
							break;
						case 5:
							break;
						case 6:
							line();
							printf("Cantidad de mese en el que el total de sueldos superó los $100.00: ");
							printf("%d\n", contador_meses);
							line();
							pausa();
							break;
						case 7:
							break;
						case 8:
							imprimir_matriz(MesxEmpleado, nombres_empleados);
							pausa();
							break;
						case 9:
							pausa();
							break;

						default:
							printf("Opción no válida.");
					}
				} while(opcion != 9);
				break;
			case 0:
				break;

			default:
				printf("Opción no válida.");
			
		}
	} while(opcion != 0);
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

	/* Definición de input_data() */
void input_data(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS], char nombres_empleados[Y_CANTIDAD_EMPLEADOS][20]) {
	int empleado=0, mes=0, cantidad_horas=0;
	float valor_hora=0, sueldo=0;
	for(mes=1; mes<X_MES; mes++) {
		for(empleado=1; empleado<Y_CANTIDAD_EMPLEADOS; empleado++) {
			clrscr();
			if(mes==1) {
				printf("Ingresar nombre del empleado: ");
				fflush(stdin);
				scanf("%s", nombres_empleados[empleado]);
			}
			clrscr();
			line();
			printf("%s - Legajo: %d - Mes: %d\n", nombres_empleados[empleado], empleado, mes);
			line();
			printf("\nIngesar cantidad de horas trabajadas: ");
			scanf("%d", &cantidad_horas);
			printf("Ingresar valor de la hora: ");
			scanf("%f", &valor_hora);
			sueldo = cantidad_horas * valor_hora;
			MesxEmpleado[mes][empleado] = sueldo;
		}
	}
}
	
	/* Definición de caulculo_sueldo_total() */
void calculo_sueldo_total(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]) {
	int mes=0, empleado=0;

	for(mes=1; mes<X_MES; mes++) {
		for(empleado=1; empleado<Y_CANTIDAD_EMPLEADOS; empleado++) {
			MesxEmpleado[0][empleado] += MesxEmpleado[mes][empleado];
		}
	}
}

	/* Definición de calculo_sueldo_mes() */
void calculo_sueldo_mes(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]) {
	int mes=0, empleado=0;

	for(empleado=1; empleado<Y_CANTIDAD_EMPLEADOS; empleado++) {
		for(mes=1; mes<X_MES; mes++) {
			MesxEmpleado[mes][0] += MesxEmpleado[mes][empleado];
		}
	}
}

	/* Definición de imprimir_matriz() */
void imprimir_matriz(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS], char nombres_empleados[Y_CANTIDAD_EMPLEADOS][20]) {
	int mes=0, empleado=0;

	for(empleado=0; empleado<=Y_CANTIDAD_EMPLEADOS; empleado++) {
		for(mes=0; mes<=X_MES; mes++) {
			printf("\t[%d][%d] = %.2f", mes, empleado, MesxEmpleado[mes][empleado]);
		}
		printf("\n");
	}
}

	/* Definición de sueldo_maximo() */
void sueldo_maximo(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]) {
	int mes=0, empleado=0, empleado_maximo=0;
	float sueldo_maximo=0;

	for(mes=1; mes<X_MES; mes++) {
			for(empleado=1; empleado<Y_CANTIDAD_EMPLEADOS; empleado++) {
				if((MesxEmpleado[mes][empleado] > sueldo_maximo) ||  empleado == 0){
					sueldo_maximo = MesxEmpleado[mes][empleado];
					empleado_maximo = empleado;
				}
			}	
			empleado = 0;
	}
}

	/* Definición de calculo_acumulador() */
void calculo_acumulador(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]) {
	int empleado = 0;
	for(empleado = 1; empleado<Y_CANTIDAD_EMPLEADOS; empleado++) {
		MesxEmpleado[0][0] += MesxEmpleado[0][empleado];
	}
}
		
	/* Definición de calculo_porcentaje */
void calculo_porcentaje(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS]) {
	int  empleado = 0;
	float res=0;
	for(empleado=1; empleado<Y_CANTIDAD_EMPLEADOS; empleado++){
		res = MesxEmpleado[0][empleado] * 100 / MesxEmpleado[0][0];
		MesxEmpleado[X_MES][empleado] = res;
	}
}

	/* Definición de contador_meses() */
void calculo_contador_meses(float MesxEmpleado[X_MES][Y_CANTIDAD_EMPLEADOS], int *contador_meses) {
	int mes=0;
 	for(mes=1; mes<X_MES; mes++) {
		if(MesxEmpleado[mes][0] > 100000.00) {
			*contador_meses = *contador_meses + 1;
		}
			printf("contador_meses *:%d\n", *contador_meses);
	}
}

/* Pantallas */
	/* Definición de pantalla_00() */
void pantalla_00() {
	line();
	printf("\t1. Ingresar\n\t2. Mostrar\n\n\t0. Salir\n");
	line();
}

	/* Definición de pantalla_01() */
void pantalla_01() {
	line();
	printf("\t1. Sueldo anual de cada empleado\n\t2. Total de sueldos pagados por mes\n\t3. Máximo sueldo pagado cada mes\n\t4. Porcentaje que representa cada sueldo anual sobre el total\n\t5. Nombre del empleaod que cobró más en el primer semestre\n\t6. Cantidad de meses en que el total de sueldos superó los $100.000\n\t7. wip\n\t8. Matriz\n\n\t9. Atrás\n");
	line();
}
