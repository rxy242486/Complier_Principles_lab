// Recursive_Descent.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdlib.h"
#include "Recursive_Descent.h"

int _tmain(int argc, _TCHAR* argv[])
{
	if(start())
	{
		printf("ʶ��ɹ���");
	}
	else
		printf("ʶ��ʧ�ܣ�");
	getchar();
	return 0;
}
//��ʼ���ź���E->TE'
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
//E'->ATE'|��
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
//T'->MFT'|��
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
//��ʵ���뵱ǰɨ��ķ��Ž���ƥ�䣬�ɹ�����1�����򷵻�0
int match(int current,int aim)
{
	return current==aim?1:0;
}
//��ȡ��һ��
int advance()
{
	current++;
	if(current<num)
		return 1;
	else
		return 0;
}