#include "funtion.h"
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
	printf("===============CATEGORY MENU==============\n");
	printf("1. Food and drinks\n");
	printf("2. Consumer goods and household items\n");
	printf("3. Fashion and accessories\n");
	printf("4. Electronic equipment and technology\n");
	printf("5. Children's toys\n");
	printf("6. Pet supplies\n");
	printf("7. Exit\n");
	printf("==========================================\n");
}
void addSmallCategory(int *length,struct addSmallCategory foodAndDrinks[]){
	int i;
	printf("Enter the number of categories:");
	scanf("%d", length);
	for(i=0;i<*length;i++){
		printf("Enter ID product:");
		scanf("%d",&foodAndDrinks[i].id);
		getchar();
		printf("Enter category product: ");
		fgets(foodAndDrinks[i].nameCategory,100,stdin);
		foodAndDrinks[i].nameCategory[strlen(foodAndDrinks[i].nameCategory-1)]='\0';
	}
}
void addSmallCategory2(int *length,struct addSmallCategory consumerGoodsAndHouseholdItems[]){
	int i;
	printf("Enter the number of categories:");
	scanf("%d", length);
	for(i=0;i<*length;i++){
		printf("Enter ID product:");
		scanf("%d",&consumerGoodsAndHouseholdItems[i].id);
		getchar();
		printf("Enter category product: ");
		fgets(consumerGoodsAndHouseholdItems[i].nameCategory,100,stdin);
		consumerGoodsAndHouseholdItems[i].nameCategory[strlen(consumerGoodsAndHouseholdItems[i].nameCategory-1)]='\0';
	}
}
void addSmallCategory3(int *length,struct addSmallCategory fashionAndAccessories[]){
	int i;
	printf("Enter the number of categories:");
	scanf("%d", length);
	for(i=0;i<*length;i++){
		printf("Enter ID product:");
		scanf("%d",&fashionAndAccessories[i].id);
		getchar();
		printf("Enter category product: ");
		fgets(fashionAndAccessories[i].nameCategory,100,stdin);
		fashionAndAccessories[i].nameCategory[strlen(fashionAndAccessories[i].nameCategory-1)]='\0';
	}
}
void addSmallCategory4(int *length,struct addSmallCategory electronicEquipmentAndTechnology[]){
	int i;
	printf("Enter the number of categories:");
	scanf("%d", length);
	for(i=0;i<*length;i++){
		printf("Enter ID product:");
		scanf("%d",&electronicEquipmentAndTechnology[i].id);
		getchar();
		printf("Enter category product: ");
		fgets(electronicEquipmentAndTechnology[i].nameCategory,100,stdin);
		electronicEquipmentAndTechnology[i].nameCategory[strlen(electronicEquipmentAndTechnology[i].nameCategory-1)]='\0';
	}
}
void addSmallCategory5(int *length,struct addSmallCategory childrenToys[]){
	int i;
	printf("Enter the number of categories:");
	scanf("%d", length);
	for(i=0;i<*length;i++){
		printf("Enter ID product:");
		scanf("%d",&childrenToys[i].id);
		getchar();
		printf("Enter category product: ");
		fgets(childrenToys[i].nameCategory,100,stdin);
		childrenToys[i].nameCategory[strlen(childrenToys[i].nameCategory-1)]='\0';
	}
}
void addSmallCategory6(int *length,struct addSmallCategory petSupplies[]){
	int i;
	printf("Enter the number of categories:");
	scanf("%d", length);
	for(i=0;i<*length;i++){
		printf("Enter ID product:");
		scanf("%d",&petSupplies[i].id);
		getchar();
		printf("Enter category product: ");
		fgets(petSupplies[i].nameCategory,100,stdin);
		petSupplies[i].nameCategory[strlen(petSupplies[i].nameCategory-1)]='\0';
	}
}

