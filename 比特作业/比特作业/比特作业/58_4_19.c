//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 10
//
//
////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//
//void Swap(int arr[], int ARR[],int sz);
//void Print(int arr[], int sz);
//int main()
//{
//	int arr[SIZE];
//	int ARR[SIZE];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("请输入arr[]数组的数字：-->");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("交换前arr[]数组：\n");
//	Print(arr, sz);
//	printf("请输入ARR[]数组的数字：-->");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &ARR[i]);
//	}
//	printf("交换前ARR[]数组：\n");
//	Print(ARR, sz);
//
//	puts("-------------------------------------------------------------");
//	Swap(arr, ARR,sz);
//	printf("交换后arr[]数组：\n");
//	Print(arr, sz);
//	printf("交换后ARR[]数组：\n");
//	Print(ARR, sz);
//	return 0;
//}
//void Swap(int arr[], int ARR[],int sz)
//{
//	int temp;
//	int i = 0;
//	while (i < sz)
//	{
//		temp = arr[i];
//		arr[i] = ARR[i];
//		ARR[i] = temp;
//		i++;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	puts("");
//}










////创建一个整形数组，完成对数组的操作
////
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
//

//
//void init(int arr[],int sz);
//void print(int arr[],int sz);
//void reverse(int arr[], int sz);
//int main()
//{
//	int arr[SIZE];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	init(arr, sz);//初始化函数
//	printf("打印函数：-->\n");
//	print(arr, sz);
//
//	printf("输入数组内容：-->\n");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("打印逆置前的函数：-->\n");
//	print(arr, sz);
//	reverse(arr, sz);
//	printf("打印逆置后的函数：-->\n");
//	print(arr, sz);
//	return 0;
//}
//
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	puts("");
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int temp;
//	/*for (i = 0; i < sz/2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - i - 1] = temp;
//	}*/
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}










//void Show(int arr[], int SZ);
//void Bubble(int arr[], int SZ);
//int main()
//{
//	int arr[10] = { 0 };
//	//int arr[10] = { 1,56,32,87,23,3,2,5,7,88 };
//	int SZ = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要比较的数：-->");
//	int i = 0;
//	for (i = 0; i < SZ; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	printf("\n排序前：-->");
//	Show(arr, SZ);
//	Bubble(arr, SZ);
//	printf("\n排序后：-->");
//	Show(arr, SZ);
//	return 0;
//}
//void Show(int arr[], int SZ)
//{
//	int i = 0;
//	for (i = 0; i < SZ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}