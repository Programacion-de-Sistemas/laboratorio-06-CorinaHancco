#include <stdio.h>
#include <stdlib.h>

typedef struct node
{ 
	int num;
	node *next;
}
node;

int main(){
	node *list=NULL;
	node *n = malloc(sizeof(node));
	
	if(n==NULL){
	  return 1;
	}
}
