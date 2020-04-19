//#include <stdio.h>
//
////递归和非递归分别实现求第n个斐波那契数
//int Fib_Rec(int x);//递归
//int Fib_NoRec(int x);//非递归
//int main()
//{
//	int num = 0;
//	printf("请输入要求的斐波那契数列的位数：-->");
//	scanf("%d", &num);
//
//	printf("递归：斐波那契数列第[%d]位是 %d\n", num, Fib_Rec(num));
//	printf("非递归：斐波那契数列第[%d]位是 %d\n", num, Fib_NoRec(num));
//	return 0;
//}
//int Fib_Rec(int x)
//{
//	if (1 == x)
//	{
//		return 1;
//	}
//	else if (2 == x)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib_Rec(x - 1) + Fib_Rec(x - 2);
//	}
//}
//int Fib_NoRec(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (1 == x)
//	{
//		return 1;
//	}
//	else if (2 == x)
//	{
//		return 1;
//	}
//	else
//	{
//		while (x > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			x--;
//		}
//		return c;
//	}
//}




////编写一个函数实现n的k次方，使用递归实现
//int Pow(int x,int y);
//int main()
//{
//	int num = 0;
//	int k = 0;
//	printf("请输入操作数（用空格分隔）：-->");
//	scanf("%d%d", &num,&k);
//
//	printf("%d的%d次方是%d\n",num, k, Pow(num,k));
//	return 0;
//}
//int Pow(int x,int y)
//{
//	if (0 == y)//任何数的0次方都是1
//	{
//		return 1;
//	}
//	if (1 == x)//1的任何次方都是1
//	{
//		return 1;
//	}
//	else
//	{
//		return x * Pow(x, y - 1);
//	}
//}




////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int x);
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：-->");
//	scanf("%d", &n);
//
//	printf("[%d]各位数字之和是：-->%d\n",n, DigitSum(n));
//	return 0;
//}
//int DigitSum(int x)
//{
//	if (0 == x)
//	{
//		return 0;
//	}
//	else
//	{
//		return DigitSum(x / 10) + x % 10;
//	}
//}




//#define SIZE 32
////编写一个函数 reverse_string(char* string)（递归实现）
////实现：将参数字符串中的字符反向排列。
////要求：不能使用C函数库中的字符串操作函数。
//void reverse_string(char* string);
//int Strlen_Rec(const char* string);
//int main()
//{
//	char string[SIZE] = { "hello bit" };
//	printf("原字符串：--> %s\n",string);
//
//	printf("反向后：--> ");
//	reverse_string(string);
//	//printf("反向后：--> %s\n", string);//非递归
//	return 0;
//}
//int Strlen_Rec(const char* string)//非递归
//{
//	if (*string == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + Strlen_Rec(string + 1);
//	}
//}
//void reverse_string(char* string)
//{
//	//递归
//	char c = *string;
//	if (c != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	if (c != '\0')
//	{
//		printf("%c", c);
//	}
//
//	//非递归
//	//int i = 0;
//	//int temp;
//	//int size = Strlen_Rec(string);
//	//for (i = 0; i < size/2; i++)
//	//{
//	//	temp = string[i];
//	//	string[i] = string[size - i - 1];
//	//	string[size - i - 1] = temp;
//	//}
//}




//#define SIZE 32
////递归和非递归分别实现strlen
////求字符串的长度
//int Strlen_Rec(const char* str);//递归
//int Strlen_NoRec(char* str);//非递归
//int main()
//{
//	char str[SIZE] = { "hello bit" };
//
//	printf("递归：[%s]字符串的长度是%d\n", str, Strlen_Rec(str));
//	puts("");
//	printf("非递归：[%s]字符串的长度是%d\n", str, Strlen_NoRec(str));
//
//	return 0;
//}
//int Strlen_Rec(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + Strlen_Rec(str+1);
//	}
//}
//int Strlen_NoRec(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//当找到'\0'的时候跳出循环
//	{
//		str ++;
//		count++;
//	}
//	return count;
//}



