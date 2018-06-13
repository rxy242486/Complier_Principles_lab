// LL_1_Parsing.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "LL_1_Parsing.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

	if(Parsing())
		cout<<"识别成功！"<<endl;
	else
		cout<<"识别失败"<<endl;
	system("pause");
	return 0;
}
bool Parsing()
{
	pStack.push(END);
	pStack.push(E);
	bool flag = true;
	int X = 0;
	while(flag)
	{
		//将栈顶元素的值存储在X中
		X = pStack.top();
		pStack.pop();
		//如果X是终结符号
		//if(X==E|X==E1|X==T|X==T1|X==F|X==A|X==M)
		if(X==NAME||X==DIVOP||X==PLUS||X==MINUS||X==STAR||X==LP||X==RP)
		{
			if(X==token[num])
				num++;
			else
				return false;
		}
		else
		{
			if(X==END)
			{
				if(X==token[num])
					flag=false;
				else
					return false;
			}
			else
			{
				switch(X)
				{
				case E:
					if(token[num]==NAME)
					{
						pStack.push(E1);
						pStack.push(T);
					}
					else if(token[num]==LP)
					{
						pStack.push(E1);
						pStack.push(T);
					}
					else
						return false;
					break;
				case E1:
					if(token[num]==PLUS||token[num]==MINUS)
					{
						pStack.push(E1);
						pStack.push(T);
						pStack.push(A);
					}
					else if(token[num]==RP||token[num]==END)
					{
						;
					}
					else
						return false;
					break;
				case T:
					if(token[num]==NAME)
					{
						pStack.push(T1);
						pStack.push(F);
					}
					else if(token[num]==LP)
					{
						pStack.push(T1);
						pStack.push(F);
					}
					else
						return false;
					break;
				case T1:
					if(token[num]==PLUS||token[num]==MINUS||token[num]==RP||token[num]==END)
					{
						;
					}
					else if(token[num]==STAR||token[num]==DIVOP)
					{
						pStack.push(T1);
						pStack.push(F);
						pStack.push(M);
					}
					else
						return false;
					break;
				case F:
					if(token[num]==NAME)
					{
						pStack.push(NAME);
					}
					else if(token[num]==LP)
					{
						pStack.push(RP);
						pStack.push(E);
						pStack.push(LP);
					}
					else
						return false;
					break;
				case A:
					if(token[num]==PLUS)
					{
						pStack.push(PLUS);
					}
					else if(token[num]==MINUS)
					{
						pStack.push(MINUS);
					}
					else
						return false;
					break;
				case M:
					if(token[num]==STAR)
					{
						pStack.push(STAR);
					}
					else if(token[num]==DIVOP)
					{
						pStack.push(DIVOP);
					}
					else
						return false;
					break;
				default:
					return false;
				}
			}
		}


	}
	return true;
}

