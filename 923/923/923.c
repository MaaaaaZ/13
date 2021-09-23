#include<stdio.h>
#define asd 100
#define ADD(x,y) x+y
int main()
{
	printf("%d\n", asd);
	int a = 1, b = 3;
	printf("%d\n", ADD(a, b));   //计算方法：引用ADD函数（宏定义的）（1+3=4）
	printf("%d\n", 4*ADD(a, b)); //计算方法：（4*1+3=7）
	return 0;
}