////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//int Fact_Rec(const int x);//x的值不可被更改，递归
//int Fact_NoRec( int x);//非递归
//int main()
//{
//	int num = 0;
//	printf("请输入要计算阶乘的数：-->");
//	scanf("%d", &num);
//	puts("");
//
//	printf("[递归]：-->求[%d]的阶乘\n",num);
//	printf("%d的阶乘等于%d\n", num, Fact_Rec(num));
//	puts("");
//
//	printf("[非递归]：-->求[%d]的阶乘\n",num);
//	printf("%d的阶乘等于%d\n", num, Fact_NoRec(num));
//	return 0;
//}
//int Fact_Rec(const int x)
//{
//	int ret;
//	if (x < 0)
//	{
//		printf("输入有误!!!ERROR！！！\n");
//		return 0;
//	}
//	else if (0 == x || 1 == x)
//	{
//		ret = 1;
//	}
//	else
//	{
//		ret = x * Fact_Rec(x - 1);
//	}
//	return ret;
//}
//int Fact_NoRec( int x)
//{
//	int ret = 1;
//	if (x < 0)
//	{
//		printf("输入有误!!!ERROR！！！\n");
//		return 0;
//	}
//	while (x > 0 )//x=0时跳出循环
//	{
//		ret *= x;
//		x--;
//	}
//	return ret;
//}



////递归方式实现打印一个整数的每一位
//void Print(unsigned int n);
//int main()
//{
//	int num = 0;
//	printf("请输入要操作的数：-->");
//	scanf("%d", &num);
//
//	Print(num);
//	return 0;
//}
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//	{
//		printf("%d ", n);
//	}
//}


////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void PrintTable(int n);
//int main()
//{
//	int n = 0;
//	printf("请输入要操作的数：-->");
//	scanf("%d", &n);
//	printf("打印 %d * %d 乘法表\n",n,n);
//
//	PrintTable(n);
//	return 0;
//}
//void PrintTable(int n)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", j, i, i * j);
//		}
//		puts("");
//	}
//}





//
////实现一个函数来交换两个整数的内容。
//void Swap(int* _x, int* _y);
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入要交换的两个数（用空格隔开）：-->");
//	scanf("%d%d", &x, &y);
//	printf("交换前：x = %d,y = %d\n", x, y);
//
//
//	Swap(&x, &y);
//	printf("交换后：x = %d,y = %d\n", x, y);
//	return 0;
//}
//void Swap(int* _x, int* _y)
//{
//	if (*_x > * _y)
//	{
//		*_x = *_x - *_y;
//		*_y = *_x + *_y;
//		*_x = *_y - *_x;
//	}
//	else
//	{
//		*_y = *_y - *_x;
//		*_x = *_y + *_x;
//		*_y = *_x - *_y;
//	}
//}


////实现函数判断year是不是闰年。
//int IsLeap(int x);
//int main()
//{
//	int year = 0;
//	printf("请输入所要判断是否是闰年的年份：-->");
//	scanf("%d", &year);
//
//	int ret = IsLeap(year);
//	if (1 == ret)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//	return 0;
//}
//int IsLeap(int x)
//{
//	if (((0 == x % 4) && (0 != x % 100)) || (0 == x % 400))//四年一闰，百年不闰，四百年一闰
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


////实现一个函数，判断一个数是不是素数。
////利用上面实现的函数打印100到200之间的素数。
//void IsPrime(int m, int n);
//int main()
//{
//	int m = 100;
//	int n = 200;
//
//	IsPrime(m, n);
//	return 0;
//}
//void IsPrime(int x, int y)
//{
//	int temp;
//	int count = 0;//计数器
//	for (x=101 ; x < y; x +=2 )
//	{
//		for (temp = 2; temp < x/2; temp++)
//		{
//			if( x % temp == 0)
//			break;
//		}
//		if (temp >= x / 2)
//		{
//			count++;
//			printf("%d ", x);
//		}
//	}
//	printf("\n100到200之间共有[%d]个素数\n", count);
//}