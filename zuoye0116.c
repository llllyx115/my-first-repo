#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char a = 'a';
//	char* p = &a;
//	printf("%c\n", *p);
//	printf("%p", p);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* pa = &arr;//取数组首地址
//	printf("%d\n", *pa);
//	printf("%d\n", *(pa + 1));
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* pa = &arr[8];//取数组首地址
//	printf("%d\n", *pa);
//	printf("%d\n", *(pa - 1));
//	/*printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%d", *(pa + 8) - *pa);*/
//
//	return 0;
//}

//int main()
//{
//	/*char a = 'a';
//	int b = 1;
//	char* pa = &a;
//	int* b = &b;*/
//	
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,11 };
//	int* pa = &arr;//取数组首地址
//	/*printf("%d\n", *pa);
//	printf("%d\n", *(pa - 1));*/
//	/*printf("%p\n", pa);
//	printf("%p\n", pa + 1);*/
//	int* p = &arr[0];
//	int* p2 = &arr[1];
//	int* p1 = &arr[8];
//	printf("%p\n", p);//首元素p对应的地址
//	printf("%p\n", p2);
//	printf("%p\n", p1);//最后一个元素对应的地址
//	printf("%d\n", p1-p);//指针-指针结果是获取到的元素个数
//	printf("%d", (pa + 8) - pa);//指针-指针结果是获取到的元素个数
//
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20;
//	//const int* pa = &a;//const修饰*左边：即修饰的是*pa所代表的存储空间中的变量，所以*pa不能修改
//	int*const pa = &a;//const修饰*右边：即修饰pa代表的地址
//	//pa = &b;
//
//	printf("%d", *pa);
//
//	return 0;
//}

int main()
{
	int a = 0x11223344;
	char* p = (char*)&a;//char类型一次取一个字节 且现在取得是首地址 
	//printf("%p", pa);
	if (*p == 0x44)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}