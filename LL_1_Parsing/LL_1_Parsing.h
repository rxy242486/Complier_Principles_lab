#ifndef _LL_1_PARSING_H
#define _LL_1_PARSING_H
#include "stack"
#include "iostream"
using namespace std;

#define		NAME	1//identifier
#define		DIVOP	15//除号
#define		PLUS	5//加号
#define		MINUS	6//减号
#define		STAR	7
#define		LP		38//左括号
#define		RP		39//右括号
#define		END		0
#define		E		200
#define		E1		201
#define		T		202
#define		T1		203
#define		F		204
#define		A		205
#define		M		206
//输入串
//int token[] = {NAME,PLUS,NAME,STAR,NAME,END};
//int token[] = {NAME,PLUS,NAME,PLUS,NAME,STAR,NAME,END};
//int token[] = {LP,NAME,PLUS,NAME,RP,STAR,NAME,END};
int token[] = {LP,NAME,PLUS,NAME,STAR,NAME,END};
//语法分析栈

stack<int> pStack;
//分析输入串的第几个字符
int num = 0;
//LL（1）表驱动程序
bool Parsing();
#endif