#include "stdio.h"
#include "stdlib.h"
#include "menu.h"
#include "estructura.h"
#include "moduloUno.h"

void main(){
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
			scanf_s("%d",&tipoMapeo);
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
				printf("\n[%d][%d][%d]\n", cantidad_etiqueta, cantidad_lineas, cantidad_palabra);

				break;
			}
			system("pause");
			break;
		}
	}
}