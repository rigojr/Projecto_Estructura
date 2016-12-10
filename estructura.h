#pragma once
struct lista{
	int valor;
	int tipo;
	lista *sig;
};

void insertarCabeza(lista **p, int valor, int tipo) {
	lista *aux = new lista;
	aux->valor = valor;
	aux->sig = (*p);
	aux->tipo = tipo;
	*p = aux;
}

void insertarCola(struct lista **p, int valor, int tipo) {
	lista *aux = new lista;
	lista *temp = (*p);
	while (temp->sig) {
		temp = temp->sig;
	}
	aux->valor = valor;
	aux->tipo = tipo;
	aux->sig = NULL;
	temp->sig = aux;
}

void eliminarTodo(struct lista **p) {
	if((*p)!=NULL){
		struct lista *aux = (*p);
		(*p) = (*p)->sig;
		delete aux;
		eliminarTodo(p);
	}
}
