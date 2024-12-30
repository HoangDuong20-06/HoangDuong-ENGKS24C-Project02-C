#include"funtion.h"
#include<stdio.h>
#include<string.h>
void menuStore(){
	printf("==========STORE MANAGEMENT=========\n");
	printf("1. Category management\n");
	printf("2. Product management\n");
	printf("3. Exit\n");
	printf("===================================\n");
}
void menuCategory(){
	printf("        *****STORE MANAGEMENT*****\n");
	printf("==========CATEGORY MANAGEMENT=========\n");
	printf("1. Show Category\n");
	printf("2. Add Category\n");
	printf("3. Fix Category\n");
	printf("4. Delete Category\n");
	printf("5. Arrange Category\n");
	printf("6. Find Category\n");
	printf("7. Check the data for the category\n");
	printf("8. Data Storage\n");
	printf("9. Exit\n");
	printf("==========================================\n");
}
void inputCategory(int *length,struct Category user[]){
	int i;
	printf("Enter the number of categories:");
	scanf("%d", length);
	getchar();
	for(i=0;i<*length;i++){
		printf("Enter ID:");
		fgets(user[i].id,100,stdin);
		user[i].id[strcspn(user[i].id,"\n")]='\0';
		printf("Enter Category Name:");
		fgets(user[i].name,100,stdin);
		user[i].name[strcspn(user[i].name,"\n")]='\0';
	}
}
void printCategory(int *length,struct Category user[]){
	int i;
	printf(" ==============================\n");
	printf("| %-10s | %-10s |\n", "ID", "NAME CATEGORY");
	printf(" ==============================\n");
	for(i=0;i<*length;i++){
		printf("| %-10s | %-10s |\n",user[i].id,user[i].name);
	}
	printf(" ==============================\n");
}
void addCategory(int *length,struct Category user[]){
	int i=1;
	printf("Enter the number of categories:");
	scanf("%d", length);
	getchar();
	printf("Enter ID:");
	fgets(user[i].id,100,stdin);
	user[i].id[strcspn(user[i].id,"\n")]='\0';
	printf("Enter Category Name:");
	fgets(user[i].name,100,stdin);
	user[i].name[strcspn(user[i].name,"\n")]='\0';
	(*length)++;
}

