//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable:6031)
////实现一个通讯录；
////通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
////提供方法：
////添加联系人信息
////删除指定联系人信息
////查找指定联系人信息
////修改指定联系人信息
////显示所有联系人信息
////清空所有联系人
////以名字排序所有联系人
//
//struct Address_Book
//{
//	char name[20];
//	char sex[5];
//	int age;
//	char tele[12];
//	char address[30];
//};
//typedef struct Address_Book Add;
//
//void Sort_Add(int num, Add* stu)
//{
//	Add s2;
//	int i = 0;
//	for (; i < num; i++)
//	{
//		if (1 == (strcmp((stu + i + 1)->name, (stu + i)->name)) && i < num )//s大于stu
//		{
//			*s2.name = *(stu + i)->name;
//			*s2.sex = *(stu + i)->sex;
//			s2.age = (stu + i)->age;
//			*s2.tele = *(stu + i)->tele;
//			*s2.address = *(stu + i)->address;
//
//			*(stu + i)->name = *(stu + i + 1)->name;
//			*(stu + i)->sex = *(stu + i + 1)->sex;
//			(stu + i)->age = (stu + i + 1)->age;
//			*(stu + i)->tele = *(stu + i + 1)->tele;
//			*(stu + i)->address = *(stu + i + 1)->address;
//
//			*(stu + i + 1)->name = *s2.name;
//			*(stu + i + 1)->sex = *s2.sex;
//			(stu + i + 1)->age = s2.age;
//			*(stu + i + 1)->tele = *s2.tele;
//			*(stu + i + 1)->address = *s2.address;
//		}
//	}
//}
//
//void Empty_Add(int num, Add* stu)
//{
//	for (int i = 0; i < num; i++)
//	{
//		*(stu + i)->name = '\0';
//		*(stu + i)->sex = '\0';
//		(stu + i)->age = 0;
//		*(stu + i)->tele = '\0';
//		*(stu + i)->address = '\0';
//	}
//}
//
//
//void Mod_Add(const char* str, int num, Add* stu)
//{
//	int i = 0;
//	int flag = 1;
//	for (; i < num; i++)
//	{
//		if (0 == (strcmp(str, (stu + i)->name)))
//		{
//			flag = -flag;
//			printf("可以进行修改：\n");
//			printf("请输入联系人姓名：");
//			scanf("%s", &(stu + i)->name);
//			printf("请输入\"%s\"的性别：", (stu + i)->name);
//			scanf("%s", &(stu + i)->sex);
//			printf("请输入\"%s\"的年龄：", (stu + i)->name);
//			scanf("%d", &(stu + i)->age);
//			printf("请输入\"%s\"的电话：", (stu + i)->name);
//			scanf("%s", &(stu + i)->tele);
//			(stu + i)->tele[11] = '\0';
//			printf("请输入\"%s\"的住址：", (stu + i)->name);
//			scanf("%s", &(stu + i)->address);
//		}
//	}
//	if (flag > 0)
//	{
//		printf("无该联系人（\"%s\"）\n", str);
//	}
//}
//
//void Find_Add(const char* str, int num, Add* stu)
//{
//	int i = 0;
//	int flag = 1;
//	for (; i < num; i++)
//	{
//		if (0 == (strcmp(str, (stu + i)->name)))
//		{
//			flag = -flag;
//			printf("%s  %s  %d  %s  %s\n", (stu + i)->name, (stu + i)->sex, (stu + i)->age, (stu + i)->tele, (stu + i)->address);
//		}
//	}
//	if (flag > 0)
//	{
//		printf("无该联系人（\"%s\"）\n", str);
//	}
//}
//
//void Delete_Add(const char* str,int num, Add* stu)
//{
//	int i = 0;
//	int flag = 1;
//	for (; i < num; i++)
//	{
//		if (0 == (strcmp(str, (stu + i)->name)))
//		{
//			*(stu+i)->name = 0;
//			*(stu+i)->sex = 0;
//			(stu+i)->age = 0;
//			*(stu+i)->tele = 0;
//			*(stu+i)->address = 0;
//			printf("联系人\"%s\"已删除\n", str);
//			flag = -flag;
//		}
//	}
//	if (flag > 0)
//	{
//		printf("无该联系人（\"%s\"）\n", str);
//	}
//}
//
//void Print_Add(Add* s1,int num)
//{
//	printf("%s  %s  %d  %s  %s\n", s1->name, s1->sex, s1->age, s1->tele, s1->address);
//}
//
//int add_Add(Add* s1)
//{
//	int i = 0;
//	printf("请输入联系人姓名：");
//	scanf("%s", &s1->name);
//	printf("请输入\"%s\"的性别：", s1->name);
//	scanf("%s", &s1->sex);
//	printf("请输入\"%s\"的年龄：", s1->name);
//	scanf("%d", &s1->age);
//	printf("请输入\"%s\"的电话：", s1->name);
//	scanf("%s", &s1->tele);
//	s1->tele[11] = '\0';
//	printf("请输入\"%s\"的住址：", s1->name);
//	scanf("%s", &s1->address);
//		
//	printf("继续添加请输入1(其他数值视为停止添加)\n");
//	scanf("%d", &i);
//	return i;
////	printf("%s  %s  %d  %s  %s\n", s1.name, s1.sex, s1.age, s1.tele, s1.address);
//}
//
//void menu()
//{
//	printf("\n   *****************^@^欢迎使用通讯录系统***********\n");
//	printf("           *           1 添加联系人信息               *\n");//
//	printf("           *           2 删除指定联系人信息           *\n");//
//	printf("           *           3 查找指定联系人信息           *\n");//
//	printf("           *           4 修改指定联系人信息           *\n");//
//	printf("           *           5 显示所有联系人信息           *\n");//
//	printf("           *           6 清空所有联系人               *\n");//
//	printf("           *           7 以名字排序所有联系人         *\n");//
//	printf("           *           0 退出管理系统                 *\n");
//	printf("\n   *****************^@^欢迎使用通讯录系统***********\n");
//}
//int main()
//{
////	Add stu[100];
////	Add stu[] = malloc(100 * siziof());
//
//
//	printf("请输入通讯录容量：-->");
//	int num = 0;
//	scanf("%d", &num);
//
//	Add* stu = (Add*)calloc('\0', 76 * num);
//	if (stu == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//
//	for (int q = 0; q < num; q++)
//	{
//		*(stu + q)->name = '\0';
//		*(stu + q)->sex = '\0';
//		(stu + q)->age = 0;
//		*(stu + q)->tele = '\0';
//		*(stu + q)->address = '\0';
//	}
//	menu();
//	int count = 0;
//	int select = 0;
//
//	printf("请输入选项：-->");
//	scanf("%d", &select);
//	char str[20];
//
//
//	while (select != 0)
//	{
//		switch (select)
//		{
//		case 1:
//			printf("添加联系人信息\n");
//			int i = 0;
//			for (; i < num; i++)
//			{
//				int temp = 0;
//
//				if ('\0' == *(stu+i) ->name )
//				{
//					temp = add_Add(&stu[i]);
//					count++;
//					if (temp != 1)
//					{
//						break;
//					}
//				}
//				printf("\n");
//			}
//			if (((i == num) && (count == 0) )|| ((i == num) && (count == num)))
//			{
//				printf("通讯录容量不足！！！\n");
//			}
//			else
//			{
//				printf("\n添加完毕！！！\n");
//			}
//			break;
//
//		case 2:
//			printf("请输入要删除的联系人姓名：-->");
//			scanf("%s", str);
//			Delete_Add(str, num, stu);
//			break;
//
//		case 3:
//			printf("请输入要查找的联系人姓名：-->");
//			scanf("%s", str);
//			Find_Add(str,num,stu);
//			printf("\n查找完毕！！！\n");
//			break;
//
//		case 4:
//			printf("请输入要修改的联系人姓名：-->");
//			scanf("%s", str);
//			Mod_Add(str,num,stu);
//			printf("\n修改完毕！！！\n");
//			break;
//
//		case 5:
//			printf("显示所有联系人信息：\n");
//			for (int j = 0; j < num; j++)
//			{
//				Print_Add(&stu[j], num);
//				printf("\n");
//			}
//			printf("\n显示完毕！！！\n");
//			break;
//
//		case 6:
//			printf("清空所有联系人信息：\n");
//			for (int j = 0; j < num; j++)
//			{
//				Print_Add(&stu[j], num);
//				Empty_Add(num,stu);
//				printf("\n");
//			}
//			printf("\n清空完毕！！！\n");
//			break;
//
//		case 7:
//			printf("排序：\n");
//			Sort_Add(num,stu);
//			printf("\n排序完成\n");
//			break;
//
//		case 0:
//			exit(0);
//			break;
//		default :
//			printf("输入有误，请重新输入！！！\n");
//			break;
//		}
//		menu();
//		printf("请输入选项：-->");
//		scanf("%d", &select);
//	}
//	printf("退出管理系统\n");
//	free(stu);
//	return EXIT_SUCCESS;
//}