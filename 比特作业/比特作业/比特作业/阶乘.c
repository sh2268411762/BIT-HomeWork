//#include <stdio.h>
//#include <stdlib.h>
//int jiecheng(int n) {//定义函数阶乘
//    int result;
//    if (n < 0)
//    {
//        printf("输入有误！\n");
//        return 0;
//    }
//    else if (n == 0 || n == 1)
//    {
//        result = 1;
//    }
//    else
//    {
//        result = jiecheng(n - 1) * n;
//    }
//    return result;
//}
//int main()
//{
//    int n;
//    int n = 1;
//    int count = 0;
//    printf("输入你想计算阶乘的数：\n");
//    scanf("%d", &n);
//    printf("%d的阶乘=%d\n", n, jiecheng(n));    //任意数的阶乘
//
//    for (n = 1; n <= 10; n++)
//    {
//        printf("%d的阶乘=%d\n", n, jiecheng(n));
//        count += jiecheng(n);
//    } 
//    printf("%d\n", count);              // 1到10的阶乘
//    return 0;
//}
