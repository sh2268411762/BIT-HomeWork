//#include <stdio.h>
//#include <stdlib.h>
//
////不允许创建临时变量，交换两个整数的内容
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
//	printf("请输入两个数：-->");
//	scanf("%d%d", &a, &b);
//
//	printf("Before：a = %d,b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("Swap：a = %d,b = %d\n", a, b);
//	return 0;
//}



////写一个函数返回参数二进制中 1 的个数。
////比如： 15    0000 1111    4 个 1
//int Print(const int x)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if (1 == ((x >> i) & 1))//运算符顺序
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入操作数：-->");
//	scanf("%d", &num);
//
//	int ret = Print(num);
//	printf("%d的二进制中有%d个1\n", num, ret);
//	return 0;
//}



//
////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int i = 0;
//	int a = 0;
//	printf("请输入操作数：-->");
//	scanf("%d", &a);
//	//a=11;
//	//00000000 00000000 00000000 00001011
//	//0 0 0 0  0 0 0 0  0 0 0 0  0 0 1 1    奇数
//	// 0 0 0 0  0 0 0 0  0 0 0 0  0 0 0 1  偶数
//	for (i =31; i >= 0; i--)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	puts("");
//	for (i = 30; i >= 0; i -= 2)//偶数
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	puts("");
//	for (i = 31; i >= 0; i -= 2)//奇数
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//
//	return 0;
//}




////编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
////输入例子 :
////    1999 2299
////输出例子 : 7
//
//int Find_different(int x, int y)
//{
//	int n = 0;//保存x与y的异或结果
//	int count = 0;//计数器
//	n = x ^ y;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n >> i & 1)//计算异或结果中1的个数
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
//	printf("请输入两个操作数：-->");
//	scanf("%d%d", &m, &n);
//
//	int ret = Find_different(m, n);
//	printf("%d与%d的二进制表达式中有%d个位不同\n", m, n, ret);
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