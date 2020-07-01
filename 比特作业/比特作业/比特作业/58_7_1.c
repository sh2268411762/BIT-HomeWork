//#include <stdio.h>
//#include <assert.h>
//
//
////模拟实现strncpy
//char* MyStrncpy(char* dst, const char* src, int n)
//{
//	assert(dst);
//	assert(src);
//	char* p = dst;
//	while (n--)
//	{
//		*p++ = *src++;
//	}
//	return dst;
//}
//int main()
//{
//	char s1[20] = "Hello ";
//	char* s2 = "World!uijhb";
//
//	printf("before: %s\n", s1);
//	MyStrncpy(s1, s2, 6);
//	printf("after : %s\n", s1);
//	return 0;
//}























////模拟实现strncat
//char* MyStrncat(char* str, const char* src, int count)
//{
//	char* p = str;
//	int n = 0;
//	assert(str != NULL && src != NULL);
//	while (*str != '\0')
//	{
//		str++;
//	}
//	while (n < count)
//	{
//		*str++ = *src++;
//		n++;
//	}
//	return p;
//};
//
//int main()
//{
//	char str[20] = "abcd";
//	char* src = "hello";
//	MyStrncat(str, src, 3);
//	printf("%s\n", str);
//	return 0;
//}