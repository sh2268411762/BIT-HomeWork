//#include < stdio.h >
//
////喝汽水，1瓶汽水1元，
////2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//
//int main()
//{
//	int money = 0;
//	int count = 0;//瓶子
//	int sum = 0;//喝的饮料总数
//	printf("请输入钱数：-->");
//	scanf("%d", &money);
//	if (0 == money || money < 0)
//	{
//		printf("你喝个锤子\n");
//	}
//	else
//	{
//		int i = 0;
//		for (; i < money; i++)
//		{
//			count++;
//			sum++;
//		}
//		money -= i;
//		while (count / 2)
//		{
//			count -= 2;
//			count++;
//			sum++;
//		}
//		printf("喝的饮料总数 sum = %d\n", sum);
//	}
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}

//struct S
//{
//	int a;
//	int b;
//};
//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							  {9802,"wang",19},
//							  {9803,"zhao",18}
//	};
//	fun(students + 1);
//	return 0;
//}
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);
//	//printf("%d\n", *p.a);
//	printf("%d\n", p->a);
//	printf("%d\n", (*p).a);
//	return 0;
//}