//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//	int m, n;
//	int count = 0;
//	for (m = 101; m <= 200; m += 2)
//	{
//		for (n = 2; n < m / 2; n++)
//		{
//			if (m % n == 0)//m%n==0˵��m����n����m������n����n����2������m����������break��������ѭ��
//			{
//				break;
//			}
//		}
//		if (n >= m / 2)//��ѭ�����е�����˵��m������
//		{
//			count++;
//			printf("%d ", m);
//		}
//	}
//	printf("\n100��200֮�乲��%d������\n",count);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 1001;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//		else
//		{
//			count--;
//		}
//	}
//	printf("\n1000��2000��֮��������%d��\n", count);
//	return 0;
//}





//int main()
//{
//	int a =0 ;
//	int b =0;
//	int x = 0;
//	int temp;
//	printf("����a��ֵ��-->");
//	scanf("%d", &a);
//	printf("����b��ֵ��-->");
//	scanf("%d", &b);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp; 
//	}//ʹ��a�д洢������b
//	for (x = b; x > 0; x--)
//	{
//		if (a % x == 0 && b % x == 0)
//		{
//			printf("a��b�����Լ����%d\n", x);
//			break;
//		}//���մӴ�С��˳��Ѱ��������������Ȼ��
//	}
//	return 0;
//}