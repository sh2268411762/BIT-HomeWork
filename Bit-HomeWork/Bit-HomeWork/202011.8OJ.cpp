//#include <iostream>
//#include <string>
//using namespace std;
//
//
////�ҳ��ַ����е�һ��ֻ����һ�ε��ַ�������������������򷵻�-1
//class Solution {
//public:
//	int firstUniqChar(string s)
//	{
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s.find_first_of(s[i]) == s.find_last_of(s[i]))
//				//��ǰ����� == �Ӻ���ǰ�飬������ص��±������ֻ��һ�����ַ�
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
//////�����ַ������һ�����ʵĳ��ȣ������Կո������
////int main()
////{
////    string s;
////    getline(cin, s);
////	if (!s.empty())
////	{
////        while (s[s.size() - 1] == ' ')  //ĩβΪ�ո�������ո�
////        {
////            s.resize(s.size() - 1);
////        }
////        int pos = s.find_last_of(" ");
////        if (pos == -1)
////        {
////            //ֻ��һ������
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
//////��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� char[] ����ʽ������
//////��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
//////����Լ��������е������ַ����� ASCII ����еĿɴ�ӡ�ַ���
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
////        if (start > end)   //ǰָ����ں�ָ�뺯���˳�
////            return;
////
////        recursive(s, start + 1, end - 1); //�ݹ�
////        swap(s[start], s[end]);//����
////    }
////};
//
//
//
//
//////�ҳ��ַ����е�һ��ֻ����һ�ε��ַ�
////int main()
////{
////	string s;
////
////	while (getline(cin, s))
////	{
////		for (int i = 0; i < s.size(); i++)
////		{
////			if (s.find_first_of(s[i]) == s.find_last_of(s[i]))   
////			//��ǰ����� == �Ӻ���ǰ�飬������ص��±������ֻ��һ�����ַ�
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