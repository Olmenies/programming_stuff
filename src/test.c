/*#include <stdio.h>
#include <string.h>
int main()
{
	int i=0;
	char array_nombre[3][10];
	for(i=0;i<=2;i++) {
		printf("Ingresar nombre: ");
		fflush(stdin);
		scanf("%s", array_nombre[i][10]);
		printf("array_nombre[i] = %s", array_nombre[i][10]);
	}
	return 0;
}*/

#include <stdio.h>

int main(void) {
//    char array[256];
//    scanf("%s", array);
//    printf("%s", array);

	char stringArray[20][5];
	int i;
	for (i=0;i<20;i++)
	{
	    scanf("%s", stringArray[i]);
	}
	return 0;
} 

