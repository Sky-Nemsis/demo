#include<stdio.h>
long jf(int n)
{
	int i;
    long sum=1;
	for(i=1;i<=n;i++)
		sum=sum*i;
	return(sum);
}
long cmn(int m,int n)
{
	long c;
	c=jf(m)/jf(n)/jf(m-n);
	return(c);
}
void main()
{
	int m,n;
	printf("Please enter m and n\n");
		scanf("%d%d",&m,&n);
		printf("The result is %ld\n",cmn(m,n));
}