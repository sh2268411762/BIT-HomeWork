//#include <stdio.h>
//
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//
//void Swap(int a[], int sz)
//{
//	int i = 0;//数组第一个元素的下标
//	int j = sz - 1;//数组最后一个元素的下标
//	int temp = 0;
//	while (i < j)
//	{
//		if ((0 == a[i] % 2) && (1 == a[j] % 2))
//		{
//			temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//		}
//		if (1 == a[i] % 2)
//		{
//			i++;
//		}
//		if (0 == a[j] % 2)
//		{
//			j--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 23,41,2,34,67,99,78,90,76,45 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("before：\n");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//	Swap(arr, sz);
//	puts("");
//	printf("after：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//	return 0;
//}
//
//
//#include <assert.h>
//
//////模拟实现库函数strcpy
////
////char* Mystrcpy(char* S , const char* Str )
////{
////	assert(Str != NULL);
////	char* c = S;//c =S
////	while (*S++ = *Str++)
////	{
////		;
////	}
////	return c;//返回一个指针
////}
////int main()
////{
////	//char s[] = "Hello Bit";
////	const char* s = "Hello Bit";
////	char str[100] = "Bit hello";
////	printf("before：%s\n", str);
////	Mystrcpy(str, s);
////	printf(" after：%s\n",str);
////}
//
//
//////模拟实现库函数strlen
////
////int Mystrlen(const char* str)
////{
////	assert(str != NULL);
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
////int main()
////{
////	//char s[] = "Hello Bit";
////	const char* s = "Hello Bit";
////	int ret = Mystrlen(s);
////	printf("字符串 \"%s\" 的长度为：%d\n", s, ret);
////}
//
//
////int main()
////{
////    int i = 0;
////    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////    for (i = 0; i <= 12; i++)
////    {
////        arr[i] = 0;
////        printf("hello bit\n");
////    }
////    return 0;
////}