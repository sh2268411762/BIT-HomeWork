//#include <stdio.h>
//
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
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
//	int n = 0;//�ڼ���
//	printf("Ҫ��ǰ����֮�ͣ�-->");
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



////дһ����������������һ���ַ��������ݡ�
//
//void reverse(char const* const s);
//
//int main()
//{
//	char str[] = { "Hello World" };
//	printf("ԭ�ַ�����%s\n\n", str);
//	printf("�����");
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
//	unsigned long pulArray[] = { 6,7,8,9,10 };//����һ���޷��ų��������� p
//	unsigned long* pulPtr;//����һ��ָ��pPtr
//	pulPtr = pulArray;//pPtr = p����
//	*(pulPtr + 3) += 3;
//	printf(" % d, % d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

