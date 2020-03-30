#include<stdio.h>
#define n 3
#define m 4
void saw(int *p1,int *p2,int *p3,int a[n][m])
{
	int i,j,k,max,mj,fl;
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		mj=0;
	  for(j=0;j<m;j++)
	  {
		if(max<a[i][j])
		{
			max=a[i][j];
			mj=j;
		}
	  }
		fl=1;
		for(k=0;k<n;k++)
		{
			if(max>a[k][mj])
			fl=0;
		}
		if(fl)
		{
			*p1=i;
			*p2=mj;
			*p3=fl;
			break;
		}
	}
	    if(!fl)
			*p3=fl;
}
void main()
{
	int arr[n][m],h,l,t,i,j;
    for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&arr[i][j]);
	saw(&h,&l,&t,arr);
	if(t==1)
		printf("°°µãa[%d][%d]\n",h,l);
	if(!t)
		printf("no\n");
}




