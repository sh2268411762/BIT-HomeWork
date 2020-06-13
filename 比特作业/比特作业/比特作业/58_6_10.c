//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//
//#define N 128
////模拟实现strcat
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
//	printf("拼接后：%s\n", str1);
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
//	char s1[N] = " World！";
//	char s2[N] = "Hello";
//	int len2 = My_strlen(s2);
//	int len1 = My_strlen(s1);
////	int sz = strlen(s1);
//
//	printf("拼接前：%s\n", s2);
//	My_strcat(s2, s1, len2, len1);
//	return EXIT_SUCCESS;
//}



////模拟实现strlen
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
//	printf("str1 的长度是：%d\nstr2 的长度是：%d\n", ret1, ret2);
//	return EXIT_SUCCESS;
//}



//
////模拟实现strcmp
//
//int My_strcmp(const char* str1, const char* str2)
//{
//	int ret = 0;//保存结果
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
//	char str2[N] = "Hello WorlD!";//大写字母 ASCII 码值小，str2 应该小于 str2
//
//	int ret = My_strcmp(str1, str2);
//	if (0 == ret)
//	{
//		printf("两个字符串相等\n");
//	}
//	else if (ret > 0)
//	{
//		printf("字符串\" %s \" > 字符串\" %s \"\n", str1, str2);
//	}
//	else if (ret < 0)
//	{
//		printf("字符串\" %s \" < 字符串\" %s \"\n", str1, str2);
//	}
//	else
//	{
//		printf("不会出现，到这就完蛋了\n");
//	}
//	return EXIT_SUCCESS;
//}


////模拟实现strcpy
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
//	char str1[N] = "随便打的：euduiwhuife";
//	char str2[N] = "Hello World!";
//
//	printf("复制前：\n        %s\n        %s\n", str1, str2);
//
//	My_strcpy(str1, str2);
//	printf("复制后：\n        %s\n        %s\n", str1, str2);
//	return EXIT_SUCCESS;
//}





////模拟实现memcpy
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
//	printf("请输入要复制到的位置：-->");
//	scanf("%d", &n);
//	My_memcpy(str1, str2, n);
//	printf("%s\n", str1);
//	return EXIT_SUCCESS;
//}



////模拟实现strstr
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
//		//比较
//		while (*str1_p && str2_p && *str1_p == *str2_p)
//		{
//			str1_p++;
//			str2_p++;
//		}
//		//只要两个字符不相等就停下来，或者其中一个已经找到 '\0'
//		//*str2_0 == '\0' 说明比较成功，返回start
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