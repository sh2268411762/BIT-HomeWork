//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 10
//
//
////������A�е����ݺ�����B�е����ݽ��н�����������һ����
//
//void Swap(int arr[], int ARR[],int sz);
//void Print(int arr[], int sz);
//int main()
//{
//	int arr[SIZE];
//	int ARR[SIZE];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("������arr[]��������֣�-->");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("����ǰarr[]���飺\n");
//	Print(arr, sz);
//	printf("������ARR[]��������֣�-->");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &ARR[i]);
//	}
//	printf("����ǰARR[]���飺\n");
//	Print(ARR, sz);
//
//	puts("-------------------------------------------------------------");
//	Swap(arr, ARR,sz);
//	printf("������arr[]���飺\n");
//	Print(arr, sz);
//	printf("������ARR[]���飺\n");
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










////����һ���������飬��ɶ�����Ĳ���
////
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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
//	init(arr, sz);//��ʼ������
//	printf("��ӡ������-->\n");
//	print(arr, sz);
//
//	printf("�����������ݣ�-->\n");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("��ӡ����ǰ�ĺ�����-->\n");
//	print(arr, sz);
//	reverse(arr, sz);
//	printf("��ӡ���ú�ĺ�����-->\n");
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
//	printf("������Ҫ�Ƚϵ�����-->");
//	int i = 0;
//	for (i = 0; i < SZ; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	printf("\n����ǰ��-->");
//	Show(arr, SZ);
//	Bubble(arr, SZ);
//	printf("\n�����-->");
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