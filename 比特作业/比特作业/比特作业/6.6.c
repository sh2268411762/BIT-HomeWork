//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
////Ҫ��ʱ�临�Ӷ�С��O(N);
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
//	printf("������Ҫ���ҵ����֣�-->");
//	scanf("%d", &key);
//	int x = 3;
//	int y = 3;
//	print_Arrs((int*)a, 3, 3);
//	find(a, &x, &y, key);
//	if (x != -1 && y != -1)
//	{
//		printf("�ҵ����±��ǣ�%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("û���ҵ�%d\n", key);
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
//////ʵ��һ�����������������ַ����е�k���ַ���
//////���磺
//////ABCD����һ���ַ��õ�BCDA
//////ABCD���������ַ��õ�CDAB
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
////	//printf("������Ҫ������λ����-->");
////	//scanf("%d", &k);
////
////	printf("��ʼ�ַ�����%s\n", s1);
////
////	Rotation(s1, k);
////	printf("�ַ�����ת %d λ��%s\n", k, s1);
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
////	int len1 = strlen(a);//a,�� s1 �ĳ���
////	int len2 = strlen(b);//b,�� s2 �ĳ���
////	if (len1 != len2)
////	//��������ַ������Ȳ���ȣ���ô���ǾͲ�����ͨ����ת�õ�
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
////		printf("�ַ��� \" %s \" �����ַ��� \" %s \" ��ת��õ���\n", s1, s2);
////	}
////	else
////	{
////		printf("�ַ��� s1 ���ַ��� s2 ��ת��õ���\n\n");
////	}
////
////	ret = Find(s3, s4);
////	if (0 == ret)
////	{
////		printf("�ַ��� \" %s \" �����ַ��� \" %s \" ��ת��õ���\n", s3, s4);
////	}
////	else
////	{
////		printf("�ַ��� s3 ���ַ��� s4 ��ת��õ���\n");
////	}
////	return EXIT_SUCCESS;
////}
//
//
//
//
////int Company_double(const void* vx, const void* vy)
////{
////	//����
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
////	//����
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
////	//����
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
////	//����
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
////	//����
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
////	//����
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