#include<stdio.h>
int main()
{
	int num,i,ctr,s,e;
	printf("Input starting number of range: ");
	scanf("%d",&s);
	printf("Input ending number of range: ");
	scanf("%d",&e);
	printf("The prime numbers between %d and %d are : \n",s,e);
	for(num = s;num<=e;num++)
	{
		ctr = 0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				ctr++;
				break;
			}
		}
		if(ctr==0 && num!=1)
		printf("%d ",num);
	}
	printf("\n");
}