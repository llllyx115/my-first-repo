#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[3][5];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6};
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	char str1[] = "***********";
//	char str2[] = "hello world";
//	int size = sizeof(str2)/sizeof(str2[0]);
//	int left = 0;
//	int right = size - 2; //默认的\0减一 下标从0开始减一
//	while (left <= right)
//	{
//		Sleep(1000); //让程序强制休眠一段时间 单位毫秒 S必须大写
//		system("cls");//清空控制台内容`
//		str1[left] = str2[left];
//		str1[right] = str2[right];
//		left++;
//		right--;
//		printf("%s\n", str1);
//	}
//
//	return 0;
//}

//冒泡排序法
//int main()
//{
//	int arr[] = { 4,1,9,2,7,8,4 };
//	int size = sizeof(arr) / sizeof(arr[0]); //计算数组元素个数
//	for (int i = 0; i < size - 1; i++)//外层循环：比较的趟数
//	{
//		int flg = 0;//标记：用于检验元素是否交换
//		for (int j = 0; j < size - 1 - i; j++)//内层循环：每个元素比较的次数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flg = 1;
//			}
//		}
//		if (flg = 0)//即在本趟比较中，j对应的元素小于j+1对应元素，本趟循环直接结束
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//二分查找 关键：把mid检查完之后，一定要把mid排除在搜索范围之外
int main()
{
	int arr[] = { 1,2,4,6,7,8,9,11,13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 8;
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid+1;//把mid排除在外
		}
		else if (arr[mid] > n)
		{
			right = mid-1;//把mid排除在外
		}
		else
		{
			printf("%d", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("-1");
	}

	return 0;

	/*int arr[] = { 1,2,4,6,7,8,9,11,13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 8;
	int left = 0;
	int right = size;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid+1;
		}
		else if (arr[mid] > n)
		{
			right = mid;//开区间 本身就不包含 所以要等于mid 否则就跳过了
		}
		else
		{
			printf("%d", mid);
			break;
		}

	}
	if (left >= right)
	{
		printf("-1"); 
	}

	return 0;*/
}