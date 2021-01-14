#include <stdio.h>
#define ARRAY_SIZE 6

int main() {
	system("clear");

	int i=0, j=0, aux=0;
	int array[ARRAY_SIZE] = {9, 10, 4, 1, 2};
	int orden[ARRAY_SIZE] = {0};


	/* Se le dan posiciones al vector de orden */
	for(i=0; i<ARRAY_SIZE; i++) {
		orden[i] = i;
	}

	/* Ordenamiento */
	for(i=0; i<ARRAY_SIZE-1; i++) {
		for(j=i+1; j<ARRAY_SIZE; j++) {
			if(array[j] > array[i]) {
				aux = orden[j];
				orden[j] = orden[i];
				orden[i] = aux;
			}
		}
	}

	/* Output de data */
	for(i=0; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\t", i, array[i]);
	}
	printf("%d\n");

	for(i=0; i<ARRAY_SIZE; i++) {
		printf("orden[%d] = %d\t", i, orden[i]);
	}
	printf("%d\n");

	for(i=0; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\t", i, array[orden[i]]);
	}
	printf("%d\n");

	return 0;
}
