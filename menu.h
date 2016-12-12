#pragma once
void printMain() {
	printf("\n--- ESTRUCTURA DEL COMPUTADOR ---");
	printf("\n--- SIMULACION DE LA MEMORIA CACHE ---");
	printf("\n--- MENU PRINCIPAL ---\n");
	printf("\n1. Funcion de Mapeo, MODULO 1:\n");
	printf("\n2. Ubicacion de Bloques, MODULO 2:\n");
	printf("\n3. Simulador de Reemplazo de bloques, MODULO 3:\n");
	printf("\n99.SALIR\n");
}

void printM1() {
	printf("\n--- FUNCION DE MAPEO ---\n");
	printf("\n--- MODULO 1 ---\n");
}

void printM2() {
	printf("\n--- UBICACION DE BLOQUES ---\n");
	printf("\n--- MODULO 2 ---\n");
}

void printM3() {
	printf("\n--- EMULADOR DE REEMPLAZO DE BLOQUES ---\n");
	printf("\n--- MODULO 2 ---\n");
}

void printTipoMapeo() {
	printf("\n - Funcion de Mapeo\n");
	printf("\n1. Mapeo Directo\n");
	printf("\n2. Mapeo Asociativo por Conjunto\n");
}

void printTamaMemoPpal() {
	printf("\n - Tamano en Byte de la Memoria Principal: \n");
	printf("\n 1- 256KB = 262144 \n");
	printf("\n 2- 512KB = 524288 \n");
	printf("\n 3- 1MB = 1048576 \n");
	printf("\n 4- 2MB = 2097152 \n");
	printf("\n 5- 4MB = 4194304 \n");
	printf("\n 6- 8MB = 8388608\n");
	printf("\n 7- 16MB = 16777216\n");
	printf("\n 8- 32MB = 33554432\n");
	printf("Tu Respuesta (ejemplo = 5) = ");
}

void printTamaMemoCache() {
	printf("\n - Tamano en Byte de la Memoria Cache: \n");
	printf("\n 1- 64B = 64 \n");
	printf("\n 2- 128B = 128 \n");
	printf("\n 3- 256B = 256 \n");
	printf("\n 4- 512B = 512 \n");
	printf("\n 5- 1KB = 1024 \n");
	printf("Tu Respuesta (ejemplo = 5) = ");
}

void printTamaBloque(){
	printf("\n - Tamano en Byte de los Bloques: \n");
	printf("\n 1- 2B = 2 \n");
	printf("\n 2- 4B = 4 \n");
	printf("\n 3- 8B = 8 \n");
	printf("\n 4- 16B = 16 \n");
	printf("\n 5- 32B = 32 \n");
	printf("Tu Respuesta (ejemplo = 5) = ");
}

void printTamaBloque_asociativo() {
	printf("\n - Tamano del Conjunto en Bloques: \n");
	printf("\n 1- 2B = 2 \n");
	printf("\n 2- 4B = 4 \n");
	printf("\n 3- 8B = 8 \n");
	printf("Tu Respuesta (ejemplo = 5) = ");
}

void printDireccion() {
	printf("\n - Direccion de Memoria en decimal: \n");
	printf("Tu Respuesta = ");
}

void printTamaBloquesCache() {
	printf("\n - Tamano en bloques de la memoria Cache\n\nOppciones :\n\n");
	printf("\n -4  \n");
	printf("\n -8  \n");
	printf("\n -16  \n");
	printf("\n -32  \n");
	printf("\n -64  \n");
	printf("\n -128  \n\n");
	printf("Tu Respuesta = ");
}

void printTamaConjutos() {
	printf("\n - Cantidad de Conjuntos\n\nOppciones :\n\n");
	printf("\n -2 \n");
	printf("\n -4 \n");
	printf("\n -8 \n");
	printf("\n -16 \n\n");
	printf("Tu Respuesta = ");
}

void printPolitica() {
	printf("\n - Politica de Reemplazo\n\nOppciones :\n\n");
	printf("\n 1 - LRU \n");
	printf("\n 2 - FIFO \n");
	printf("\n 3 - RAND \n");
	printf("Tu Respuesta = ");
}