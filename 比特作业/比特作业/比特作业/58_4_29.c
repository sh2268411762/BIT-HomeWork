//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 10
//
///*дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣*/
//
//void Print(int a[]);
//
//int main()
//{
//	int arr[SIZE] = { 0 };
//	printf("�������������ݣ�10��������-->");
//	size_t i = 0;
//	for (; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	printf("��ʼ��ӡ\n\n");
//	Print(arr);
//	return 0;
//}
//
//void Print(int a[])
//{
//	int* bPtr = a;
//	size_t i = 0;
//	printf("�������±��ӡ��\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("a[%u] = %d\n",i, a[i]);
//	}
//	puts("");
//
//	printf("��������Ϊָ���ӡ��\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("*(a + %u) = %d\n", i, *(a + i));
//	}
//	puts("");
//
//	printf("ָ��/�±��ʾ����\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("bPtr[%u] = %d\n", i, bPtr[i]);
//	}
//	puts("");
//
//	printf("ָ��/ƫ������ʾ����\n");
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("*(bPtr + %u) = %d\n", i, *(bPtr + i));
//	}
//	printf("\n��ӡ���\n");
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
//    printf("%x\n", a);//16��������
//    return 0;
//}

