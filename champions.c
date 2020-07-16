#include<stdio.h>
#include<stdlib.h>

int main()
{

  int menu;

   
   do{
   printf("1.8vos\n");
   printf("2.4tos\n");
   printf("3.final\n");
   printf("4.campion\n");
   scanf("%d",&menu);
   }while(menu>=5);
   
   switch(menu)
   {
   	case 0:
   		printf("menu");
   		break;
   	case 1:
	  printf("manchester united 0-2 psg\n");
	    printf("ajax 1-2 real madrid\n");
		printf("roma 2-1 porto\n");
		printf(" totthenham 3-0 borusia dortmund\n");
		printf("lyon 0-0 barcelona\n");
		printf("liverpool 0-0 bayern munich\n");
		printf("atletico madrid 2-0 juventus\n");
		printf("schalke 2-3 manchester city\n");
		printf(" real madrid 1-4 ajax\n");
		printf(" borusia dortmund 0-1 totthenham\n");
		printf("porto 3-1 roma\n");
		printf("psg 1-3 manchester united\n");
		printf(" manchester city 7-0 schalke\n");
		printf(" juventus 3-0 atletico de madrid\n");
		printf("bayern 1-3 liverpool\n");
		printf("barcelona 5-1 lyon\n");
		break;
	case 2:
		printf("manchester united 0-1 barcelona\n");
		printf("barcelona 3-0 manchester united\n");
		printf("juventus 2-1 ajax\n");
		printf("ajax 1-1 juventus\n");
		printf("liverpool 2-0 loporto\n");
		printf("loporto 4-1 liverpool\n");
		printf("totthenham 1-0 manchester city\n");
		printf("manchester city 4-3 totthenham\n");
		break;
	case 3:
		printf("totthenham 1-0 ajax\n");
		printf("ajax 2-3 totthenham\n ");
		printf("liverpool 4-0 barcelona\n");
		printf("barcelona 3-0 liverpool\n");
		break;
	case 4:
	     printf("totthenham 0-2 liverpool\n");
		 break;	
	   				   	
     }
   	return 0;
}
