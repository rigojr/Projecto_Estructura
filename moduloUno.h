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

/*void printMapeoDirecto(int e, int l, int p, int num) {
	if (num == -1) {
		printf("[Etiqueta]|\t[Linea]|\t[Palabra]\n");
		int total = e + l + p;
		for (int i = e;) {

		}
	}
	else {

	}
}*/