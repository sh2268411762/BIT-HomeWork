//#include<stdio.h>
//#include<windows.h> 
//#pragma warning(disable:4996)
////喝汽水，1瓶汽水1元，
////2个空瓶可以换一瓶汽水，给20元，可以买多少汽水（编程实现）。
//int  Buy(int n)
//{
//	if (0 == n || n <= 0)
//	{
//		return -1;
//	}
//	else
//	{
//		int count = n;
//		while (n > 1)
//		{
//			if (n % 2 == 0)
//			{
//				n /= 2;
//				count += n;
//			}
//			else {
//				count += n / 2;
//				n = n / 2 + 1;
//			}
//		}
//		return count;
//		//	printf("一共可以买%d瓶汽水\n",count);
//	}
//}
//int main()
//{
//	int money = 0;
//	printf("请输入你的money：");
//	scanf("%d", &money);
//	int index = Buy(money);
//	if (-1 == index)
//	{
//		printf("你喝个锤子\n");
//	}
//	else
//	{
//		printf("一共可以喝到%d瓶汽水\n", index);
//	}
//	system("pause");
//	return 0;
//}
