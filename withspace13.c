#include<stdio.h>
main()
{
	char i,j,s;
	
	for(i='A';i<='E';i++)
	{
		for(s=i;s<='D';s++)
		{
			printf("  ");
		}
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}