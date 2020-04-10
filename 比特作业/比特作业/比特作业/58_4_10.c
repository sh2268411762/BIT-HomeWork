#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//		{
//			break;
//		}
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


int binary_search(int arr[],int key,int left,int right)//定义并声明一个二分查找函数
{
	int mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] < key)//当arr[mid]小于要查找的数时
		{
			left = mid + 1;//左侧加1
		}
		else if (arr[mid] > key)//当zrr[mid]大于要查找的数时
		{
			right = mid - 1;//右侧减一
		}
		else//当left等于right时
		{
			break;//跳出while循环
		}
	}
	if (left <= right)//跳出循环即left等于right，如果此时left小于等于right即为找到
	{
		return mid;
	}
	else
	{
		return -1;//否则即为数组中没有该数字
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;//定义要查找的数字
	printf("请输入要查找的数字：-->");
	scanf("%d", &key);
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = 0;
	ret = binary_search(arr, key, 0, sz);
	if (ret == -1)
	{
		printf("找不到，数组中没有%d这个数\n",key);
	}
	else
	{
		printf("找到了\n%d的下标是：%d\n",key, ret);
	}
	return 0;
}