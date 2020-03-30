#include<stdio.h>
double fun(int m)
{
	int i;
	double sum=0;
	for(i=1;i<=m;i++)
		sum=1.0/i+sum;
	return(sum);
}
void main()
{
	int m;
	printf("\nPlease enter 1 integer number:");
	scanf("%d",&m);
		printf("所得结果为%lf",fun(m));

}