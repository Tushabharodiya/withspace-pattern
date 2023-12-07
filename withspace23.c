#include<stdio.h>
main()
{
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				printf("| ");
			}else
			{
				printf("- ");
			}
		}
		printf("\n");
	}
}