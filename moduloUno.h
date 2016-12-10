#pragma once

int potenciasDeDos(int num) { //tengo la potencia de algun valor base 2
	int cont = 0;
	while (num > 1)
	{
		num = num / 2;
		cont++;
	}
	return cont;
}

void crearVector(int e, int l, int p, int num, lista **vector) {
	int bandera;
	if (num == -1) {
		for (int i = 0; i < (e+l+p); i++)
		{
			if (p > i) {
				bandera = 1;
			}
			else {
				if (l + p > i) {
					bandera = 2;
				}
				else
					bandera = 3;
			}
			if (!vector)
				insertarCola(vector, i, bandera);
			else
				insertarCabeza(vector, i, bandera);
		}
	}
	else {
		//falta hacer la funcion dijito por digito
	}
}

void imprimirVector(lista *vector) {
	if (vector) {
		int bandera = 3;
		while (vector && bandera>0)
		{
			printf(" [ ");
			while (vector && vector->tipo == bandera)
			{
				printf("|%d|", vector->valor);
				vector = vector->sig;
			}
			printf(" ] ");
			bandera--;
		}
	}
}