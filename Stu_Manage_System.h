typedef unsigned long long Unlong;
typedef unsigned int Unint;
#define MAX 100
//�ṹ��  ѧ�š�������ѧԺ���롢�Ա���롢4�ųɼ�
typedef struct Score {       //���ųɼ�
	Unint cscore;
	Unint mscore;
	Unint escore;
	Unint pscore;
}Score;
typedef struct Stu {         //ѧ����Ϣ
	char name[20];
	Unlong num;
	char sex;
	Unlong instnum;
	Score score;
}Stu;
typedef struct Inst {        //ѧԺ��Ϣ
	Unlong xueyuan;
	Stu stu[MAX];
	Unint number;
}Inst;
typedef struct Stu_Node {    //����ڵ�
	Stu stu;
	Stu* next;
}Stu_Node;

void password(void);        //��֤����
void repassword(void);      //��������
void menu(void);            //��ϵͳ����
void key(void);          //ѡ����







