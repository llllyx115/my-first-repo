#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("奇数");
//	}
//	else printf("偶数");
//
//	return 0;
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 18)
//	{
//		printf("成年");
//	}
//	else printf("未成年");
//	return 0;
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		if (a % 2 == 0)
//		{
//			printf("偶数");
//		}
//		else printf("奇数");
//	}
//	else printf("非正数");
//
//	return 0;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int max = a > b ? a : b;
//	printf("%d", max);
//
//	return 0;
//}
//
//int main()
//{
//	int month;
//	scanf("%d", &month);
//	if(month>=3 && month<=5)
//	{
//		printf("春天");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int month;
//	scanf("%d", &month);
//	if(month==12 || month==1 ||month==2)
//	{
//		printf("冬天");
//	}
//
//	return 0;
//}

int main()
{
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d是闰年", year);
	}
		
	return 0;
}