#include<stdio.h>
#define asd 100
#define ADD(x,y) x+y
int main()
{
	printf("%d\n", asd);
	int a = 1, b = 3;
	printf("%d\n", ADD(a, b));   //���㷽��������ADD�������궨��ģ���1+3=4��
	printf("%d\n", 4*ADD(a, b)); //���㷽������4*1+3=7��
	return 0;
}