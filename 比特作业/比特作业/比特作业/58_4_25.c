//#include <stdio.h>
//#include <stdlib.h>
//
////����������ʱ������������������������
//void Swap(int *x, int *y)
//{
//	//Code 1
//	*x = *x ^ *y;
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//
//	////Code 2
//	//*x = *x - *y;
//	//*y = *x + *y;
//	//*x = *y - *x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������-->");
//	scanf("%d%d", &a, &b);
//
//	printf("Before��a = %d,b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("Swap��a = %d,b = %d\n", a, b);
//	return 0;
//}



////дһ���������ز����������� 1 �ĸ�����
////���磺 15    0000 1111    4 �� 1
//int Print(const int x)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if (1 == ((x >> i) & 1))//�����˳��
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("�������������-->");
//	scanf("%d", &num);
//
//	int ret = Print(num);
//	printf("%d�Ķ���������%d��1\n", num, ret);
//	return 0;
//}



//
////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int i = 0;
//	int a = 0;
//	printf("�������������-->");
//	scanf("%d", &a);
//	//a=11;
//	//00000000 00000000 00000000 00001011
//	//0 0 0 0  0 0 0 0  0 0 0 0  0 0 1 1    ����
//	// 0 0 0 0  0 0 0 0  0 0 0 0  0 0 0 1  ż��
//	for (i =31; i >= 0; i--)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	puts("");
//	for (i = 30; i >= 0; i -= 2)//ż��
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	puts("");
//	for (i = 31; i >= 0; i -= 2)//����
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//
//	return 0;
//}




////���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
////�������� :
////    1999 2299
////������� : 7
//
//int Find_different(int x, int y)
//{
//	int n = 0;//����x��y�������
//	int count = 0;//������
//	n = x ^ y;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n >> i & 1)//�����������1�ĸ���
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("������������������-->");
//	scanf("%d%d", &m, &n);
//
//	int ret = Find_different(m, n);
//	printf("%d��%d�Ķ����Ʊ��ʽ����%d��λ��ͬ\n", m, n, ret);
//	return 0;
//}



//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}