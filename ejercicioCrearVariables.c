#include <stdio.h>
#include <stdbool.h>

#define MSJ_NOMBRE_ALUMNO "Sebastian Romero"

int main()
{
	int cantidadContactos = 10;
	float saldoFactura = 1050.30;
	char inicialApellido = 'R';
	bool vivir = true;

	printf("Imprimi una 'variable' texto: %s\n", MSJ_NOMBRE_ALUMNO);
	printf("Imprimi una varialbe entera: %i \n", cantidadContactos);
	printf("Imprimi una variable real: %f \n", saldoFactura);
	printf("Imprimi una variable caracter: %c \n", inicialApellido);
	printf("Imprimi una variable logica: %i", vivir);

	return 0;
}