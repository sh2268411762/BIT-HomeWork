//#include <stdio.h>
//#include <stdlib.h>
//int jiecheng(int n) {//���庯���׳�
//    int result;
//    if (n < 0)
//    {
//        printf("��������\n");
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
//    printf("�����������׳˵�����\n");
//    scanf("%d", &n);
//    printf("%d�Ľ׳�=%d\n", n, jiecheng(n));    //�������Ľ׳�
//
//    for (n = 1; n <= 10; n++)
//    {
//        printf("%d�Ľ׳�=%d\n", n, jiecheng(n));
//        count += jiecheng(n);
//    } 
//    printf("%d\n", count);              // 1��10�Ľ׳�
//    return 0;
//}
