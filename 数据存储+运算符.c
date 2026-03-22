#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define NUM 100
//int main()
//{
//	int num = 10;
//	num = 20;
//	const int n = 100;//常量 常变量
//	//const修饰的变量只是拥有了常量的属性 不能修改
//
//	printf("%d", num);
//	printf("%d", NUM);
//	return 0;
//}

//操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = a + b;
//	//\n 转义字符 换行
//	printf("%d + %d = %d\n",a,b,sum);
//	int ret = b - a;
//	printf("%d - %d = %d\n",b,a,ret);
//	ret = a * b;
//	printf("a * b = %d\n", ret);
// 	printf("%f\n",3.0/2.0);//除法操作占位符 %f 至少一个浮点数
//	printf("%d", 10 % 3);//取余 两个必须是整型
//	//+-*/% 双目运算符 必须有两个操作数
//
//	return 0;
//}

//赋值运算符
//int main()
//{
//	//int a;
//	//a = 20;
//	//int b = a = 30;//连续赋值 赋值表达式的结果是赋值之后的结果 不能写成int a = b = 30；会报错
//	////相当于给a重新赋值（a=30），结果是int b = 30；
//	//printf("a=%d,b=%d", a, b);
//	//复合赋值
//	int a = 10, b = 20;
//	int c = 1;
//	c += b;//c = c + b;
//	printf("%d\n", c);
//	b -= a;
//	printf("%d", b);
//	a *= b;
//	printf("%d",a);
//
//	return 0;
//}


//单目运算符 
//int main()
//{
//	int a = 10;
//	//自增 ++  自减 --
//	//a++;//后置自增 a = a+1
//
//	//printf("%d", a);
//	//后置和前置的区别
//	printf("%d\n", a++);//先使用 再计算 11
//	printf("%d\n", ++a);//先计算 再使用 12
//	printf("%d\n", a--);//先使用 再计算 11
//	printf("%d", --a);//先计算 再使用 10
//
//	return 0;
//}

//int main()
//{
//	//字符型必须用‘’引用起来
//	//char c = 'a';
//	//printf("%c", c);
//	//%c打印字符型
//	char c = '9';
//	printf("%d\n", c-'0'); //打印数字9 57-48 = 9
//	printf("%c", c);
//		
//	return 0;
//}

//int main()
//{
//	////打印反斜杠\需要两个\\
//	//int a = 15;
//	//int b = 7;
//	//printf("%d%%%d=%d", a, b, a - b);//打印a对b取余，打印取余符号用两个%%
//
//	double d = 12.3;
//	float f = 10.2f;
//	printf("%lf", f);//%lf表示打印long bouble类型
//
//	return 0;
//}
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

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int max = a > b ? a : b;
//	printf("%d", max);
//
//	return 0;
//}

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

//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d是闰年", year);
//	}
//		
//	return 0;
//}

int main()
{


	return 0;
}