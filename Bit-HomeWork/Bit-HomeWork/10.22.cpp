//#include<stdio.h>
//#include<string.h>
//int Month[2][13] = 
//{
//    {0,31,28,31,30,31,30,31,31,30,31,30,31},  //平年
//    {0,31,29,31,30,31,30,31,31,30,31,30,31}   //闰年
//};
//int Year[2] = { 365,366 };
//
//int main() 
//{
//    int year, month, day, number, m;
//    (void)scanf("%d", &m);
//    while (m--) 
//    {   //循环次数 
//        (void)scanf("%d%d%d%d", &year, &month, &day, &number);  //输入日期和加上天数
//        int y;
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
//        {    //闰年
//            y = 1;
//        }
//        else y = 0; //平年
//        for (int i = 0; i < month; i++) 
//        {
//            number += Month[y][i];
//        }
//        number += day;  //number加前面的天数
//        month = 0;
//        if (number > Year[y]) 
//        { //大于这一年的天数则进入下一年
//            year++;
//            number -= Year[y];//剩余天数
//            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
//            {
//                y = 1;
//            }
//            else y = 0;
//        }
//        while (number > Month[y][month]) //按月添加
//        {
//            number -= Month[y][month];
//            month++;
//        }
//        day = number;
//        printf("%04d-%02d-%02d\n", year, month, day);//格式化输出
//    }
//
//    return  0;
//}

//#include<stdio.h>
//#include<string.h>
//int Month[2][13] = 
//{
//    {0,31,28,31,30,31,30,31,31,30,31,30,31},  //平年
//    {0,31,29,31,30,31,30,31,31,30,31,30,31}   //闰年
//};
//int Year[2] = { 365,366 };
//
//int main() 
//{
//    int year, month, day, number, m;
//    (void)scanf("%d", &m);
//    while (m--) 
//    {   //循环次数 
//        (void)scanf("%d%d%d%d", &year, &month, &day, &number);  //输入日期和加上天数
//        int y;
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
//        {    //闰年
//            y = 1;
//        }
//        else y = 0; //平年
//        for (int i = 0; i < month; i++) 
//        {
//            number += Month[y][i];
//        }
//        number += day;  //number加前面的天数
//        month = 0;
//        if (number > Year[y]) 
//        { //大于这一年的天数则进入下一年
//            year++;
//            number -= Year[y];//剩余天数
//            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
//            {
//                y = 1;
//            }
//            else y = 0;
//        }
//        while (number > Month[y][month]) //按月添加
//        {
//            number -= Month[y][month];
//            month++;
//        }
//        day = number;
//        printf("%04d-%02d-%02d\n", year, month, day);//格式化输出
//    }
//
//    return  0;
//}



//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int Month[2][13] =
//{
//    {0,31,28,31,30,31,30,31,31,30,31,30,31},  //平年
//    {0,31,29,31,30,31,30,31,31,30,31,30,31}   //闰年
//};
//int Year[2] = { 365,366 };
//int main()
//{
//    int m = 0;
//    int n = 0;
//    while (1)
//    {
//        cin >> m >> n;
//        if (m < 1 || m > 3000 || n < 1 || n > 366) //退出条件
//        {
//            break;
//        }
//        else
//        {
//            int y = 0;
//            int month = 0;
//
//            if ((m % 4 == 0 && m % 100 != 0) || (m % 400 == 0))
//            {    //闰年
//                y = 1;
//            }
//            else
//            {
//                y = 0; //平年
//            }
//
//            while (n > Month[y][month])
//            {
//                n -= Month[y][month];
//                month++;
//            }
//            printf("%04d-%02d-%02d\n", m, month, n);//格式化输出
//        }
//    }
//    return 0;
//}



//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int Month[2][13] =
//{
//	{0,31,28,31,30,31,30,31,31,30,31,30,31},  //平年
//	{0,31,29,31,30,31,30,31,31,30,31,30,31}   //闰年
//};
//int Year[2] = { 365,366 };
//int main()
//{
//	int m = 0;
//	int n = 0;
//	cin >> m >> n;
//	int y = 0;
//	int month = 0;
//
//	if ((m % 4 == 0 && m % 100 != 0) || (m % 400 == 0))
//	{    //闰年
//		y = 1;
//	}
//	else
//	{
//		y = 0; //平年
//	}
//
//	while (n > Month[y][month])
//	{
//		n -= Month[y][month];
//		month++;
//	}
//	printf("%04d-%02d-%02d\n", m, month, n);//格式化输出
//	return 0;
//}




//#include<stdio.h>
//
//int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//int run(int y) {
//    if (y % 4 != 0)
//        return 0;
//    else if (y % 100 != 0)
//        return 1;
//    else if (y % 400 == 0)
//        return 1;
//    else
//        return 0;
//
//}
//
//int main() {
//    int date[2];
//    int y[2], m[2], d[2];
//    int i, j, sum;
//    while (scanf("%d", &date[0]) != EOF && scanf("%d", &date[1]) != EOF) //输入两个日期
//    {
//        i = 2; sum = 0;
//        if (date[1] < date[0]) //1>0
//        {
//            int t = date[1];
//            date[1] = date[0];
//            date[0] = t;
//        }
//        while (i) //确定年月日
//        {
//            i--;
//            y[i] = date[i] / 10000;
//            m[i] = (date[i] - y[i] * 10000) / 100;
//            d[i] = date[i] % 100;
//        }
//        for (j = y[0] + 1; j < y[1]; j++) //年份相同
//        {
//            if (run(j))
//                sum = sum + 366;
//            else
//                sum = sum + 365;
//        }
//        if (y[0] == y[1]) 
//        {
//            if (run(y[0]) && m[0] < 3 && m[0]>2)//闰年2月份
//            {
//                sum++;
//            }
//            for (j = m[0]; j < m[1]; j++) 
//            {
//                sum += month[j];
//            }
//            sum = sum - d[0] + d[1];
//        }
//        else 
//        {
//            if (m[0] < 3 && run(y[0]))
//                sum++;
//            if (m[1] > 2 && run(y[1]))
//                sum++;
//            for (j = m[0]; j < 13; j++)
//                sum += month[j];
//            for (j = 1; j < m[1]; j++)
//                sum += month[j];
//            sum = sum - d[0] + d[1];
//        }
//        printf("%d\n", sum + 1);
//    }
//}




