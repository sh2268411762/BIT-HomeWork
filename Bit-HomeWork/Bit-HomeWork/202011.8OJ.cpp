//#include <iostream>
//#include <string>
//using namespace std;
//
//
////找出字符串中第一个只出现一次的字符，并输出其索引，否则返回-1
//class Solution {
//public:
//	int firstUniqChar(string s)
//	{
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s.find_first_of(s[i]) == s.find_last_of(s[i]))
//				//从前往后查 == 从后往前查，如果返回的下标相等则只有一个该字符
//			{
//				return i;
//			}
//			if (i == s.size() - 1)
//			{
//				return -1;
//			}
//		}
//		return -1;
//	}
//};
//int main()
//{
//	string s;
//	cin >> s;
//	Solution s1;
//	int ret = s1.firstUniqChar(s);
//	cout << ret << endl;
//	return 0;
//}
//
//
//////计算字符串最后一个单词的长度，单词以空格隔开。
////int main()
////{
////    string s;
////    getline(cin, s);
////	if (!s.empty())
////	{
////        while (s[s.size() - 1] == ' ')  //末尾为空格，先清除空格
////        {
////            s.resize(s.size() - 1);
////        }
////        int pos = s.find_last_of(" ");
////        if (pos == -1)
////        {
////            //只有一个单词
////            cout << s.size() << endl;
////        }
////        else
////        {
////            string ret;
////            ret = s.substr(++pos, s.size());
////            cout << ret.size() << endl;
////        }
////
////	}
////    return 0;
////}
//
//
//////编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。
//////不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。
//////你可以假设数组中的所有字符都是 ASCII 码表中的可打印字符。
////template<typename vector>
////class Solution 
////{
////public:
////    void reverseString(vector<char>& s) 
////    {
////        if (s.empty())
////        {
////            return;
////        }
////        recursive(s, 0, s.size() - 1);
////    }
////
////    void recursive(vector<char>& s, int start, int end) {
////        if (start > end)   //前指针大于后指针函数退出
////            return;
////
////        recursive(s, start + 1, end - 1); //递归
////        swap(s[start], s[end]);//交换
////    }
////};
//
//
//
//
//////找出字符串中第一个只出现一次的字符
////int main()
////{
////	string s;
////
////	while (getline(cin, s))
////	{
////		for (int i = 0; i < s.size(); i++)
////		{
////			if (s.find_first_of(s[i]) == s.find_last_of(s[i]))   
////			//从前往后查 == 从后往前查，如果返回的下标相等则只有一个该字符
////			{
////				cout << s[i] << endl;
////				break;
////			}
////			if (i == s.size() - 1)
////			{
////				cout << -1 << endl;
////			}
////		}
////	}
////	return 0;
////}