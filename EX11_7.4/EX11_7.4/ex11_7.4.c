#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ����һ��ѧ��- һЩ����
// ���֡����䡢�绰���Ա�


// struct �ṹ��ؼ��֣�   Stu - �ṹ���ǩ��  struct Stu - �ṹ������
//struct Stu     
//{
//	//��Ա���� 
//	char name[20];
//	short age;
//	char number[12];
//	char sex[5];
//}s1, s2, s3;  //s1,s2,s3 ������ȫ�ֵĽṹ�����


typedef struct Stu     //���ֿ���������д�����������¶�������ṹ��������Ϊ Stu 
{
	//��Ա���� 
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

int  main()    //�ṹ��
{

	//struct Stu s;  //�ֲ����� 
	Stu s2 = { "����", 22 ,"10086", "��" };    //�ṹ���ʼ��
	printf("%s\n", s2.name);                 // ��ӡ�ṹ��
	printf("%d\n", s2.age);
	printf("%s\n", s2.number);
	printf("%s\n", s2.sex);

	Print(&s2);  //���ýṹ�崫ַҪ��ֱ�Ӵ��ṹ��Ҫ���ã���Ϊ���Ὺ���µĿռ�
	return 0;
}
