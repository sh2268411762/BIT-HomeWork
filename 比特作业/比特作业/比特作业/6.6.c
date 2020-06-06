//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
////要求：时间复杂度小于O(N);
//
//
//void find(int arr[3][3], int* px, int* py, int key)
//{
//	int x = 0;
//	int y = *py - 1;
//	while ((x < *px) && (y >= 0))
//	{
//		if (arr[x][y] == key)
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//		else if (arr[x][y] < key)
//		{
//			x++;
//		}
//		else if (arr[x][y] > key)
//		{
//			y--;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//void print_Arrs(int* arr, int row, int col)
//{
//	int i, j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)//
//		{
//			printf("%d", arr[i * col + j]);//
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//int (*arr)[3] ;int *arr[3]
//	int key = 1;
//	printf("请输入要查找的数字：-->");
//	scanf("%d", &key);
//	int x = 3;
//	int y = 3;
//	print_Arrs((int*)a, 3, 3);
//	find(a, &x, &y, key);
//	if (x != -1 && y != -1)
//	{
//		printf("找到了下标是：%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("没有找到%d\n", key);
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//
//
////
//////实现一个函数，可以左旋字符串中的k个字符。
//////例如：
//////ABCD左旋一个字符得到BCDA
//////ABCD左旋两个字符得到CDAB
////
////
////void Rotation(char* a, int k)
////{
////	int len = strlen(a);
////	char* p;
////	char* q;
////	for (p = a + k - 1; p >= a; p--)
////	{
////		for (q = p; q < p + len - k; q++)
////		{
////			char temp = *q;
////			*q = *(q + 1);
////			*(q + 1) = temp;
////		}
////	}
////}
////int main()
////{
////	char *s1 = "ABCDEFG";
////	int k = 2;
////
////	//printf("请输入要左旋的位数：-->");
////	//scanf("%d", &k);
////
////	printf("初始字符串：%s\n", s1);
////
////	Rotation(s1, k);
////	printf("字符串旋转 %d 位后：%s\n", k, s1);
////
////	return EXIT_SUCCESS;
////}
//
//
//
//
//
//
////void Left(char* a, int sz, int n)
////{
////	for (int i = 0; i < n; i++)
////	{
////		char t = a[0];
////		for (int j = 0; j < sz; j++)
////		{
////			a[j] = a[j + 1];
////		}
////		a[sz - 1] = t;
////	}
////}
////void Right(char* a, int sz, int n)
////{
////	for (int i = 0; i < n;i++)
////	{
////		char t = a[sz - 1];
////		for (int j = sz - 2; j >= 0; j--)
////		{
////			a[j + 1] = a[j];
////		}
////		a[0] = t;
////	}
////}
////int Find(char *a, char *b)
////{
////	char* c;
////	int i;
////	int len1 = strlen(a);//a,即 s1 的长度
////	int len2 = strlen(b);//b,即 s2 的长度
////	if (len1 != len2)
////	//如果两个字符串长度不相等，那么它们就不可能通过旋转得到
////	{
////		return 0;
////	}
////	
////	for (i = 0; i <= len1; i++)
////	{
////		c = a;
////		Left(c, len1, i);
////		if (0 == strcmp(c, b))
////		{
////			return 1;
////		}
////		c = a;
////		Right(c, len1, i);
////		if (0 == strcmp(c, b))
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
////
////int main()
////{
////	char s1[] = "AABCD";
////	char s2[] = "BCDAA";
////	char s3[] = "abcd";
////	char s4[] = "ABCD";
////
////	int ret = Find(s1, s2);
////	if (0 == ret)
////	{
////		printf("字符串 \" %s \" 不是字符串 \" %s \" 旋转后得到的\n", s1, s2);
////	}
////	else
////	{
////		printf("字符串 s1 是字符串 s2 旋转后得到的\n\n");
////	}
////
////	ret = Find(s3, s4);
////	if (0 == ret)
////	{
////		printf("字符串 \" %s \" 不是字符串 \" %s \" 旋转后得到的\n", s3, s4);
////	}
////	else
////	{
////		printf("字符串 s3 是字符串 s4 旋转后得到的\n");
////	}
////	return EXIT_SUCCESS;
////}
//
//
//
//
////int Company_double(const void* vx, const void* vy)
////{
////	//升序
////	double* x = (double*)vx;
////	double* y = (double*)vy;
////	if (*x > * y)
////	{
////		return 1;
////	}
////	else if (*x < *y)
////	{
////		return -1;
////	}
////	else
////	{
////		return 0;
////	}
////
////	//降序
////	//if (*x < * y)
////	//{
////	//	return 1;
////	//}
////	//else if (*x > *y)
////	//{
////	//	return -1;
////	//}
////	//else
////	//{
////	//	return 0;
////	//}
////}
////int Company_int(const void*vx, const void*vy)
////{
////	//升序
////	int* x = (int*)vx;
////	int* y = (int*)vy;
////	if (*x > * y)
////	{
////		return 1;
////	}
////	else if (*x < *y)
////	{
////		return -1;
////	}
////	else
////	{
////		return 0;
////	}
////
////	//降序
////	//if (*x < * y)
////	//{
////	//	return 1;
////	//}
////	//else if (*x > *y)
////	//{
////	//	return -1;
////	//}
////	//else
////	//{
////	//	return 0;
////	//}
////}
////int Company_char(const void* vx, const void* vy)
////{
////	//升序
////	char* x = (char*)vx;
////	char* y = (char*)vy;
////	if (*x > * y)
////	{
////		return 1;
////	}
////	else if (*x < *y)
////	{
////		return -1;
////	}
////	else
////	{
////		return 0;
////	}
////
////	//降序
////	//if (*x < * y)
////	//{
////	//	return 1;
////	//}
////	//else if (*x > *y)
////	//{
////	//	return -1;
////	//}
////	//else
////	//{
////	//	return 0;
////	//}
////}
////void show_int(int a[], int sz)
////{
////	int i = 0;
////	for (; i < sz; i++)
////	{
////		printf("%d   ", a[i]);
////	}
////	printf("\n");
////}
////void show_double(double a[], int sz)
////{
////	int i = 0;
////	for (; i < sz; i++)
////	{
////		printf("%.2f   ", a[i]);
////	}
////	printf("\n");
////}
////void show_char(char a[], int sz)
////{
////	int i = 0;
////	for (; i < sz; i++)
////	{
////		printf("%d   ", a[i]);
////	}
////	printf("\n");
////}
////int main()
////{
////	int a1[10] = { 44,33,2,55,34,2,123,56,90,88 };
////	double a2[10] = { 44.90,33.3,2.34,55.55,34.34,2.2,123.123,56.56,90.9,88.88 };
////	char a3[10] = { 2,78,3,19,29,90,100,78,57,49 };
////
////	int sz_int = sizeof(a1) / sizeof(a1[0]);
////	show_int(a1, sz_int);
////	qsort(a1, sz_int, sizeof(int), Company_int);
////	show_int(a1, sz_int);
////	printf("\n");
////
////	int sz_double = sizeof(a2) / sizeof(a2[0]);
////	show_double(a2, sz_double);
////	qsort(a2, sz_double, sizeof(double), Company_double);
////	show_double(a2, sz_double);
////	printf("\n");
////
////	int sz_char = sizeof(a3) / sizeof(a3[0]);
////	show_char(a3, sz_char);
////	qsort(a3, sz_char, sizeof(char), Company_char);
////	show_char(a3, sz_char);
////	printf("\n");
////
////	return 0;
////}
//
//
////int main()
////{
////	int a[5] = { 5,4,3,2,1 };
////	int* p = (int*)(&a + 1);
////	printf("%d,%d", *(a + 1), *(p - 1));
////}
//
////int main()
////{
////	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
////	int* p1 = (int*)(&aa + 1);
////	int* p2 = (int*)(*(aa + 1));
////	printf("%d,%d", *(p1 - 1), *(p2 - 1));
////	return 0;
////}