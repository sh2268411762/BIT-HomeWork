//#include <stdio.h>
//#include <stdlib.h>
//
////5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
////A选手说：B第二，我第三；
////B选手说：我第二，E第四；
////C选手说：我第一，D第二；
////D选手说：C最后，我第三；
////E选手说：我第四，A第一；
////比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//
//						//if (120 == a * b * c * d * e)//无并列名次
//						//{
//						//	if ((1 == (b == 2) + (3 == a)) && (1 == (2 == b) + (4 == e)) && (1 == (1 == c) + (2 == d)) && (1 == (5 == c) + (3 == d)) && (1 == (4 == e) + (1 == a)))
//						//	{
//						//		printf("a = %d,b = %d,c = %d, d = %d,e = %d\n", a, b, c, d, e);
//						//	}
//						//}
//
//						//有并列
//						if ((1 == (b == 2) + (3 == a)) && (1 == (2 == b) + (4 == e)) && (1 == (1 == c) + (2 == d)) && (1 == (5 == c) + (3 == d)) && (1 == (4 == e) + (1 == a)))
//						{
//							unsigned char flag = 0;
//							flag |= 1 << (a - 1);
//							flag |= 1 << (b - 1);
//							flag |= 1 << (c - 1);
//							flag |= 1 << (d - 1);
//							flag |= 1 << (e - 1);
//							
//							if ((2 == flag + 1) || (4 == flag + 1) || (8 == flag + 1) || (16 == flag + 1) || (32 == flag + 1))
//							{
//								printf("a = %d,b = %d,c = %d, d = %d,e = %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return EXIT_SUCCESS;
//}
//
//
//
//
//
//
////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
////以下为4个嫌疑犯的供词:
////A说：不是我。
////B说：是C。
////C说：是D。
////D说：C在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手。
////int main()
////{
////	int killer = 0;
////	for (killer = 'a'; killer <= 'd'; killer++)
////	{
////		if (3 == (killer != 'a') + ('c' == killer) + ('d' == killer) + ('d' != killer))
////		{
////			printf("killer：%c\n", killer);
////		}
////	}
////	return EXIT_SUCCESS;
////}
////int main()
////{
////	int murder[4] = { 0 }; //默认4个人都不是凶手
////
////	int i;
////	for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
////	{
////		murder[i] = 1; //假设某个人是凶手
////		if ((murder[0] != 1) +
////			(murder[2] == 1) +
////			(murder[3] == 1) +
////			(murder[3] != 1) == 3)
////		{
////			break; //满足就代表就是你了！
////		}
////		murder[i] = 0; //不满足还他清白
////	}
////
////	putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
////	return 0;
////}
//
//
//
//
//
//
//
////#define N 100
////
////int main()
////{
////	int i;//行号
////	int j;
////	int k;//打印空格
////	int n = 0;//要打印的行数
////	int arr[N][N];
////
////	printf("请输入要打印的行数——>");
////	scanf("%d", &n);
////
////	printf("%d行杨辉三角打印如下：\n", n);
////	for (i = 1; i <= n; i++)
////	{
////		arr[i][1] = 1;//每一列第一个数字为1
////		arr[i][i] = 1;//对角线数字为1
////	}
////	for (i = 3; i <= n;i++)
////	{
////		for (j = 2; j <= i - 1; j++)
////		{
////			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
////		}
////	}//存储数字
////	for (i = 1; i <= n; i++)//打印空格
////	{
////		for (k = 1; k <= n - i; k++)
////		{
////			printf("   ");
////		}
////		for (j = 1; j <= i; j++)
////		{
////			printf("%6d", arr[i][j]);
////		}
////		puts("");
////	}
////	return EXIT_SUCCESS;
////}
////int main()
////{
////	
////		//unsigned char a = 200;//1100 1000
////		//unsigned char b = 100;//0110 0100
////		//unsigned char c = 0;//1 0010 1100
////		//c = a + b;
////		//printf(" %d %d", a + b, c);
////
////	char a[1000] = { 0 };
////	int i = 0;
////	for (i = 0; i < 1000; i++)
////	{
////		a[i] = -1 - i;
////	}
////	printf("%d", strlen(a));
////	return 0;
////}