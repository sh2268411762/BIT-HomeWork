//#include <iostream>
//using namespace std;
//
//
//class A 
//{
//public:
//    int static add(int n) 
//    {
//        int temp = n;
//        temp && (temp += add(n - 1));
//        return temp;
//    }
//
//    int static mul(int n)
//    {
//
//        int temp = n;
//        temp && (temp *= mul(n - 1));
//        if (temp == 0)
//        {
//            return 1;
//        }
//        return temp;
//    }
//};
//
//int main()
//{
//    int num = A::add(8);
//    cout << num << endl;
//    num = A::mul(5);
//    cout << num << endl;
//	return EXIT_SUCCESS;
//}