#include<stdio.h>
main()
{
	char i,j,s;
	
	for(i='A';i<='E';i++)
	{
		for(s=i;s>'A';s--)
		{
			printf("  ");
		}
		for(j=i;j<='E';j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}