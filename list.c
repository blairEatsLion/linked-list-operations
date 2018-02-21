#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct NODE *head; //global
void newList();
int addNode(int value);
void prettyPrint();


void newList(){

	head = NULL;
}

int addNode(int value){

	struct NODE *x = (struct NODE *)malloc(sizeof(struct NODE));
 	if(x==NULL) return EXIT_FAILURE; //to show error
	x->data = value;
	x->next = head;
	head = x;

	return EXIT_SUCCESS;
}

void prettyPrint(){
	struct NODE *temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");	

}


