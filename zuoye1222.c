#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//打印1-10
//int main()
//{
//	/*int a;
//	for (a = 1; a <= 10; a++)
//	{
//		printf("%d ", a);
//	}*/
//
//	/*int a = 1;
//	while (a<=10)
//	{
//		printf("%d ", a);
//		a++;
//	}*/
//
//	int a = 1;
//	do {
//		printf("%d ", a);
//		a++;
//	} while (a<11);
//
//	return 0;
//}

//输入一个正的整数，逆序打印这个整数的每一位
//int main()
//{
	//int a = 0;
	//int r = 0;
	//scanf("%d", &a);
	//while (a>0)
	//{
	//	r = a % 10;//取最低一位
	//	printf("%d", r);
	//	a = a / 10;//去掉最后一位
	//}
	
	//int a = 0;
	//int r = 0;
	//scanf("%d", &a);
	//do {
	//	r = a % 10;//取最低一位
	//	printf("%d", r);
	//	a = a / 10;//去掉最后一位
	//} while (a > 0);

	/*int a = 0;
	scanf("%d", &a);
	for (; a > 0; a = a / 10)
	{
		int r = a % 10;
		printf("%d", r);
	}*/

//	return 0;
//}

//输入一个正整数，计算这个整数是几位数
int main()
{
	//int a = 0;
	//scanf("%d", &a);
	//int count = 0;
	//while (a>0)//1234 123 12 1
	//{
	//	count++;//1 2 3 4
	//	a = a / 10;//去掉最后一位 123 12 1 0
	//}
	//printf("%d", count);

	/*int a = 0;
	scanf("%d", &a);
	int count = 0;
	do {
		count++;
		a = a / 10;
	} while (a > 0);
	printf("%d", count);*/

	int a = 0;
	int count = 0;
	scanf("%d", &a);	
		for (;a>0; count++)
		{
			a = a / 10;
		}
	
	printf("%d", count);
	
	return 0;
}