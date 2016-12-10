#pragma once
int binToDec(int dirMemo) {
	int binario = 0, binarioAux;
	int multiplicador = 1;
	while (dirMemo >= 2) {
		binarioAux = dirMemo % 2;
		dirMemo = dirMemo / 2;
		binario = binario + binarioAux*multiplicador;
		multiplicador = multiplicador * 10;
	}
	binario = binario + dirMemo*multiplicador;
	return binario;
}

int decToBin(int binario) {
	int potencia = 0;
	int decimal = 0;
	int auxBinario = 0;
	while (binario != 0) {
		auxBinario = binario % 10;
		binario = binario / 10;
		if (auxBinario != 0)
			decimal = decimal + pow(2, potencia);
		potencia++;
	}
	return decimal;
}

int interpretarDireccionCache(lista *vector, int cantidad_linea) {
	lista *aux = vector;
	int decimal = 0;
	int binario = 0;
	while (aux) {
		if (aux->tipo == 2) {
			binario = binario + aux->valor* pow(10,cantidad_linea-1);
			cantidad_linea--;
		}
		aux = aux->sig;
	}
	decimal = decToBin(binario);
	return decimal;
}