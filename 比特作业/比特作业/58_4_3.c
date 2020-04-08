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
//			if (m % n == 0)//m%n==0说明m整除n，但m不等于n，且n大于2，所以m不是素数，break控制跳出循环
//			{
//				break;
//			}
//		}
//		if (n >= m / 2)//当循环进行到这里说明m是素数
//		{
//			count++;
//			printf("%d ", m);
//		}
//	}
//	printf("\n100到200之间共有%d个素数\n",count);
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
//	printf("\n1000到2000年之间闰年有%d个\n", count);
//	return 0;
//}





//int main()
//{
//	int a =0 ;
//	int b =0;
//	int x = 0;
//	int temp;
//	printf("输入a的值：-->");
//	scanf("%d", &a);
//	printf("输入b的值：-->");
//	scanf("%d", &b);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp; 
//	}//使得a中存储数大于b
//	for (x = b; x > 0; x--)
//	{
//		if (a % x == 0 && b % x == 0)
//		{
//			printf("a和b的最大公约数是%d\n", x);
//			break;
//		}//按照从大到小的顺序寻找满足条件的自然数
//	}
//	return 0;
//}