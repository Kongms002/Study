#include<stdio.h>
#define N 10
int main(void)
{
	int a[N]={5,10,2,9,3,8,4,7,1,6};
	for(int i=0; i<N; i++)
	{
		int x=a[i],c;
		for(int j=i; j<N; j++)
		{
			if(a[j]<x)
			{
				x=a[j];
				c=j;
			}
		}
		a[c]=a[i];
		a[i]=x;
	}
	for(int i=0; i<N; i++)
		printf("%d ",a[i]);
}
/* Selection Sort : 1~n��°���� ������ �ּҰ� ã�� 
�Ǿ� ���ҿ� ��ü, �׸��� 2~n�������� ������ �ּҰ�
 ã�� �Ǿտ��� 2��° ���ҿ� ��ü, �̸� �ݺ� */ 
