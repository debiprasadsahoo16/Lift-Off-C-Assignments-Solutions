#include <stdio.h>
#define mr		10
#define ml		10
int main()
{
	int matrix[mr][ml];
	int i,j,r=2,c=2;
	int sum,product;
	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	sum=0;
	product=1;
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			sum+=matrix[i][j];
			product*=matrix[i][j];
		}
	
	}

	printf("\nSUM of all elements : %d \nProduct of all elements :%d",sum,product);
	return 0;	
}