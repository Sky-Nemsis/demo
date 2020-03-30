#include<stdio.h>
void order(int a[10][2])
{
	int i,j,m,n,t,min;
	for(i=0;i<=9;i++)
	{
		min=i;
		for(j=i+1;j<=9;j++)
		{
			if(a[min][0]>a[j][0])
				min=j;
		}
			m=a[i][0];
			a[i][0]=a[min][0];
			a[min][0]=m;
			n=a[i][1];
			a[i][1]=a[min][1];
			a[min][1]=n;
	}
		for(i=0;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
		if(a[j][0]==a[j+1][0]&&a[j][1]>a[j+1][1])
		{
			t=a[j][1];
			a[j][1]=a[j+1][1];
			a[j+1][1]=t;
		}
		}
	}
}
void main()
{
	int score[10][2],i,j;
	for(i=0;i<=9;i++)
		for(j=0;j<=1;j++)
			scanf("%d",&score[i][j]);
		printf("before sorting\n");
    for(i=0;i<=9;i++)
	{
		for(j=0;j<=1;j++)
			printf("%3d",score[i][j]);
		    printf("\n");
	}
		order(score);
		printf("after sorting\n");
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=1;j++)
			printf("%3d",score[i][j]);
		    printf("\n");
	}
}
		