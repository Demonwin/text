#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 描述一个学生- 一些数据
// 名字、年龄、电话、性别


// struct 结构体关键字；   Stu - 结构体标签；  struct Stu - 结构体类型
//struct Stu     
//{
//	//成员变量 
//	char name[20];
//	short age;
//	char number[12];
//	char sex[5];
//}s1, s2, s3;  //s1,s2,s3 是三个全局的结构体变量


typedef struct Stu     //区分开来这两种写法。这种事新定义这个结构体类型名为 Stu 
{
	//成员变量 
	char name[20];
	short age;
	char number[12];
	char sex[5];
}Stu;                
  
void Print(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->number);
	printf("sex: %s\n", ps->sex);
}

int  main()    //结构体
{

	//struct Stu s;  //局部变量 
	Stu s2 = { "向彭", 22 ,"10086", "男" };    //结构体初始化
	printf("%s\n", s2.name);                 // 打印结构体
	printf("%d\n", s2.age);
	printf("%s\n", s2.number);
	printf("%s\n", s2.sex);

	Print(&s2);  //调用结构体传址要比直接传结构体要更好，因为不会开辟新的空间
	return 0;
}
