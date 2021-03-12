
typedef struct serp_esc{ //snodo es el nombre de la estructura
    int inicio;
    int final;
    struct snodo *sig; //El puntero siguiente para recorrer la lista enlazada
}tserp_esc;



typedef tserp_esc *tpuntero;

void insertarEnLista (tpuntero *cabeza, int e);

int buscarElemento (tpuntero *cabeza, int i );


void insertarEnLista (tpuntero *cabeza, int e, int f){
    tpuntero nuevo; //Creamos un nuevo nodo
    nuevo = malloc(sizeof(tserp_esc)); //Utilizamos malloc para reservar memoria para ese nodo
    nuevo->inicio = e; //Le asignamos el inicio ingresado a el nodo
    nuevo->final = f;  //Le asignamos el final ingresado a el nodo
    nuevo->sig = *cabeza; //Le asignamos al siguiente el valor de cabeza
    *cabeza = nuevo; //Cabeza pasa a ser el ultimo nodo agregado
}

int buscarElemento (tpuntero *cabeza, int i ){
    tpuntero actual;                 //Creamos un nuevo puntero
    actual = *cabeza;                //Apuntamos al inicio de la lista

    while(actual =! NULL){           //Nos movemos por la lista
        if(actual->inicio == i){     //Buscamos si el inicio existe
            return actual->final;    //Si existe regresamos el final
        }
        *actual = (*actual)->sig;
    }
    return -1;                       //Si no existe regresamos -1
}




