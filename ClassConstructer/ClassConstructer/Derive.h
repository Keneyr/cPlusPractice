#pragma once

#include "Base.h"

class Derive
{
public:
	Derive(int y):base(3)
	{
		j = y;
		fuck = y;
	}
private:
	Base base; //�������������󣬱����ڹ��캯���ĳ�ʼ���б��ʼ����
				//��Ϊ�������ڴ���Derive�����ʱ�򣬻����Base�Ĺ���
	int j;
public:
	int fuck;
	int GetJ() { return j; }

};