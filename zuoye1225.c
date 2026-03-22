#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组的创建
//int main()
//{
//	//char arr[5] = { 1,2,3,4,5 }; //完全初始化
//	//char arr[5] = { 1,2,3 };//不完全初始化
//	//创建数组 打印
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", &arr[i]); 
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//输入每一位 不能超过九个数字
//	}
//	int min = arr[0], max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d", max-min);
//
//
//	return 0;
//}

#include <string.h>
//int main()
//{
//	//printf("hello world");
//	//char arr[5] = { 'a','b','c','d','e' };
//	char arr[5] = "abcde";//双引号引起来的字符串默认带\0 字符数组中需要加‘\0’ 
//	//因此 用strlen计算数组长度时 字符串数组长度5 字符数组若不带\0 则长度大于5 带的话则为5
//	//用sizeof计算时 字符串数组长度6 字符数组带\0长度6 不带长度5
//	int num = strlen(arr);
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c", arr[i]);
//	}
//
//	return 0;
//}

int main()
{
	char arr[31];
	scanf("%s", arr);//arr表示数组的首元素地址 因此不需要加&
	int len = strlen(arr);//不知道实际会输入多少个字符 因此计算字符串长度
	for (int i = 0; i < len; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] = arr[i] - 32;
		}
		else if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			arr[i] = arr[i] + 32;
		}
	}
	printf("%s", arr);

	return 0;
}