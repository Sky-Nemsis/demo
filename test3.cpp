#include<stdio.h>//缺少函数库的声明
void main()
{
	int sum(int a,int b);//此处应该有sum函数的声明，不能进行函数定义的嵌套
	int x,y;//x和y需要定义
	scanf("%d%d",&x,&y);
		printf("%d\n",sum(x,y));//参数的代入格式应该为x，y而非x+y
}
int sum(int a,int b)
{
	return(a+b);
}