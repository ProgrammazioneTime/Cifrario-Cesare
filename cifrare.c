#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() //32-126
{
	char frase[100];
	int key;
	int i,salto=0;
	
	while(1)
	{
		system("cls");
		printf("Inserisci la frase da cifrare: ");
		gets(frase); //scanf("%s",frase);
		do{
			printf("Inserisci la chiave di cifratura: ");
			scanf("%d",&key);
		}while(key<1 || key>10);
		printf("\n\n----------------------------------\nFrase cifrata:\n");
		
		for(i=0; i<strlen(frase); i++,salto=0)
		{
			if(frase[i]>126-key)
			{
				salto=95;
			}
			printf("%c",frase[i]+key-salto);
		}
		
		printf("\n\n");
		system("pause");
	}
}
