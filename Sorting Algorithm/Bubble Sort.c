#include<stdio.h>
#define N 10
int main(void)
{
	int a[N]={5,10,2,9,3,8,4,7,1,6};
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				int s=a[j];
				a[j]=a[j+1];
				a[j+1]=s;
			}
		}
	}
	for(int i=0; i<N; i++)
		printf("%d ",a[i]);
}

/*Bubble Sort : 1, 2��° ���Ҹ� ���Ͽ� ū ����
�ڷ� ����, �׸��� 2, 3...n-1, n��° ���ұ��� 
���Ͽ� ���� ū ���Ҹ� �ڿ� ����, �̸� �ݺ��Ͽ� 
ū ���Ҹ� �ϳ��� �ڿ� �����ϴ� ��� */
 
