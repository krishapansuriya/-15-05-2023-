#include<stdio.h>
main()
{
	char i,j,ch='A';
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
