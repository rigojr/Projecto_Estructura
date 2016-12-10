#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "estructura.h"
#include "moduloUno.h"

void main() {
	lista *vector = NULL;
	int op = 0;
	int tipoMapeo;
	int memoPpal;
	int memoCache;
	int tamaBloque;
	int asoBloque;
	int cantidad_palabra;
	int cantidad_lineas;
	int cantidad_etiqueta;
	int cantidad_bloques;
	int cantidad_lineas_conjunto;
	while (op != 99) {
		system("cls");
		printMain();//menu principal
		scanf_s("%d", &op);
		switch (op)
		{
		case 1:
			system("cls");
			printM1();//header de modulo 1
			printTipoMapeo();//menu de tipo de mapeo
			scanf_s("%d", &tipoMapeo);
			system("cls");
			printTamaMemoPpal();//menu de memoria principal
			scanf_s("%d", &memoPpal);
			system("cls");
			printTamaMemoCache();//menu de la memoria cache
			scanf_s("%d", &memoCache);
			system("cls");
			printTamaBloque();//menu del tamano de los bloques
			scanf_s("%d", &tamaBloque);
			system("cls");
			if (tipoMapeo == 2) {
				system("cls");
				printTamaBloque_asociativo();//menu de cantidad de bloque
				scanf_s("%d", &asoBloque);
			}
			switch (tipoMapeo)
			{
			case 1:
				system("cls");
				printf("\nMAPEO DIRECTO\n");
				cantidad_palabra = potenciasDeDos(tamaBloque);
				cantidad_lineas = potenciasDeDos(memoCache) - cantidad_palabra;
				cantidad_bloques = potenciasDeDos(memoPpal) - cantidad_palabra;
				cantidad_etiqueta = cantidad_bloques - cantidad_lineas;
				printf("\n\t[ Etiqueta ]\t[ Linea ]\t[ Palabra ]\n\n");
				crearVector(cantidad_etiqueta, cantidad_lineas, cantidad_palabra, -1, &vector);
				imprimirVector(vector);
				printf("\n");
				break;
			case 2:
				system("cls");
				printf("MAPEO ASOCIATIVO POR CONJUNTO");
				cantidad_palabra = potenciasDeDos(tamaBloque);
				cantidad_lineas = potenciasDeDos(memoCache) - cantidad_palabra;
				cantidad_lineas_conjunto = cantidad_lineas - potenciasDeDos(asoBloque);
				cantidad_bloques = potenciasDeDos(memoPpal) - cantidad_palabra;
				cantidad_etiqueta = cantidad_bloques - cantidad_lineas_conjunto;
				printf("\n\t[ Etiqueta ]\t[ Conjunto ]\t[ Palabra ]\n\n");
				crearVector(cantidad_etiqueta, cantidad_lineas_conjunto, cantidad_palabra, -1, &vector);
				imprimirVector(vector);
				printf("\n");
			}
			system("pause");
			break;
		}
	}
}