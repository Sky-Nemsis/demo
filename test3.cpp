#include<stdio.h>//ȱ�ٺ����������
void main()
{
	int sum(int a,int b);//�˴�Ӧ����sum���������������ܽ��к��������Ƕ��
	int x,y;//x��y��Ҫ����
	scanf("%d%d",&x,&y);
		printf("%d\n",sum(x,y));//�����Ĵ����ʽӦ��Ϊx��y����x+y
}
int sum(int a,int b)
{
	return(a+b);
}