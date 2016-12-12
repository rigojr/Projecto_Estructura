#pragma once

int asignarEntrada(int numero, int bandera) {
	/*
	Bandera:
	1 = tamaño de la memoria principal
		32KB ,64KB, 256KB, 512KB, 1MB, 2MB, 4MB, 8MB, 16MB, 32MB
	2 = tamaño de la memoria caché
		64B, 128B, 256B, 512B
	3 = tamaño del bloque
		2B, 4B, 8B, 16B, 32B
	4 = tamaño del conjunto de bloques
		2,4,8
	*/

	switch (bandera)
	{
	case 1://Memoria Principal
		switch (numero)
		{
		case 1:
			numero = 262144;
			return numero;
			break;
		case 2:
			numero = 524288;
			return numero;
			break;
		case 3:
			numero = 1048576;
			return numero;
			break;
		case 4:
			numero = 2097152;
			return numero;
			break;
		case 5:
			numero = 4194304;
			return numero;
			break;
		case 6:
			numero = 8388608;
			return numero;
			break;
		case 7:
			numero = 16777216;
			return numero;
			break;
		case 8:
			numero = 33554432;
			return numero;
			break;
		}
		break;
	case 2://memoria cache
		switch (numero)
		{
		case 1:
			numero = 64;
			return numero;
			break;
		case 2:
			numero = 128;
			return numero;
			break;
		case 3:
			numero = 256;
			return numero;
			break;
		case 4:
			numero = 512;
			return numero;
			break;
		case 5:
			numero = 1024;
			return numero;
			break;
		}
		break;
	case 3://Bloque
		switch (numero)
		{
		case 1:
			numero = 2;
			return numero;
			break;
		case 2:
			numero = 4;
			return numero;
			break;
		case 3:
			numero = 8;
			return numero;
			break;
		case 4:
			numero = 16;
			return numero;
			break;
		case 5:
			numero = 32;
			return numero;
			break;
		}
		break;
	case 4://Conjunto de Bloques
		switch (numero)
		{
		case 1:
			numero = 2;
			return numero;
			break;
		case 2:
			numero = 4;
			return numero;
			break;
		case 3:
			numero = 8;
			return numero;
		}
		break;
	}
	return -1;
}

int validarTamaBloquesCache(int numero) {
	if (numero == 4 || numero == 8 || numero == 16 || numero == 32 || numero == 64 || numero == 128)
		return numero;
	else
		return -1;
}

int validarTamaConjuntos(int numero) {
	if (numero == 2 || numero == 4 || numero == 8 || numero == 16)
		return numero;
	else
		return -1;
}

int validarPolitica(int numero) {
	if (numero == 1 || numero == 2 || numero == 3)
		return numero;
	else
		return -1;
}