#include<stdio.h>
main()
{
	char i,j,s;
	
	for(i='E';i>='A';i--)
	{
		for(s=i;s<='D';s++)
		{
			printf("  ");	
		}
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}