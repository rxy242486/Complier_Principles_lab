#ifndef _RECURSIVE_DESCENT_H
#define _RECURSIVE_DESCENT_H
#include "stdio.h"
#define		NAME	1//identifier
#define		DIVOP	15//����
#define		PLUS	5//�Ӻ�
#define		MINUS	6//����
#define		STAR	7
#define		LP		38//������
#define		RP		39//������
#define		END		0
//����1
//int token[]={NAME,PLUS,NAME,END};
//int num = 4;
//����2
//int token[]={LP,NAME,STAR,NAME,RP,END};
//int num = 6;
//����3
int token[]={NAME,PLUS,NAME,STAR,NAME,END};
int num = 6;
//����4
//int token[] = {LP,NAME,STAR,NAME,END};
//int num = 5;
int current;

//��ʼ���ź���E->TE'
int start();
//E'->ATE'|��
int E1();
//T->FT'
int T();
//T'->MFT'|��
int T1();
//F->(E)|i
int F();
//A->+|-
int A();
//M->*|/
int M();
//��ʵ���뵱ǰɨ��ķ��Ž���ƥ�䣬�ɹ�����1�����򷵻�0
int match(int current,int aim);
//��ȡ�ļ���Ԫʽ����һ�飬����ID������ļ������򷵻�0
int advance();
#endif