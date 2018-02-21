#include <stdio.h>
#include <stdlib.h>
#include "list.h"
extern struct NODE *head;
void newList();
int addNode(int value);
void prettyPrint();

int main(){

	char array [1000];
	int store [1000]; //store valid inputs
	int *q = store;

	int success; //check whether is integer
	int check; //check whether is positive

	printf("Please enter a positive number \n");
	fgets(array,999,stdin);
	success = sscanf(array,"%d",q);
	newList();
	while(success == 1){
		if(*q>0){
			addNode(*q); //
			q++;
			printf("Please enter a positive number \n");
			fgets(array,999,stdin);
			success = sscanf(array,"%d",q);
		}
		if(*q<=0){
			printf("invalid input \n");
			break;
		}
	}
	prettyPrint(); //


	return 0;

}

