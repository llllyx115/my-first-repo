#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//传址调用
//void func(int* x,int* y)
//{
//	int tmp = *x;//*x类型是int
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	func(&a, &b);//传参时传的是地址
//	printf("a = %d b = %d", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//修改整型值
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//
//	return 0;
//}

//int main()
//{
//	char a = 'a';//修改指针指向
//	char* pa = &a;
//	char b = 'b';
//	pa = &b;
//	printf("%c", *pa);
//
//	return 0;
//}

//创建指针数组
//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, e = 5;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* pd = &d;
//	int* pe = &e;
//	int* arr[] = { &a,&b,&c,&d,&e };
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", **(arr + i));//数组指针是二级指针 需要两个解引用
//		                           //一个解引用打印的是变量的地址
//	}
//
//	return 0;
//}

//字符串指针数组
//int main()
//{
//	char* arr[] = { "hello","world","haha","hehe"};//存放这四个字符串的起始地址
//	for (int i = 0; i < 4; i++)
//	{
//		//printf("%s ", *(arr + i));
//		printf("%s ", arr[i]);//字符串指针数组的元素可以通过直接打印数组元素来实现
//
//	}
//
//	return 0;
//}

//字符串赋值给 数组:是拷贝的复印件 指针：是字符串首地址
//int main()
//{
//	char str1[] = { "hello world" };
//	char str2[] = { "hello world" };
//	const char* str3 = "hello world";
//	const char* str4 = "hello world";
//	printf("%p\n", str1);
//	printf("%p\n", str2);
//	printf("%p\n", str3);
//	printf("%p\n", str4);
//
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	
	//printf("%p\n", &arr[0]);//首元素地址
	//printf("%p\n", arr);//首元素地址
	//printf("%p\n", &arr);//首元素地址 &arr代表了整个数组 他的值是数组首元素地址 +1跳过整个数组

	printf("%p\n", &arr[1]);//第二个元素的地址
	printf("%p\n", (arr+1));//第二个元素的地址
	printf("%p\n", (& arr + 1));//地址跳过了整个数组

	return 0;
}