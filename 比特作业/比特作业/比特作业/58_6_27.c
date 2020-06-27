//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//
////找单身狗
//
//void Find(int arr[], int num, int* x, int* y)
//{
//	assert(arr);
//	assert(num > 0);
//	assert(x);
//	assert(y);
//
//	//完成整体异或
//	int ret = arr[0];
//	for (int i = 1; i < num; i++)
//	{
//		ret = arr[i];
//	}
//
//	int pos = 1;
//	while (1)
//	{
//		if (ret  & pos )
//		{
//			break;
//		}
//		pos <<= 1;
//	}
//
//	*x = 0;
//	*y = 0;
//	//分组
//	for (int i = 0; i < num; i++)
//	{
//		if (arr[i] & pos)
//		{
//			*x ^= arr[i];
//		}
//		else
//		{
//			*y ^= arr[i];
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,2,5,4,3,1,6 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//
//	int x = 0;
//	int y = 0;
//	Find(arr, num, &x, &y);
//
//	printf("x:%d    y:%d\n", x, y);
//	return EXIT_SUCCESS;
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//#include <limits.h>
//#include <ctype.h>
////模拟实现atoi
////将字符串转为整型
//
//
//int status = 0;
//int My_atoi(const char* str)
//{
//	assert(str);
//
//	////code1
//	//int ret = 0;
//	//while (*str)
//	//{
//	//	ret = ret * 10 + (*str - '0');
//	//	str++;
//	//}
//	//return ret;
//
//
//
//	//code2
//	int flag = 1;
//	long long ret = 0;
//
//	int i = 0;
//	while (isspace(str[i]))
//	{
//		i++;
//	}
//	if (str[i] == '-')
//	{
//		flag = -flag;
//		i++;
//	}
//
//	while (str[i])
//	{
//		if (isdigit(str[i]))
//		{
//			ret = ret * 10 + flag * (str[i] - '0');
//			if ((ret) > INT_MAX || ret < INT_MIN)
//			{
//				status = 1;
//				break;
//			}
//		}
//		else
//		{
//			status = 2;
//			break;
//		}
//		i++;
//	}
//	if (str[i] != '\0')
//	{
//		return -1;
//	}
//	
//	return (int)ret;
//}
//
//
//int main()
//{
//	const char* str = "784567";
//
//	int ret = My_atoi(str);
//	printf("status:%d   ret:%d\n",status,ret);
//	return EXIT_SUCCESS;
//}