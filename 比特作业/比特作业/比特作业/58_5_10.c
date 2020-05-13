//#include <stdio.h>
//#include <math.h>

//求出0～100000之间的所有“水仙花数”并输出
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//
//
//int main()
//{
//	int i = 0;
//	printf("0 到 100000之间的水仙花数有：");
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;//各位数次方之和
//		int temp = i;//保证 i 不会被改变，用一个拷贝值来进行操作
//		while(temp / 10)
//		{
//			n++;
//			temp /= 10;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int i, b, c, n;//i=行  b=星   c=空格
//    printf("输入上半部分行数：");
//    scanf("%d", &n);//上半部分行数
//    for (i = 1; i <= n; i++)
//    {
//        for (c = 0; c < (n - i); c++)                     //           i  1  2  3  4  5
//        {                                                 //        空格  4  3  2  1  0      n-i
//            printf(" ");                                  //           *  1  3  5  7  9      2i-1
//        }                                      
//        for (b = 1; b <= (2 * i - 1); b++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (i = n - 1; i >= 1; i--)
//    {
//        for (c = 0; c < (n - i); c++)                     //           i  1  2  3  4  5
//        {                                                 //        空格  4  3  2  1  0      n-i
//            printf(" ");                                  //           *  1  3  5  7  9      2i-1
//        }                                       
//        for (b = 1; b <= (2 * i - 1); b++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
