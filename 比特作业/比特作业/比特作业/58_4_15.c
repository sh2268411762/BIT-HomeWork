//#include <stdio.h>
//
////�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//int Fib_Rec(int x);//�ݹ�
//int Fib_NoRec(int x);//�ǵݹ�
//int main()
//{
//	int num = 0;
//	printf("������Ҫ���쳲��������е�λ����-->");
//	scanf("%d", &num);
//
//	printf("�ݹ飺쳲��������е�[%d]λ�� %d\n", num, Fib_Rec(num));
//	printf("�ǵݹ飺쳲��������е�[%d]λ�� %d\n", num, Fib_NoRec(num));
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




////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//int Pow(int x,int y);
//int main()
//{
//	int num = 0;
//	int k = 0;
//	printf("��������������ÿո�ָ�����-->");
//	scanf("%d%d", &num,&k);
//
//	printf("%d��%d�η���%d\n",num, k, Pow(num,k));
//	return 0;
//}
//int Pow(int x,int y)
//{
//	if (0 == y)//�κ�����0�η�����1
//	{
//		return 1;
//	}
//	if (1 == x)//1���κδη�����1
//	{
//		return 1;
//	}
//	else
//	{
//		return x * Pow(x, y - 1);
//	}
//}




////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(int x);
//int main()
//{
//	int n = 0;
//	printf("������һ������-->");
//	scanf("%d", &n);
//
//	printf("[%d]��λ����֮���ǣ�-->%d\n",n, DigitSum(n));
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
////��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������С�
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
//void reverse_string(char* string);
//int Strlen_Rec(const char* string);
//int main()
//{
//	char string[SIZE] = { "hello bit" };
//	printf("ԭ�ַ�����--> %s\n",string);
//
//	printf("�����--> ");
//	reverse_string(string);
//	//printf("�����--> %s\n", string);//�ǵݹ�
//	return 0;
//}
//int Strlen_Rec(const char* string)//�ǵݹ�
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
//	//�ݹ�
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
//	//�ǵݹ�
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
////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////���ַ����ĳ���
//int Strlen_Rec(const char* str);//�ݹ�
//int Strlen_NoRec(char* str);//�ǵݹ�
//int main()
//{
//	char str[SIZE] = { "hello bit" };
//
//	printf("�ݹ飺[%s]�ַ����ĳ�����%d\n", str, Strlen_Rec(str));
//	puts("");
//	printf("�ǵݹ飺[%s]�ַ����ĳ�����%d\n", str, Strlen_NoRec(str));
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
//	while (*str != '\0')//���ҵ�'\0'��ʱ������ѭ��
//	{
//		str ++;
//		count++;
//	}
//	return count;
//}



////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//int Fact_Rec(const int x);//x��ֵ���ɱ����ģ��ݹ�
//int Fact_NoRec( int x);//�ǵݹ�
//int main()
//{
//	int num = 0;
//	printf("������Ҫ����׳˵�����-->");
//	scanf("%d", &num);
//	puts("");
//
//	printf("[�ݹ�]��-->��[%d]�Ľ׳�\n",num);
//	printf("%d�Ľ׳˵���%d\n", num, Fact_Rec(num));
//	puts("");
//
//	printf("[�ǵݹ�]��-->��[%d]�Ľ׳�\n",num);
//	printf("%d�Ľ׳˵���%d\n", num, Fact_NoRec(num));
//	return 0;
//}
//int Fact_Rec(const int x)
//{
//	int ret;
//	if (x < 0)
//	{
//		printf("��������!!!ERROR������\n");
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
//		printf("��������!!!ERROR������\n");
//		return 0;
//	}
//	while (x > 0 )//x=0ʱ����ѭ��
//	{
//		ret *= x;
//		x--;
//	}
//	return ret;
//}



////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Print(unsigned int n);
//int main()
//{
//	int num = 0;
//	printf("������Ҫ����������-->");
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


////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//void PrintTable(int n);
//int main()
//{
//	int n = 0;
//	printf("������Ҫ����������-->");
//	scanf("%d", &n);
//	printf("��ӡ %d * %d �˷���\n",n,n);
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
////ʵ��һ�������������������������ݡ�
//void Swap(int* _x, int* _y);
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("������Ҫ���������������ÿո��������-->");
//	scanf("%d%d", &x, &y);
//	printf("����ǰ��x = %d,y = %d\n", x, y);
//
//
//	Swap(&x, &y);
//	printf("������x = %d,y = %d\n", x, y);
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


////ʵ�ֺ����ж�year�ǲ������ꡣ
//int IsLeap(int x);
//int main()
//{
//	int year = 0;
//	printf("��������Ҫ�ж��Ƿ����������ݣ�-->");
//	scanf("%d", &year);
//
//	int ret = IsLeap(year);
//	if (1 == ret)
//	{
//		printf("%d������", year);
//	}
//	else
//	{
//		printf("%d��������", year);
//	}
//	return 0;
//}
//int IsLeap(int x)
//{
//	if (((0 == x % 4) && (0 != x % 100)) || (0 == x % 400))//����һ�򣬰��겻���İ���һ��
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


////ʵ��һ���������ж�һ�����ǲ���������
////��������ʵ�ֵĺ�����ӡ100��200֮���������
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
//	int count = 0;//������
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
//	printf("\n100��200֮�乲��[%d]������\n", count);
//}