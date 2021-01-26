typedef unsigned long long Unlong;
typedef unsigned int Unint;
#define MAX 100
//结构体  学号、姓名、学院代码、性别代码、4门成绩
typedef struct Score {       //四门成绩
	Unint cscore;
	Unint mscore;
	Unint escore;
	Unint pscore;
}Score;
typedef struct Stu {         //学生信息
	char name[20];
	Unlong num;
	char sex;
	Unlong instnum;
	Score score;
}Stu;
typedef struct Inst {        //学院信息
	Unlong xueyuan;
	Stu stu[MAX];
	Unint number;
}Inst;
typedef struct Stu_Node {    //链表节点
	Stu stu;
	Stu* next;
}Stu_Node;

void password(void);        //验证密码
void repassword(void);      //设置密码
void menu(void);            //打开系统界面
void key(void);          //选择功能







