//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable:6031)
////ʵ��һ��ͨѶ¼��
////ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
////�ṩ������
////�����ϵ����Ϣ
////ɾ��ָ����ϵ����Ϣ
////����ָ����ϵ����Ϣ
////�޸�ָ����ϵ����Ϣ
////��ʾ������ϵ����Ϣ
////���������ϵ��
////����������������ϵ��
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
//		if (1 == (strcmp((stu + i + 1)->name, (stu + i)->name)) && i < num )//s����stu
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
//			printf("���Խ����޸ģ�\n");
//			printf("��������ϵ��������");
//			scanf("%s", &(stu + i)->name);
//			printf("������\"%s\"���Ա�", (stu + i)->name);
//			scanf("%s", &(stu + i)->sex);
//			printf("������\"%s\"�����䣺", (stu + i)->name);
//			scanf("%d", &(stu + i)->age);
//			printf("������\"%s\"�ĵ绰��", (stu + i)->name);
//			scanf("%s", &(stu + i)->tele);
//			(stu + i)->tele[11] = '\0';
//			printf("������\"%s\"��סַ��", (stu + i)->name);
//			scanf("%s", &(stu + i)->address);
//		}
//	}
//	if (flag > 0)
//	{
//		printf("�޸���ϵ�ˣ�\"%s\"��\n", str);
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
//		printf("�޸���ϵ�ˣ�\"%s\"��\n", str);
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
//			printf("��ϵ��\"%s\"��ɾ��\n", str);
//			flag = -flag;
//		}
//	}
//	if (flag > 0)
//	{
//		printf("�޸���ϵ�ˣ�\"%s\"��\n", str);
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
//	printf("��������ϵ��������");
//	scanf("%s", &s1->name);
//	printf("������\"%s\"���Ա�", s1->name);
//	scanf("%s", &s1->sex);
//	printf("������\"%s\"�����䣺", s1->name);
//	scanf("%d", &s1->age);
//	printf("������\"%s\"�ĵ绰��", s1->name);
//	scanf("%s", &s1->tele);
//	s1->tele[11] = '\0';
//	printf("������\"%s\"��סַ��", s1->name);
//	scanf("%s", &s1->address);
//		
//	printf("�������������1(������ֵ��Ϊֹͣ���)\n");
//	scanf("%d", &i);
//	return i;
////	printf("%s  %s  %d  %s  %s\n", s1.name, s1.sex, s1.age, s1.tele, s1.address);
//}
//
//void menu()
//{
//	printf("\n   *****************^@^��ӭʹ��ͨѶ¼ϵͳ***********\n");
//	printf("           *           1 �����ϵ����Ϣ               *\n");//
//	printf("           *           2 ɾ��ָ����ϵ����Ϣ           *\n");//
//	printf("           *           3 ����ָ����ϵ����Ϣ           *\n");//
//	printf("           *           4 �޸�ָ����ϵ����Ϣ           *\n");//
//	printf("           *           5 ��ʾ������ϵ����Ϣ           *\n");//
//	printf("           *           6 ���������ϵ��               *\n");//
//	printf("           *           7 ����������������ϵ��         *\n");//
//	printf("           *           0 �˳�����ϵͳ                 *\n");
//	printf("\n   *****************^@^��ӭʹ��ͨѶ¼ϵͳ***********\n");
//}
//int main()
//{
////	Add stu[100];
////	Add stu[] = malloc(100 * siziof());
//
//
//	printf("������ͨѶ¼������-->");
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
//	printf("������ѡ�-->");
//	scanf("%d", &select);
//	char str[20];
//
//
//	while (select != 0)
//	{
//		switch (select)
//		{
//		case 1:
//			printf("�����ϵ����Ϣ\n");
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
//				printf("ͨѶ¼�������㣡����\n");
//			}
//			else
//			{
//				printf("\n�����ϣ�����\n");
//			}
//			break;
//
//		case 2:
//			printf("������Ҫɾ������ϵ��������-->");
//			scanf("%s", str);
//			Delete_Add(str, num, stu);
//			break;
//
//		case 3:
//			printf("������Ҫ���ҵ���ϵ��������-->");
//			scanf("%s", str);
//			Find_Add(str,num,stu);
//			printf("\n������ϣ�����\n");
//			break;
//
//		case 4:
//			printf("������Ҫ�޸ĵ���ϵ��������-->");
//			scanf("%s", str);
//			Mod_Add(str,num,stu);
//			printf("\n�޸���ϣ�����\n");
//			break;
//
//		case 5:
//			printf("��ʾ������ϵ����Ϣ��\n");
//			for (int j = 0; j < num; j++)
//			{
//				Print_Add(&stu[j], num);
//				printf("\n");
//			}
//			printf("\n��ʾ��ϣ�����\n");
//			break;
//
//		case 6:
//			printf("���������ϵ����Ϣ��\n");
//			for (int j = 0; j < num; j++)
//			{
//				Print_Add(&stu[j], num);
//				Empty_Add(num,stu);
//				printf("\n");
//			}
//			printf("\n�����ϣ�����\n");
//			break;
//
//		case 7:
//			printf("����\n");
//			Sort_Add(num,stu);
//			printf("\n�������\n");
//			break;
//
//		case 0:
//			exit(0);
//			break;
//		default :
//			printf("�����������������룡����\n");
//			break;
//		}
//		menu();
//		printf("������ѡ�-->");
//		scanf("%d", &select);
//	}
//	printf("�˳�����ϵͳ\n");
//	free(stu);
//	return EXIT_SUCCESS;
//}