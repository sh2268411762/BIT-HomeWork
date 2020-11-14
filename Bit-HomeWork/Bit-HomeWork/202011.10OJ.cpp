#include <iostream>
#include <string>
using namespace std;



//class Solution {
//public:
//    string multiply(string num1, string num2) 
//    {
//        int l1 = num1.size();
//        int l2 = num2.size();
//        string res(l1 + l2, '0');
//        for (int i = l1 - 1; i >= 0; i--) 
//        {
//            for (int j = l2 - 1; j >= 0; j--) 
//            {
//                int tmp = (res[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0');
//                res[i + j + 1] = tmp % 10 + '0';
//                res[i + j] += tmp / 10;
//            }
//        }
//        for (int i = 0; i < l1 + l2; i++) 
//        {
//            if (res[i] != '0') return res.substr(i);
//        }
//        return "0";
//    }
//};
//int main()
//{
//    Solution s;
//    cout << s.multiply("222", "99999");
//    return 0;
//}

////将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 
////数值为0或者字符串不是一个合法的数值则返回0
//
//class Solution 
//{
//public:
//    int StrToInt(string str) 
//    {
//        int n = str.size(), s = 1;
//        long long res = 0;
//        if (!n) return 0;
//        if (str[0] == '-') s = -1;
//        for (int i = (str[0] == '-' || str[0] == '+') ? 1 : 0; i < n; ++i) 
//        {
//            if (!('0' <= str[i] && str[i] <= '9'))
//            {
//                return 0;
//            }
//            res = (res << 1) + (res << 3) + (str[i] & 0xf);//res=res*10+str[i]-'0';
//        }
//        return res * s;
//    }
//};
//int main()
//{
//    Solution s;
//    cout << s.StrToInt("11112222");
//
//	return 0;
//}
//
////给定一个字符串 s 和一个整数 k，你需要对从字符串开头算起的每隔 2k 个字符的前 k 个字符进行反转。
////如果剩余字符少于 k 个，则将剩余字符全部反转。
////如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
//class Solution 
//{
//public:
//    string reverseStr(string s, int k) 
//    {
//        int i = 0;
//        while (i < s.size()) 
//        {
//            if (i + k > s.size()) 
//            {
//                reverse(s.begin() + i, s.end());
//            }
//            else 
//            {
//                reverse(s.begin() + i, s.begin() + i + k);
//            }
//            i += 2 * k;
//        }
//        return s;
//    }
//};
//int main()
//{
//    Solution s;
//    cout << s.reverseStr("abcdefg", 2) << endl;
//    return 0;
//}
//
////给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
//class Solution 
//{
//public:
//    string reserved(string s)
//    {
//        int left = 0, right = s.size() - 1;
//        while (left < right)
//        {
//            char ch = s[left];
//            s[left] = s[right];
//            s[right] = ch;
//
//            left++;
//            right--;
//        }
//        return s;
//    }
//    string reverseWords(string s) 
//    {
//        if (s.empty())
//        {
//            return "";
//        }
//        string ret = "";
//        string ss = "";
//        s += ' ';
//        int n = s.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (s[i] == ' ')
//            {
//                ret += reserved(ss);
//                ret += ' ';
//                ss = "";
//                continue;
//            }
//            else
//            {
//                ss += s[i];
//            }
//        }
//        ret.erase(ret.end());
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    string str = "Let's take LeetCode contest";
//    cout << s.reverseWords(str) << endl;
//    return 0;
//}
//
//
////给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。
////                                                     差
//class Solution 
//{
//public:
//    string addStrings(string num1, string num2) 
//    {
//        //num1位数大于num2
//        if (num1.size() < num2.size())
//        {
//            num1.swap(num2);
//        }
//
//        string ret(num1.size() + 1, '0');
//        char step = 0;
//        for (int iL = num1.size() - 1, iR = num2.size() - 1; iL >= 0; iL--, iR--)
//        {
//            char ch = num1[iL] - '0' + step;
//            if (iR >= 0)
//            {
//                ch += num2[iR] - '0';
//            }
//            step = 0;
//            if (ch >= 10)
//            {
//                step = 1;
//                ch -= 10;
//            }
//            ret[iL + 1] += ch;
//
//        }
//
//        if (1 == step)
//        {
//            ret[0] += step;
//        }
//        else
//        {
//            ret.erase(ret.begin());
//        }
//        return ret;
//    }
//
//    string minuStrings(string num1, string num2)
//    {
//        //num1位数大于num2
//        if (num1.size() < num2.size())
//        {
//            num1.swap(num2);
//        }
//
//        string ret(num1.size(), '0');
//        char step = 0;
//        for (int iL = num1.size() - 1, iR = num2.size() - 1; iL >= 0; iL--, iR--)
//        {
//            char ch = num1[iL] - '0' - step;
//            step = 0;
//
//            if (iR >= 0)
//            {
//				if ((num1[iL] - '0') < (num2[iR] - '0'))
//                {
//                    step = 1;
//                    ch += 10;
//                }
//                ch -= num2[iR] - '0';
//            }
//            if (iR < 0 && ch < 0)
//            {
//                step = 1;
//                ch += 10;
//            }
//
//            ret[iL] += ch;
//        }
//        if (step == 1)
//        {
//            ret[0] -= 1;
//        }
//
//        while (ret[0] == '0')
//        {
//            ret.erase(ret.begin());
//        }
//
//        return ret;
//    }
//};
//int main()
//{
//    Solution s1;
//    cout << s1.addStrings("9999", "999999999") << endl;
//    cout << s1.minuStrings("999", "234") << endl;
//    cout << s1.minuStrings("1000", "1") << endl;
//    cout << s1.minuStrings("1000", "999") << endl;
//
//    return 0;
//}