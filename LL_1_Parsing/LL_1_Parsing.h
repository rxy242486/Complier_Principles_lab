#ifndef _LL_1_PARSING_H
#define _LL_1_PARSING_H
#include "stack"
#include "iostream"
using namespace std;

#define		NAME	1//identifier
#define		DIVOP	15//����
#define		PLUS	5//�Ӻ�
#define		MINUS	6//����
#define		STAR	7
#define		LP		38//������
#define		RP		39//������
#define		END		0
#define		E		200
#define		E1		201
#define		T		202
#define		T1		203
#define		F		204
#define		A		205
#define		M		206
//���봮
//int token[] = {NAME,PLUS,NAME,STAR,NAME,END};
//int token[] = {NAME,PLUS,NAME,PLUS,NAME,STAR,NAME,END};
//int token[] = {LP,NAME,PLUS,NAME,RP,STAR,NAME,END};
int token[] = {LP,NAME,PLUS,NAME,STAR,NAME,END};
//�﷨����ջ

stack<int> pStack;
//�������봮�ĵڼ����ַ�
int num = 0;
//LL��1������������
bool Parsing();
#endif