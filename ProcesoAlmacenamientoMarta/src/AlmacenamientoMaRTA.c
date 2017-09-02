#include <stdio.h>
#include <stdlib.h>
#include <nodo.h>
#include <commons/temporal.h>
#include <commons/log.h>

ObtenerLista (t_list* ListaDeNodos);
OrdenarEInsertar (t_list* PunteroALista, t_list* ListaNueva);
OrdenarPorEstado (t_list* PunteroAListaDeBloque);
InsertarEnLista (Vector Vec, t_list* PuntorDeListaANodo, t_list* ListaNueva, int Contador);
OrdenarListaPorEspacio (t_list* ListaNueva);
BloquesAUsar ( flie* Archivo);
CrearMatriz (int Cant, Copias, Matriz);
CargarNodoUno (t_list* LDN,int Cant, int Matriz);
CargarBloque (t_list* Lista,int Matriz);
CargarDatos ();
CargarMatriz (int Copia, i, t_list* PunteroALista);
CargarNodo (int Copia, int Var, t_list LDN, int Matriz);

struct Vector{
	int IdBloque;
};

int main(void) {

	int Cant, Copias, NodosCargados, Resto, i, j, Copia;
	int Matriz;
	
	LDN = ObtenerLista(ListaDeNodos);

	Cant = BloquesAUsar(&Archivo);

	Matriz = CrearMatriz(&Cant, &Copias, &Matriz);

	NodosCargados = CargarNodoUno(LDN, Cant, Matriz);

	Resto = Cant - NodosCargados;

	for ( i = 0 ; (i = (Resto - 1)) ; i++){
		Copia = 0;
		CargarNodo(LDN, i, Copia ,Matriz);}

	for ( Copia = 1 ; (Copia = (Copias - 1)) ; Copia++){
		for ( j = 0 ; (j = (Cant - 1)) ; j++){
			CargarNodo(LDN, i, Copia ,Matriz);}
	}

	return EXIT_SUCCESS;
}





t_list ObtenerLista(t_list ListaDeNodos){
	/* t*list Ptr*/;
	Ptr = ListaDeNodos;

	while (Ptr =! NULL){
		OrdenarEInsertar(Ptr, ListaNueva);
		Ptr = Ptr -> sgte;
	}

	OrdenarListaPorEspacio( ListaNueva);
	return ListaNueva;
}

t_list OrdenarEInsertar(t_list* PunteroALista,t_list* ListaNueva){
	int Contador = 0;
	int i;

	ListaNueva = NULL;
	PtrB = Ptr.info.Bloque;
	PtrN = Ptr.info.Nodo;

	OrdenarPorEstado(PrtB);

	while ((PtrB =! NULL) && ((PtrB.info.Estado) =! False))){
		Contador ++;
		PtrB = PtrB -> sgte;
	}

	for ( i = 0 ; ( i = (Contador - 1)) ; i++){
		Vec[i].IdBloque = Ptrb.info.Bloque;
	}

	InsertarEnLista(Vec, PtrN, ListaNueva, Contador);

	return ListaNueva;
}

t_list OrdenarPorEstado(t_list PunteroAListaDeBloque){

}

t_list InsertarEnLista (Vec, t_list PuntorDeListaANodo, t_list ListaNueva, Contador){

}

t_list OrdenarListaPorEspacio(t_list ListaNueva){

}

int BloquesAUsar(file* Archivo){
	int Tamanio, Cant;
	const Partes = 20;

	Tamanio = sizeof(Archivo);
	Cant = Tamanio / Partes;

	return Cant;
}

int CrearMatriz (int Cant, Copias, Matriz){
	int Matriz [Copias][Cant];
	int i,j;
	
	for ( i=0 ; i< Copias ; i++){ 
	
		for ( j=0 ; j< Cant ; j++){ 
			Matriz[i][j] = 0; 
		
		} 
	}
	return Matriz;
}

int CargarNodoUno(t_list LDN,int Cant,int Matriz){
	int PrimerosBloques, Copia, Faltante, EnNodo1;

	PrimerosBloques = (Cant * 3) div 4;
	Copia = 0;
	Ptr = LDN;

	if (PrimerosBloques <= Ptr.info.CantB){
		for ( int i = 0 ; ( i = (Cant - 1)) ; i++){
			CargarDatos();
			CargarMatriz(Ptr, Copia, Matriz, i);
		}
	}else{
		Faltante = PrimerosBloques - Ptr.info.CantB;
		EnNodo1 = Ptr.info.CantB;

		for ( int i = 0 ; ( i = (EnNodo1 - 1)) ; i++){
					CargarDatos();
					CargarMatriz(Ptr, Copia, Matriz, i);
				}

		Ptr = Ptr -> sgte;

		for ( int j = 0 ; ( j = (Faltante - 1)) ; j++){
					CargarDatos();
					CargarMatriz(Ptr, Copia, Matriz, j);
				}
		}

	return PrimerosBloques;
}

int CargarMatriz (int Copia, i, t_list* PunteroALista){
	Matriz [Copia][i] = Ptr.info.IdNodo;
	return Matriz;
}

int CargarNodo (int Copia, int Var, t_list LDN,int Matriz){

	NLDN = InvertirOrden(LDN);				//Para obtener la lista de nodos más cargados

	CargarBloque(NLDN, Matriz);

	CargarMatriz(Copia, Var, Ptr, Matriz);

	return 0;
}

int CargarBloque (t_list Lista, int Matriz){
	int Contador;
	Bool Termino;
	Ptr = Lista;

	do while Termino = False {
		if Ptr.info.IdNodo =! Matriz [Copia] [i-1]{
			while ((Ptr.info.IdNodo =! Matriz [J][i]) && Ptr.info.IdNodo =! Matriz [Copia] [i-1]){
				J++}
			if (Ptr.info.IdNodo =! Matriz [Copia] [i-1]){
				CargarDatos();
				Termino = True;

			}else{
				Ptr = Ptr -> sgte;
				Termino = False;
			}

		}else{
			Pter = Ptr -> sgte;
			Termino = False;
		}
	}
	return 0;
}
