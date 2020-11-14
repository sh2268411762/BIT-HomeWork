//#include <iostream>
//#include <string>
//using namespace std;
//
//
////给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
//class Solution 
//{
//public:
//    bool isPalindrome(string s) 
//    {
//        s = toLowerCase(s);   //全部变为小写
//        int start = 0;
//        int end = s.size() - 1;
//
//        bool flag = true;
//        while (start < end)
//        {
//            if (s[start] != s[end])
//            {
//                return false;
//            }
//            start++;
//            end--;
//        }
//        return flag;
//    }
//
//    string toLowerCase(string s)
//    {
//        string ret = "";
//        for (int i = 0; i < s.size(); i++)
//        {
//            if ('A' <= s[i] && s[i] <= 'Z')
//            {
//                s[i] += ('a' - 'A');
//                ret += s[i];
//            }
//			else if (('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9'))
//			{
//				ret += s[i];
//			}
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    string s1 = "A man, a plan, a canal: Panama";
//    Solution s;
//    bool flag = s.isPalindrome(s1);
//    cout << flag << endl;
//
//    string s2 = "0P";
//    flag = s.isPalindrome(s2);
//    cout << flag << endl;
//    return 0;
//}
//
//
//
////class String
////{
////public:
////	String(const char* str = "")
////	{
////		if (str == nullptr)
////		{
////			str = "";
////		}
////		_str = new char[strlen(str) + 1];
////		strcpy(_str, str);
////	}
////
////	String(const String& s)
////		:_str(new char[strlen(s._str) + 1])
////	{
////		strcpy(_str, s._str);
////	}
////	String& operator=(const String& s)
////	{
////		if (this != &s)
////		{
////			char* temp = new char[strlen(s._str) + 1];
////			strcpy(temp, s._str);
////			_str = temp;
////		}
////		return *this;
////	}
////
////	~String()
////	{
////		if (_str)
////		{
////			delete[] _str;
////			_str = nullptr;
////		}
////	}
////
////	void strShow()
////	{
////		cout << _str << endl;
////	}
////private:
////	char* _str;
////};
////
////int main()
////{
////	String s1;
////	String s2("Hello");
////	String s3(s2);
////	String s4("aaaaaaaaaaaa");
////
////	s1.strShow();   //空串
////	s1 = s2;
////	s2.strShow();	//s2创建
////	s3.strShow();	//拷贝构造
////	s2 = s4;		//赋值
////	s2.strShow();
////	return 0;
////}