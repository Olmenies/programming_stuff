#include <stdio.h>
#define ARRAY_SIZE 6

int main() {
	system("clear");

	int i=0, j=0, aux=0;
	int array[ARRAY_SIZE] = {9, 10, 4, 1, 2};

	for(i=0; i<ARRAY_SIZE-1; i++) {
		for(j=i+1; j<ARRAY_SIZE; j++) {
			if(array[j] > array[i]) {
				aux = array[j];
				array[j] = array[i];
				array[i] = aux;
			}
		}
	}

	for(i=0; i<ARRAY_SIZE; i++) {
		printf("array[%d] = %d\t", i, array[i]);
	}
	printf("%d\n");
	return 0;
}
