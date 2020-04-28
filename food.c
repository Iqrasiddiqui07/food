#include<stdio.h>
main()
{
	printf("pick a number: 1,2,3,4,5.  ");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Food item-Pizza\n");
			printf("Price- Rs 239");
		break;
	
		case 2:
			printf("Food item-Burger\n");
			printf("Price- Rs 129");
		break;
		
		case 3:
			printf("Food item-Pasta\n");
			printf("Price- Rs 179");
		break;
		
		case 4:
			printf("Food item-French fries\n");
			printf("Price- Rs 99");
		break;
		case 5:
			printf("Food item-Sandwich\n");
			printf("Price- Rs 149");
		break;
		default : printf("invalid output");
	}

}