//#include <iostream>
//using namespace std;
//
//
//int Month[2][13] =
//{
//	{0,31,28,31,30,31,30,31,31,30,31,30,31},  //平年
//	{0,31,29,31,30,31,30,31,31,30,31,30,31}   //闰年
//};
//int Year[2] = { 365,366 };


//class Date
//{
//public:
//	explicit Date(int _date)
//		:date(_date)
//		, year(_date / 10000)
//		, month((_date - (_date / 10000) * 10000) / 100)
//		, day(_date % 100)
//	{
//
//	}
//
//	bool operator==(const Date& d)
//	{
//		return this->year == d.year && this->month == d.month && this->day == d.day;
//	}
//
//	bool operator>(const Date& d)
//	{
//		if (this->year > d.year)
//		{
//			return true;
//		}
//		else if (this->year < d.year)
//		{
//			return false;
//		}
//		else
//		{
//			if (this->month > d.month)
//			{
//				return true;
//			}
//			else if (this->month < d.month)
//			{
//				return false;
//			}
//			else
//			{
//				if (this->day > d.day)
//				{
//					return true;
//				}
//				else
//				{
//					return false;
//				}
//			}
//		}
//	}
//
//	int operator-(const Date& d)
//	{
//		if (*this == d)
//		{
//			return 0;
//		}
//		int ret = 1;
//		int y1, y2;
//		if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0))
//		{    //闰年
//			y1 = 1;
//		}
//		else
//		{
//			y1 = 0; //平年
//		}
//		if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
//		{    //闰年
//			y2 = 1;
//		}
//		else
//		{
//			y2 = 0; //平年
//		}
//
//		if (this->month > d.month)
//		{
//			ret += Year[y2];
//			int num1 = this->day;
//			int num2 = d.day;
//			for (int i = 0; i < this->month; i++)
//			{
//				num1 += Month[y1][i];
//			}
//			for (int i = 0; i < d.month; i++)
//			{
//				num2 += Month[y1][i];
//			}
//			if (num1 < num2)
//			{
//				int temp = num1;
//				num1 = num2;
//				num2 = temp;
//			}
//			return ret += (num1 - num2);
//
//		}
//		else if (this->month < d.month)
//		{
//			ret += Year[y2];
//			int num1 = this->day;
//			int num2 = d.day;
//			for (int i = 0; i < this->month; i++)
//			{
//				num1 += Month[y1][i];
//			}
//			for (int i = 0; i < d.month; i++)
//			{
//				num2 += Month[y1][i];
//			}
//			if (num2 < num1)
//			{
//				int temp = num1;
//				num1 = num2;
//				num2 = temp;
//			}
//			return ret -= (num2 - num1);
//		}
//		else
//		{
//			ret = Year[y2];
//			if (this->day > d.day)
//			{
//				return ret += this->day - d.day;
//			}
//			else
//			{
//				return ret += d.day - this->day;
//			}
//		}
//
//	}
//
//
//
//
//	int date;
//	int year;
//	int month;
//	int day;
//};

//class Date1
//{
//public:
//	int year;
//	int month;
//	int day;
//
//	Date1(int _year, int _month, int _day)
//		:year(_year)
//		, month(_month)
//		, day(_day)
//	{
//
//	}
//
//	int outDay()
//	{
//		int y;
//		if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0))
//		{    //闰年
//			y = 1;
//		}
//		else
//		{
//			y = 0; //平年
//		}
//		if (this->year < 1 || this->year > 9999 || this->month < 1 || this->month >12 || this->day<1 || this->day>Month[y][this->month])
//		{
//			return -1;
//		}
//		int ret = this->day;
//		for (int i = 0; i < this->month; i++)
//		{
//			ret += Month[y][i];
//		}
//		return ret;
//	}
//};
//int main()
//{
//	int year, month, day;
//	while (scanf("%d\n%d\n%d\n", &year, &month, &day) != EOF)
//	{
//		Date1 d(year, month, day);
//		cout << d.outDay() << endl;
//	}
//
//
//	//int date1, date2;
//	//cin >> date1;
//	//cin >> date2;
//	//Date d1(date1);
//	//Date d2(date2);
//	//int y;
//
//	//if (d2 > d1)
//	//{
//	//	Date temp = d1;
//	//	d1 = d2;
//	//	d2 = temp;
//	//}
//	//int ret = d1 - d2;
//	//if (d1.year == d2.year)
//	//{
//	//	if ((d1.year % 4 == 0 && d1.year % 100 != 0) || (d1.year % 400 == 0))
//	//	{    //闰年
//	//		y = 1;
//	//	}
//	//	else
//	//	{
//	//		y = 0; //平年
//	//	}
//	//	ret -= Year[y];
//	//}
//	//cout << ret << endl;
//	return 0;
//}



