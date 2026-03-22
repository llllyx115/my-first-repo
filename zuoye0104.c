#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[] = { 11,2,5,3,11,9,6,23,11,3 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	n = 11;
//	int i = 0;
//	while(i < size)//这里不用for函数：for函数的变量调整是在进入循环之后就已一定会有的，此处不适用
//	{
//		if (arr[i] == n)
//		{
//			int j = i + 1;//此处应重新定义一个变量j用于arr中，
//			              //否则（用i）会在arr[j - 1] = arr[j]导致越界从而程序崩溃
//			while (j < size)
//			{
//				arr[j - 1] = arr[j];//注意下标 不能越界
//				j++;
//			}
//			size = size - 1;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int arr3[10] = { 0 };//不完全初始化
//
//	int i = 0, j = 0, k = 0;
//	while (i < sz1 && j < sz2)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//		else
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//	while (i < sz1 )//第一个数组没放完
//	{
//		arr3[k] = arr1[i];
//		i++;
//		k++;
//	}
//	while (j < sz2)//第二个数组没放完
//	{
//		arr3[k] = arr2[j];
//		j++;
//		k++;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10][10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i][0] = arr[i][i] = 1;
//		for (int j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void Str (int x,int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//	//printf("Hello World");
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Str(a,b);
//
//	printf("%d %d", a, b);
//	return 0;
//}

//void SetArr(int arr[],int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = 10;
//	}
//}
//
//void PrintArr(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	SetArr(arr,size);
//	PrintArr(arr, size);
//
//	return 0;
//}

//输入某年某月某日 判断经过了多少天

int isLeapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int GetDays(int year, int month, int day)
{
	int days = 0;
	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//每个月份的天数
	for (int i = 1; i <= month - 1; i++)//注意下标范围
	{
		days += arr[i];
	}
	days += day;
	if (month > 2 && isLeapYear(year))
	{
		days += 1;
	}

	return days;
}

int main()
{
	int year = 0, month = 0, day = 0;
	printf("请输入年月日：");
	scanf("%d %d %d", &year, &month, &day);
	int ret = GetDays(year, month, day);
	printf("%d", ret);

	return 0;
}