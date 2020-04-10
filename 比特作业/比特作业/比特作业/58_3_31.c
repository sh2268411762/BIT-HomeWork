//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d  ", i);
//		}
//		i++;
//	}
//	return 0;
//}



//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	if (arr[i] > arr[i + 1])
//	{
//		for (i = 0; i < sz - 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < sz - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	puts("");
//}
//int main()
//{//冒泡排序：相邻的两个元素进行比较
//	int arr[3] = {9,6,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	puts("排序前:-->");
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	puts("排序后:-->");
//	print_arr(arr,sz);
//	return 0;
//}


//int fun(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:
//		b = 30;
//	case 2:
//		b = 10;
//	case 3:
//		b = 16;
//	defult:
//		b = 0;
//	}
//	return b;
//}
//int main(void)
//{
	/*int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
		{
			printf("%d ", i);
		}
	}*/


	//int ret = fun(1);
	//printf("%d", ret);


	/*int x = 3;
	int y = 3;
	switch (x % 2)
	{
	case 1:
		switch (y)
		{
		case 0:
			printf("first");

		case 1:
			printf("second");
			break;

		default:
			printf("hello");
		}
	case 2:
		printf("third");
	}*/


	//return 0;
//}