//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//
//#define N 128
////ģ��ʵ��strcat
//void My_strcat(char str1[], const char str2[], int i , int j)
//{
//	int k = j;
//	j += i;
//	int x = 0;
//	for (; i <= j; i++)
//	{
//		str1[i] = str2[x];
//		k++;
//		x++;
//	}
//	printf("ƴ�Ӻ�%s\n", str1);
//}
//int My_strlen(char str[N])
//{
//	int count = 0;
//	while (str [count] != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char s1[N] = " World��";
//	char s2[N] = "Hello";
//	int len2 = My_strlen(s2);
//	int len1 = My_strlen(s1);
////	int sz = strlen(s1);
//
//	printf("ƴ��ǰ��%s\n", s2);
//	My_strcat(s2, s1, len2, len1);
//	return EXIT_SUCCESS;
//}



////ģ��ʵ��strlen
//int My_strlen(const char str[N])
//{
//	int count = 0;
//	while (str [count] != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str1[N] = "Hello World!";
//	char str2[N] = "yusgftyshdjhch";
//
//	int ret1 = My_strlen(str1);
//	int ret2 = My_strlen(str2);
//	//int ret3 = strlen(str1);
//	//int ret4 = strlen(str2);
//	//printf("%d\n%d\n", ret3, ret4);
//
//	printf("str1 �ĳ����ǣ�%d\nstr2 �ĳ����ǣ�%d\n", ret1, ret2);
//	return EXIT_SUCCESS;
//}



//
////ģ��ʵ��strcmp
//
//int My_strcmp(const char* str1, const char* str2)
//{
//	int ret = 0;//������
//	while (!(ret = (unsigned char)*str1 - (unsigned char)*str2 && *str1))
//	{
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[N] = "Hello World!";
//	char str2[N] = "Hello WorlD!";//��д��ĸ ASCII ��ֵС��str2 Ӧ��С�� str2
//
//	int ret = My_strcmp(str1, str2);
//	if (0 == ret)
//	{
//		printf("�����ַ������\n");
//	}
//	else if (ret > 0)
//	{
//		printf("�ַ���\" %s \" > �ַ���\" %s \"\n", str1, str2);
//	}
//	else if (ret < 0)
//	{
//		printf("�ַ���\" %s \" < �ַ���\" %s \"\n", str1, str2);
//	}
//	else
//	{
//		printf("������֣�������군��\n");
//	}
//	return EXIT_SUCCESS;
//}


////ģ��ʵ��strcpy
//
//void My_strcpy(char* str1, const char* str2)
//{
//	assert(str2);
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//}
//int main()
//{
//	char str1[N] = "����ģ�euduiwhuife";
//	char str2[N] = "Hello World!";
//
//	printf("����ǰ��\n        %s\n        %s\n", str1, str2);
//
//	My_strcpy(str1, str2);
//	printf("���ƺ�\n        %s\n        %s\n", str1, str2);
//	return EXIT_SUCCESS;
//}





////ģ��ʵ��memcpy
//
//void My_memcpy(void* str1, const void* str2, int n)
//{
//	char* pstr1 = (char*)str1;
//	char* pstr2 = (char*)str2;
//
//	while ((n--) && ((*pstr1++) = (*pstr2++)))
//	{
//		;
//	}
//}
//int main()
//{
//	char str1[N] = { 0 };
//	char str2[N] = "Hello World!";
//
//	int n = 0;
//	printf("������Ҫ���Ƶ���λ�ã�-->");
//	scanf("%d", &n);
//	My_memcpy(str1, str2, n);
//	printf("%s\n", str1);
//	return EXIT_SUCCESS;
//}



////ģ��ʵ��strstr
//char* My_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	const char* str1_p = str1;
//	const char* start = str1_p;
//	const char* str2_p = str2;
//
//	while (*start)
//	{
//		str1_p = start;
//		str2_p = str2;
//		//�Ƚ�
//		while (*str1_p && str2_p && *str1_p == *str2_p)
//		{
//			str1_p++;
//			str2_p++;
//		}
//		//ֻҪ�����ַ�����Ⱦ�ͣ��������������һ���Ѿ��ҵ� '\0'
//		//*str2_0 == '\0' ˵���Ƚϳɹ�������start
//		if ('\0' == *str2_p)
//		{
//			return start;
//		}
//		start++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str[N] = "Hello World!";
//	char* p = NULL;
//
//	p = My_strstr(str, "W");
//	printf("%s\n", p);
//	return EXIT_SUCCESS;
//}