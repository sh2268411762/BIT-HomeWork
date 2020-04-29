//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 10
//
///*写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。*/
//
//void Print(int a[]);
//
//int main()
//{
//	int arr[SIZE] = { 0 };
//	printf("请输入数组内容（10个数）：-->");
//	size_t i = 0;
//	for (; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	printf("开始打印\n\n");
//	Print(arr);
//	return 0;
//}
//
//void Print(int a[])
//{
//	int* bPtr = a;
//	size_t i = 0;
//	printf("以数组下标打印：\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("a[%u] = %d\n",i, a[i]);
//	}
//	puts("");
//
//	printf("数组名作为指针打印：\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("*(a + %u) = %d\n", i, *(a + i));
//	}
//	puts("");
//
//	printf("指针/下标表示法：\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("bPtr[%u] = %d\n", i, bPtr[i]);
//	}
//	puts("");
//
//	printf("指针/偏移量表示法：\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("*(bPtr + %u) = %d\n", i, *(bPtr + i));
//	}
//	printf("\n打印完毕\n");
//}




//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);//16进制整数
//    return 0;
//}

