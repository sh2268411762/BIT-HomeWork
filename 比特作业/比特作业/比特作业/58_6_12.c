//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//#define N 128
//
////模拟实现memmove
//char * My_memmove(void* dst, const void* src, size_t n)
//{
//	assert(dst);
//	assert(src);
//
//	const char* s_p = (char*)src;
//	char* d_p = (char*)dst;
//	//强转
//
//	if (d_p > s_p && d_p < n + s_p)
//	{
//		s_p = s_p + n - 1;
//		d_p = d_p + n - 1;
//
//		while (n > 0)
//		{
//			*d_p = *s_p;
//			d_p--;
//			s_p--;
//			n--;
//		}
//		return dst;
//	}
//	else
//	{
//		while (n > 0)
//		{
//			*d_p = *s_p;
//			d_p++;
//			s_p++;
//			n--;
//		}
//		return dst;
//	}
//}
//int main()
//{
//	char str1[N] = "abcdefg1234";
//	char str2[N] = "原始字符";
//
//	size_t len = strlen(str1) + 1;
//
//	//puts(str2);
//	//My_memmove(str2, str1, len);
//	////abcdefg1234
//	//puts(str2);
//
//	puts(str1);
//	//My_memmove(str1, str1 + 3, len);
//	////defg1234
//	//puts(str1);
//
//	My_memmove(str1 + 3, str1, len);
//	//memmove(str1 + 3, str1, len);
//	//abcabcdefg1234
//	puts(str1);
//
//	return EXIT_SUCCESS;
//}