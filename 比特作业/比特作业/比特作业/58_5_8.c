//#include <stdio.h>
//
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//
//int Add(const int A);
//
//int main()
//{
//	int a = 3;
//	//scanf("%d", &a);
//	int Sn = Add(a);
//	printf("Sn = %d\n", Sn);
//	return 0;
//}
//
//int Add(const int A)
//{
//	int n = 0;//第几项
//	printf("要求前几项之和：-->");
//	scanf("%d", &n);
//	int num = 0;
//	int ret = 0;
//	while (n--)
//	{
//		num = num * 10 + A;
//		ret += num;
//	}
//	return ret;
//}



////写一个函数，可以逆序一个字符串的内容。
//
//void reverse(char const* const s);
//
//int main()
//{
//	char str[] = { "Hello World" };
//	printf("原字符串：%s\n\n", str);
//	printf("反向后：");
//	reverse(str);
//	return 0;
//}
//
//void reverse(char const* const s)
//{
//	char c = *s;
//	if (c != '\0')
//	{
//		reverse(s + 1);
//	}
//	if (c != '\0')
//	{
//		printf("%c", c);
//	}
//}


//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };//定义一个无符号长整形数组 p
//	unsigned long* pulPtr;//定义一个指针pPtr
//	pulPtr = pulArray;//pPtr = p数组
//	*(pulPtr + 3) += 3;
//	printf(" % d, % d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

