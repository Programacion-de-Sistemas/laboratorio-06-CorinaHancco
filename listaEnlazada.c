#include<stdio.h>
#include<stdlib.h>

//definimos nuestra node
typedef struct node
{
    int number;
    struct node *next;
}
node;

node *addNode(node *lista, int num){
	node *nuevoNodo;
	node *temporal;
	nuevoNodo = malloc(sizeof(node));
	nuevoNodo->number = num;
        nuevoNodo->next = NULL; 	
	if(lista == NULL){
	  lista = nuevoNodo;
	}
	else{
	  temporal = lista;

	  while(temporal->next != NULL){
	     temporal = temporal->next;
	  }
	  temporal->next = nuevoNodo;
	}
	return lista;
}

int main(){
    node *list=NULL;

    //agregamos un elemento a la lista
   list = addNode(list,4);
   list = addNode(list,5);
   list = addNode(list,23);
   
   for(int i = 1; i <= 10; i++){
      list = addNode(list,i);
   }

    // imprimir los elementos de la lista
    for (node *tmp = list;tmp!=NULL;tmp=tmp->next)
    {
        printf("%i\n",tmp->number);


    }

    // función (free) BUENA PR´ACTICA EN PROGRAMACI´ON EN "C"
    while(list!=NULL){
        node *tmp=list->next;
        free(list);
        list=tmp;
    }

    return 0;

}

