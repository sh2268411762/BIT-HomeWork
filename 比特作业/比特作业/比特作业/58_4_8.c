//#include <stdio.h>
//void print_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	printf("����Ҫ���в���������");
//	scanf("%d", &line);
//	print_table(line);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	printf("����10������-->");
//	int MAX = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > MAX)
//			MAX = a[i];
//	}
//	printf("�������ǣ�%d", MAX);
//	return 0;
//}


//float ADD(float x);
//float MINUS(float x);
//
//int main()
//{
//	float i=1;
//	float sum1 = ADD(i);
//	float sum2 = MINUS(i);
//	float ret = sum1 - sum2;
//	printf("1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 �Ľ���ǣ�-->%f\n", ret);
//	return 0;
//}
//float ADD(float x)
//{
//	float ret = 0;
//	for (x = 1; x <= 100; x += 2)
//	{
//		ret += (1 / x);
//	}
//	return ret;
//}
//float MINUS(float x)
//{
//	float ret = 0;
//	for (x = 2; x <= 100; x += 2)
//	{
//		ret += (1 / x);
//	}
//	return ret;
//}

//int main()
//{
//	int count = 0;//����
//	int i = 0;
//	for(i=1;i<=10;i++)
//	{
//		if (i % 9 == 0)
//		{
//			count++;
//		}
//	}
//	for(i=11;i<=89;i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	for(i=90;i<=100;i++)
//	{
//		if (i % 10 == 9)//99��������ȡ�����һ�飬ȡʮλ�ϵ�������һ��
//		{
//			count++;
//		}
//		int j;
//		j = i / 10;//100/10=10
//		if (9 == j)
//		{
//			count++;
//		}
//	}
//	printf("1��100�����������г���[%d]������9\n", count);
//	return 0;
//}