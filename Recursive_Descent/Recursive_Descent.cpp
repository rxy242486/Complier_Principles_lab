// Recursive_Descent.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "Recursive_Descent.h"

int _tmain(int argc, _TCHAR* argv[])
{
	if(start())
	{
		printf("识别成功！");
	}
	else
		printf("识别失败！");
	getchar();
	return 0;
}
//开始符号函数E->TE'
int start()
{
	if(token[current]==NAME|token[current]==LP)
		if(T())
			if(E1)
				return 1;
			else
				return 0;
		else
			return 0;
	else
		return 0;
}
//E'->ATE'|空
int E1()
{
	if(token[current]==PLUS|token[current]==MINUS)
		if(A())
			if(T())
				if(E1())
					return 1;
				else
					return 0;
			else
				return 0;
		else
			return 0;
	else
	{	
		if(token[current]==RP|token[current]==END)
			return 1;
		else
			return 0;
	}
}
//T->FT'
int T()
{
	if(token[current]==NAME|token[current]==LP)
		if(F())
			if(T1())
				return 1;
			else
				return 0;
		else
			return 0;
	else
		return 0;
}
//T'->MFT'|空
int T1()
{
	if(token[current]==STAR|token[current]==DIVOP)
		if(M())
			if(F())
				if(T1())
					return 1;
				else
					return 0;
			else
				return 0;
		else
			return 0;
	else
	{
		if(token[current]==RP|token[current]==END|token[current]==PLUS|token[current]==MINUS)
			return 1;
		else
			return 0;
	}
}
//F->(E)|i
int F()
{
	if(token[current]==LP)
		if(advance())
			if(start())
				if(token[current]==RP)
					if(advance())
						return 1;
					else
						return 0;
				else
					return 0;
			else
				return 0;
		else
			return 0;
	else
	{
		if(token[current]==NAME)
		{
			if(advance())
				return 1;
			else
				return 0;
		}
		else
			return 0;
	}
}
//A->+|-
int A()
{
	if(token[current]==PLUS)
	{
		advance();
		return 1;
	}
	else
		if(token[current]==MINUS)
		{
			advance();
			return 1;
		}
		else
			return 0;
}
//M->*|/
int M()
{
	if(token[current]==STAR)
	{
		advance();
		return 1;
	}
	else
		if(token[current]==DIVOP)
		{
			advance();
			return 1;
		}
		else
			return 0;
}
//将实参与当前扫描的符号进行匹配，成功返回1，否则返回0
int match(int current,int aim)
{
	return current==aim?1:0;
}
//读取下一个
int advance()
{
	current++;
	if(current<num)
		return 1;
	else
		return 0;
}