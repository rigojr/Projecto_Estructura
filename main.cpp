#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "menu.h"
#include "validaciones.h"
#include "estructura.h"
#include "moduloUno.h"
#include "moduloDos.h"

void main() {
	lista *vector = NULL;
	int op = 0, tipoMapeo, memoPpal, memoCache, tamaBloque, asoBloque, cantidad_palabra, cantidad_lineas, cantidad_etiqueta, cantidad_bloques, cantidad_lineas_conjunto , dirMemo;
	int validacion;
	int binario;
	int secuencia;
	int direccion[20];
	int tamaBloquesCache;
	int tamaConjuntosCache;
	int politica;
	while (op != 99) {
		asoBloque = 1;
		system("cls");
		eliminarTodo(&vector);
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
				memoPpal = asignarEntrada(memoPpal, 1);
				system("cls");
				printTamaMemoCache();//menu de la memoria cache
				scanf_s("%d", &memoCache);
				memoCache = asignarEntrada(memoCache, 2);
				system("cls");
				printTamaBloque();//menu del tamano de los bloques
				scanf_s("%d", &tamaBloque);
				tamaBloque = asignarEntrada(tamaBloque, 3);
				system("cls");
				if (tipoMapeo == 2) {
					system("cls");
					printTamaBloque_asociativo();//menu de cantidad de bloque
					scanf_s("%d", &asoBloque);
					asoBloque = asignarEntrada(asoBloque, 4);
				}
				if (memoPpal == -1 || memoCache == -1 || tamaBloque == -1 || asoBloque == -1)
					tipoMapeo = 99;
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
						break;
					case 99:
						system("cls");
						printf("\n\t\tERROR EN LA ENTRADA DE ALGUNA OPCION\n\n\n");
						break;
				}
				system("pause");
				break;
			case 2:
				system("cls");
				printM2();//header modulo 2
				printTipoMapeo();//menu de tipo de mapeo
				scanf_s("%d", &tipoMapeo);
				system("cls");
				printTamaMemoPpal();//menu de memoria principal
				scanf_s("%d", &memoPpal);
				memoPpal = asignarEntrada(memoPpal, 1);
				system("cls");
				printTamaMemoCache();//menu de la memoria cache
				scanf_s("%d", &memoCache);
				memoCache = asignarEntrada(memoCache, 2);
				system("cls");
				printTamaBloque();//menu del tamano de los bloques
				scanf_s("%d", &tamaBloque);
				tamaBloque = asignarEntrada(tamaBloque, 3);
				if (tipoMapeo == 2) {
					system("cls");
					printTamaBloque_asociativo();//menu de cantidad de bloque
					scanf_s("%d", &asoBloque);
					asoBloque = asignarEntrada(asoBloque, 4);
				}
				else {
					asoBloque = 1;
				}
				system("cls");

				if (memoPpal == -1 || memoCache == -1 || tamaBloque == -1 || asoBloque == -1){
					printf("\n\t\tERROR EN LA ENTRADA DE ALGUNA OPCION\n\n\n");
				}
				else{
					printDireccion();//menu de direccion
					scanf_s("%d", &dirMemo);
					binario = binToDec(dirMemo);

					cantidad_palabra = potenciasDeDos(tamaBloque);
					cantidad_lineas = potenciasDeDos(memoCache) - cantidad_palabra;
					cantidad_lineas_conjunto = cantidad_lineas - potenciasDeDos(asoBloque);
					cantidad_bloques = potenciasDeDos(memoPpal) - cantidad_palabra;
					cantidad_etiqueta = cantidad_bloques - cantidad_lineas_conjunto;
					system("cls");
					crearVector(cantidad_etiqueta, cantidad_lineas_conjunto, cantidad_palabra, binario, &vector);

					printf("\n\t[ Etiqueta ]");
					if (tipoMapeo == 2)
						printf("\t[ Linea ]\t");
					else
						printf("\t[ Conjunto ]\t");
					printf("[ Palabra ]\n\n");

					imprimirVector(vector);
					printf("\n");
					printf("\n\tEl Bloque se Coloca en ");
					if (asoBloque >= 2)
						printf("el Conjunto %d de la Memoria Cache\n", interpretarDireccionCache(vector, cantidad_lineas_conjunto));
					else
						printf("la Linea %d de la Memoria Cache\n", interpretarDireccionCache(vector, cantidad_lineas_conjunto));
				}
				system("pause");
				break;
			case 3:
				system("cls");
				printM3();//menu modulo 3
				system("cls");
				printTamaBloquesCache();//menu tamano bloques de cache
				scanf_s("%d", &tamaBloquesCache);
				tamaBloquesCache = validarTamaBloquesCache(tamaBloquesCache);
				system("cls");
				printTamaConjutos();//menu tamano de los conjuntos
				scanf_s("%d", &tamaConjuntosCache);
				tamaConjuntosCache = validarTamaConjuntos(tamaConjuntosCache);
				system("cls");
				printPolitica();//menu politica de reemplazo
				scanf_s("%d", &politica);
				politica = validarPolitica(politica);
				system("cls");
				printf("Ingrese cuanta secuencia de Direcciones max(20):");
				scanf_s("%d", &secuencia);
				printf("%d,%d,%d,%d", tamaBloquesCache, tamaConjuntosCache, politica, secuencia);
				system("pause");
				if (secuencia <= 0 || secuencia > 20)
					secuencia = -1;
				else{
					for (int i = 0; i < secuencia; i++) {
						system("cls");
						printf("\nIngrese la direccion para la posicion(%d):\n",i);
						scanf_s("%d", &direccion[i]);
					}
				}
				if (secuencia == -1 || tamaBloquesCache == -1 || tamaConjuntosCache == -1 || politica == -1) {
					system("cls");
					printf("\n\t\tERROR EN LA ENTRADA DE ALGUN DATO\n\n");
				}
				else {
					/*aca ejecuto el resto*/
				}
				system("pause");
				break;
		}
	}
}