#include <stdio.h>
#include <stdlib.h>
#include "funtion.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice,choice2;
	int length;
	struct Category user[100];
	do{
		menuStore();
		printf("Your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				do{
					menuCategory();
					printf("Your choice:");
					scanf("%d",&choice2);
					switch(choice2){
						case 1:
							inputCategory(user, &length);
							printCategory(user, &length);
							break;
						case 2:
							addCategory(user, &length);
							printCategory(user, &length);
							break;
					}
				}while(choice2!=9);
				break;
			case 2:
				break;
			case 3:
				printf("\tEND PROGRAM");
				break;
				defautl:
					printf("Invalid Selection\n");
		}
	}while(choice!=3);
	return 0;
}
