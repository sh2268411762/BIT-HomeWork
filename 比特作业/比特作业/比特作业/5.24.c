//#include <stdio.h>
//#include <stdlib.h>
//
//unsigned char i = 0;
////在屏幕上打印杨辉三角。

//#define N 100
//void ShowYang()
//{
//	int i;//行号
//	int j;
//	int k;//打印空格
//	int n = 0;//要打印的行数
//	int arr[N][N];
//
//	printf("请输入要打印的行数——>");
//	scanf("%d", &n);
//
//	printf("%d行杨辉三角打印如下：\n", n);
//	for (i = 1; i <= n; i++)
//	{
//		arr[i][1] = 1;//每一列第一个数字为1
//		arr[i][i] = 1;//对角线数字为1
//	}
//	for (i = 3; i <= n; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}//存储数字
//	for (i = 1; i <= n; i++)//打印空格
//	{
//		for (k = 1; k <= n - i; k++)
//		{
//			printf("   ");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("%6d", arr[i][j]);
//		}
//		puts("");
//	}
//}
//int main()
//{
//	ShowYang();
//	return EXIT_SUCCESS;
//}
//



//#include <stdio.h>
//#include <stdlib.h>
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



////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
////以下为4个嫌疑犯的供词:
////A说：不是我。
////B说：是C。
////C说：是D。
////D说：C在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手。
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if (3 == (killer != 'a') + ('c' == killer) + ('d' == killer) + ('d' != killer))
//		{
//			printf("killer：%c\n", killer);
//		}
//	}
//	return EXIT_SUCCESS;
//}
//
//
//int main()
//{
//	int n = 9; //1001
//	float* fp = (float*)&n;
//
//	printf("%d\n", n);   // 0000 0000 0000 0000 0000 0000 0000 1001 
//	printf("%f\n", *fp); // 0.0 ?//为什么
//
//	*fp = 9.0;
//	1001.0                1.001 + 2 ^ 3
//	S = 0, E = 3, M = 1.001
//	s = 0, e = 130, m = 001
//	0 10000010 001 0000 0000 0000 0000 0000
//	?0 10000010 001 0000 0000 0000 0000 0000?
//	printf("%d\n", n);//为什么？
//	printf("%f\n", *fp);
//	system("calc");
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	printf("%f\n", 1e10);
//	printf("%f\n", 0.314e2);
//	FindKiller();
//	ShowYang();
//	unsigned char a = 200; // 
//	unsigned char b = 100; //64 + 32 + 4
//	128 64 8
//	1100 1000
//	0110 0100 +
//	----------
//  1 0010 1100
//	0010 1100
//	2^5 + 2^3 + 2^2
//	32  + 8 + 4
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c); //0000...0 1 0010 1100     256 + 32 + 8 + 4
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i; //[-128~127]
//		//a[0] = -1 - 0;  // 1111 1111 (-1)
//		//a[1] = -1 - 1;  // 1111 1110 (-2)
//		//a[2] = -1 - 2;  // 1111  1101(-3)
//		//a[3] = -1 - 3;  //-4 ... -128
//		//a[4] = -1 - 4;
//		//a[5] = -1 - 5;
//		//a[127] = -1 - 127; // 1000 0000 (-128) [-1~-128] [0~127]
//
//		//a[128] = -1 - 128  //0111 1111  (127)  [127 ~ 0] [128 ~ 255]
//		//a[129] = -1 - 129  //0111 1110  (126)
//		// ....
//		//a[]   = -1 - ? //0          
//		//[-1~-128] [127 ~ 0] 
//		//128 + 128 = 256 [0]
//	}
//	printf("%d", strlen(a)); //遇到'\0'就停下来,本质就是0，计算长度的时候，不包含0
//	system("pause");
//	return 0;
//}