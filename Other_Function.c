#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Stu_Manage_System.h"
void password(void)        
{
	FILE* fp;
	char Password[20], Password_[20];
	fopen_s(&fp, "Key.txt", "r");      //如果打开不了文件
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
			printf("请输入密码：\n");
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
					printf("密码错误！\n");
					flag = 1;
					system("pause");
					system("cls");
					break;
				}
			}
		}
		int operand, judge = 1;
		while (judge)      //验证输入的操作数是否合法或是为修改密码
		{
			system("cls");
			printf("修改密码请按 “0”\n");
			printf("进入系统请按 “1”\n");
			printf("退出程序请按 “2”\n");
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
				printf("输入有误！\n");
				system("pause");
			}
		}
	}
}
void repassword(void)
{
	system("cls");
	printf("请输入您要设置的密码：\n");
	FILE* fp;
	char key[20];
	fopen_s(&fp, "Key.txt", "w");
	scanf_s("%s", key , 20);
	fwrite(key, 20, 1, fp);
	fclose(fp);
}
void menu()
{
	printf("************************【学生管理系统】************************\n");
	printf("*\t\t  0.【返回上一级菜单(退出)】\t\t       *\n");
	printf("*\t\t  1.【   按学生姓名排序   】\t\t       *\n");
	printf("*\t\t  2.【 按学生平均成绩排序 】\t\t       *\n");
	printf("*\t\t  3.【   按学院查找学生   】\t\t       *\n");
	printf("*\t\t  4.【  添加学生及其信息  】\t\t       *\n");
	printf("*\t\t  5.【  修改学生成绩信息  】\t\t       *\n");
	printf("*\t\t  6.【   按姓名查找学生   】\t\t       *\n");
	printf("*\t\t  7.【    删除学生信息    】\t\t       *\n");
	printf("*\t\t  8.【    修改系统密码    】\t\t       *\n");
	printf("*\t\t  9.【  查找挂科学生信息  】\t\t       *\n");
	printf("****************************************************************\n");
	printf("请输入0-9:\n");
}
void key(void)
{

}