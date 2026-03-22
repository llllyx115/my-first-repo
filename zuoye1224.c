#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	//不打印5之后的内容 while循环 break作用：永久的停止循环
//	/*int a = 0;
//	while (a<10)
//	{
//		a++;
//		printf("%d ", a);
//		if (a == 5)
//		{
//			break;
//		}
//	}*/
//
//	//for 循环 
//	int a;
//	for (a = 1; a < 11; a++)
//	{
//		printf("%d ", a);
//		if (a == 5)
//		{
//			break;
//		}
//	}
//
//	return 0;
//}

//单独不打印5 continue作用：跳过本次循环中continue后面的代码
//int main()
//{
//	/*int a = 0;
//	while (a<10)
//	{
//		a++;
//		if(a == 5)
//		{
//			continue;
//		}
//		printf("%d ", a);
//	}*/
//
//	int a = 0;
//	for (a = 1; a < 11; a++)
//	{
//		if(a == 5)
//		{
//			continue;
//		}
//		printf("%d ", a);
//	}
//
//	return 0;
//}
 
//打印99乘法表 循环嵌套
//int main()
//{
//	int i, j = 0; //i是右操作数 j是左操作数
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
//判断素数 除了1和本身以外 没有能整除的数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int a = 2; a <= n - 1; a++)
//	{
//		if(n%a == 0)
//		{
//			break;
//		}
//		else { printf("%d是素数", n); }
//	}
//
//	return 0;
//}

//最小公倍数
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int max = a > b ? a : b;
//	max = a;
//	while(1){
//	if(max%a == 0 && max %b == 0)
//	{
//		printf("%d", max);
//		break;
//	}
//		max = max + a;
//	}
//
//	return 0;
//}

//最大公约数
//int main()
//{
//	/*int a, b;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	for (; min > 0; min--)
//	{
//		if (b % min == 0 && a % min == 0)
//		{
//			printf("%d", a);
//			break;
//		}
//	}
//
//	return 0;*/
//
//	//辗转相除法
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int r = a % b;
//	while (r)
//	{
//		int c = 0;
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	printf("%d", b);
//
//	return 0;
//
//}

//#include <math.h>
////求1-100000自幂数
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	for (int n = 1; n <= 100000; n++)
//	{
//		num = 0;
//		int m = n;
//		while (m > 0) //注意用n还是m
//		{
//			num++;
//			m = m / 10;
//		}
//		m = n;
//		sum = 0;
//		while (m>0)
//		{
//			int ret = m % 10;
//			sum = sum + pow(ret, num);
//			m = m / 10;
//		}
//		if (sum = n)
//		{
//			printf("%d ", n);
//		}
//	}
//
//	return 0;
//}

//一个数的每一位之和
//int main()
//{
//	int a ;
//	int sum = 0;
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		int r = a % 10;
//		sum = sum + r;
//		a = a / 10;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int n = rand() % 100 + 1;
//	int guess;
//	int count = 5;
//	while (count)
//	{
//		printf("请输入你要猜的数字：");
//			scanf("%d", &guess);
//		if (guess < n)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > n)
//		{
//			printf("猜大了\n");
//		}
//		else{
//			printf("猜对了\n");
//			break;
//		}
//		count--;
//		if (count > 0)
//		{
//			printf("只有%d次机会了\n",count);
//		}
//		else {
//			printf("你输了\n");
//		}
//	}
//
//	return 0;
//}

//分数求和
int main()
{
	float sum1 = 0, sum2 = 0;
	for (int num = 1; num <= 100; num++)
	{
		float r = 1.0 / num;
		if (num % 2)
		{
			sum1 = sum1 + r;
		}
		else
		{
			sum2 = sum2 - r;
		}
	}
	printf("%f", sum1 + sum2);

	return 0;
}

//可以喝多少汽水
//int main()
//{
//	int n;//7
//	scanf("%d", &n);
//	int num = n;//7
//	int sum = n;
//	while (num>1)
//	{
//		n = num / 2; //3 2 1
//		int r = num % 2; //1 0 0
//		num = n; //3 2 1
//		num = r + num; //4 2 1
//		sum = sum + n;
//	}
//	printf("%d", sum);
//
//	return 0;
//}