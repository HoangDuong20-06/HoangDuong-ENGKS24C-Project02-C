#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "funtion.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice,choice2,choice3,i;
	int length;
	struct addSmallCategory foodAndDrinks[100];
	struct addSmallCategory consumerGoodsAndHouseholdItems[100];
	struct addSmallCategory fashionAndAccessories[100];
	struct addSmallCategory electronicEquipmentAndTechnology[100];
	struct addSmallCategory childrenToys[100];
	struct addSmallCategory petSupplies[100];
	do{
		menuStore();
		printf("Your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				int exitSubMenu7=0;
				do{
					menuCategory();
					printf("Enter your choice:");
					scanf("%d",&choice2);
					switch(choice2){
						case 1:{
							int exitSubMenu1=0;
				            do{
					            printf("==========Food and drinks==========\n");
					            printf("1.Enter category information\n");
					            printf("2.Back to main menu\n");
				 	            printf("===================================\n");
					            printf("Enter your choice:");
					            scanf("%d",&choice3);
					            switch(choice3){
						            case 1:
							            addSmallCategory(foodAndDrinks,&length);
							            break;
						            case 2:
							            exitSubMenu1=1;
							            break;
							            default:
								            printf("Invalid selection\n");
					            }
				            }while(!exitSubMenu1);
				            break;
			            }
						case 2:{
				            int exitSubMenu2;
				            do{
					            printf("=====Consumer goods and household items=====\n");
					            printf("1.Enter category information\n");
			 	                printf("2.Back to main menu\n");
					            printf("============================================\n");
					            printf("Enter your choice:");
					            scanf("%d",&choice3);
					            switch(choice3){
						            case 1:
							            addSmallCategory2(consumerGoodsAndHouseholdItems,&length);
							            break;
						            case 2:
							            exitSubMenu2=1;
							            break;
							            default:
								            printf("Invalid selection\n");
					            }
				            }while(!exitSubMenu2);
				            break;
			            }
			            case 3:{
			            	int exitSubMenu3;
				            do{
					            printf("==========Fashion and accessories==========\n");
					            printf("1.Enter category information\n");
					            printf("2.Back to main menu\n");
					            printf("===================================\n");
					            printf("Enter your choice:");
					            scanf("%d",&choice3);
					            switch(choice3){
						            case 1:
							            addSmallCategory3(fashionAndAccessories,&length);
							            break;
						            case 2:
							            exitSubMenu3=1;
							            break;
							            default:
								            printf("Invalid selection\n");
					            }
				            }while(!exitSubMenu3);
				            break;
			            }
			            case 4:{
							int exitSubMenu4;
				            do{
					            printf("=====Electronic equipment and technology=====\n");
					            printf("1.Enter category information\n");
					            printf("2.Back to main menu\n");
					            printf("=============================================\n");
					            printf("Enter your choice:");
					            scanf("%d",&choice3);
					            switch(choice3){
						            case 1:
							            addSmallCategory4(electronicEquipmentAndTechnology,&length);
							            break;
						            case 2:
							            exitSubMenu4=1;
							            break;
							            default:
								            printf("Invalid selection\n");
					            }
				            }while(!exitSubMenu4);
				            break;
		                }
		                case 5:{
		                	int exitSubMenu5;
				            do{
					            printf("==========Children's toys==========\n");
					            printf("1.Enter category information\n");
					            printf("2.Back to main menu\n");
					            printf("===================================\n");
					            printf("Enter your choice:");
					            scanf("%d",&choice3);
					            switch(choice3){
						            case 1:
							            addSmallCategory5(childrenToys,&length);
							            break;
						            case 2:
							            exitSubMenu5=1;
							            break;
							            default:
								            printf("Invalid selection\n"); 
					            }
				            }while(!exitSubMenu5);
				            break;
				        }
				        case 6:{
				        	int exitSubMenu6;
					        do{
						        printf("==========Pet supplies==========\n");
						        printf("1.Enter category information\n");
						        printf("2.Back to main menu\n");
						        printf("================================\n");
						        printf("Enter your choice:");
						        scanf("%d",&choice2);
						        switch(choice2){
							        case 1:
								        addSmallCategory6(petSupplies,&length);
								        break;
							        case 2:
								        exitSubMenu6=1;
								        break;
								        default:
									        printf("Invalid selection\n");
						        }
					        }while(!exitSubMenu6);
					        break;
					    }
					    case 7:{
					    	int exitSubMenu7;
					    	exitSubMenu7=1;
					    	break;
					    	default:
					    		printf("Invalid selection\n");
					    	}
				    }
	            }while(choice2!=7);
            }
            case 2:
            	break;
            case 3:
            	printf("     *****End of program*****");
            	break;
            	default:
            		printf("Invalid selection\n");
        }
    }while(choice!=3);
    return 0;
}
