//#include <stdio.h>
//
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
//
//void Swap(int a[], int sz)
//{
//	int i = 0;//�����һ��Ԫ�ص��±�
//	int j = sz - 1;//�������һ��Ԫ�ص��±�
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
//	printf("before��\n");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//	Swap(arr, sz);
//	puts("");
//	printf("after��\n");
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
//////ģ��ʵ�ֿ⺯��strcpy
////
////char* Mystrcpy(char* S , const char* Str )
////{
////	assert(Str != NULL);
////	char* c = S;//c =S
////	while (*S++ = *Str++)
////	{
////		;
////	}
////	return c;//����һ��ָ��
////}
////int main()
////{
////	//char s[] = "Hello Bit";
////	const char* s = "Hello Bit";
////	char str[100] = "Bit hello";
////	printf("before��%s\n", str);
////	Mystrcpy(str, s);
////	printf(" after��%s\n",str);
////}
//
//
//////ģ��ʵ�ֿ⺯��strlen
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
////	printf("�ַ��� \"%s\" �ĳ���Ϊ��%d\n", s, ret);
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