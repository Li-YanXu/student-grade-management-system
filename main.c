#include<stdio.h>
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
int key()
{
	int down;
	scanf("%d", &down);
	switch (down)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
	}
}
int main()
{
	menu();
	key();

	return 0;
}