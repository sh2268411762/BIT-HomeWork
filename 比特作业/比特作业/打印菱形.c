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
//        }                                                 //         当n=5时；
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
//        }                                                 //         当n=5时；
//        for (b = 1; b <= (2 * i - 1); b++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
