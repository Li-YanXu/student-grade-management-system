#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Stu_Manage_System.h"
void password(void)        
{
	FILE* fp;
	char Password[20], Password_[20];
	fopen_s(&fp, "Key.txt", "r");      //����򿪲����ļ�
	if (fp == NULL)
	{
		repassword();
	}
	else
	{
		
		fgets(Password, 20, fp);
		fclose(fp);
		int flag = 1;
		while (flag)
		{
			printf("���������룺\n");
			scanf_s("%s", Password_, 20);
			int i = 0;
			while (!(Password[i] == '\0' && Password_[i] == '\0'))
			{
				if (Password[i] == Password_[i])
				{
					i++;
					flag = 0;
				}
				else
				{
					printf("�������\n");
					flag = 1;
					system("pause");
					system("cls");
					break;
				}
			}
		}
		int operand, judge = 1;
		while (judge)      //��֤����Ĳ������Ƿ�Ϸ�����Ϊ�޸�����
		{
			system("cls");
			printf("�޸������밴 ��0��\n");
			printf("����ϵͳ�밴 ��1��\n");
			printf("�˳������밴 ��2��\n");
			scanf_s("%d", &operand);
			switch (operand) {
			case 0:
				repassword();
				break;
			case 1:
				system("cls");
				menu();
				judge = 0;
				break;
			case 2:
				exit(0);
			default:
				printf("��������\n");
				system("pause");
			}
		}
	}
}
void repassword(void)
{
	system("cls");
	printf("��������Ҫ���õ����룺\n");
	FILE* fp;
	char key[20];
	fopen_s(&fp, "Key.txt", "w");
	scanf_s("%s", key , 20);
	fwrite(key, 20, 1, fp);
	fclose(fp);
}
void menu()
{
	printf("************************��ѧ������ϵͳ��************************\n");
	printf("*\t\t  0.��������һ���˵�(�˳�)��\t\t       *\n");
	printf("*\t\t  1.��   ��ѧ����������   ��\t\t       *\n");
	printf("*\t\t  2.�� ��ѧ��ƽ���ɼ����� ��\t\t       *\n");
	printf("*\t\t  3.��   ��ѧԺ����ѧ��   ��\t\t       *\n");
	printf("*\t\t  4.��  ���ѧ��������Ϣ  ��\t\t       *\n");
	printf("*\t\t  5.��  �޸�ѧ���ɼ���Ϣ  ��\t\t       *\n");
	printf("*\t\t  6.��   ����������ѧ��   ��\t\t       *\n");
	printf("*\t\t  7.��    ɾ��ѧ����Ϣ    ��\t\t       *\n");
	printf("*\t\t  8.��    �޸�ϵͳ����    ��\t\t       *\n");
	printf("*\t\t  9.��  ���ҹҿ�ѧ����Ϣ  ��\t\t       *\n");
	printf("****************************************************************\n");
	printf("������0-9:\n");
}
void key(void)
{

}