#ifndef _RECURSIVE_DESCENT_H
#define _RECURSIVE_DESCENT_H
#include "stdio.h"
#define		NAME	1//identifier
#define		DIVOP	15//除号
#define		PLUS	5//加号
#define		MINUS	6//减号
#define		STAR	7
#define		LP		38//左括号
#define		RP		39//右括号
#define		END		0
//测试1
//int token[]={NAME,PLUS,NAME,END};
//int num = 4;
//测试2
//int token[]={LP,NAME,STAR,NAME,RP,END};
//int num = 6;
//测试3
int token[]={NAME,PLUS,NAME,STAR,NAME,END};
int num = 6;
//测试4
//int token[] = {LP,NAME,STAR,NAME,END};
//int num = 5;
int current;

//开始符号函数E->TE'
int start();
//E'->ATE'|空
int E1();
//T->FT'
int T();
//T'->MFT'|空
int T1();
//F->(E)|i
int F();
//A->+|-
int A();
//M->*|/
int M();
//将实参与当前扫描的符号进行匹配，成功返回1，否则返回0
int match(int current,int aim);
//读取文件二元式的下一组，返回ID，如果文件结束则返回0
int advance();
#endif