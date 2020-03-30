#include<stdio.h>
int fun(int m,int k,int a[])
{ 
	int i,j=0;
	for(i=0;m!=0;i++)
	{
		a[i]=m%k;
		m=m/k;
		j++;
	}
	return(j);
}
void main()
{
	int m,k,arr[10],t,i;
	printf("Please enter m and k\n");
	scanf("%d%d",&m,&k);
	t=fun(m,k,arr);
	for(i=t-1;i>=0;i--)
		printf("%d",arr[i]);
	    printf("\n");
		printf("十进制数%d转化为%d进制数结果如上\n",m,k);
}


		
