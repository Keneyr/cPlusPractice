#pragma once

class Other
{
public:
	Other(int x, int y) :c(x), d(y)
	{
		i = -1;
	}
private:
	int i;
	const int c; //�����ڹ��캯����/��Ա��ʼֵ�趨���б��г�ʼ��
	int &d; //�����ڹ��캯����/��Ա��ʼֵ�趨���б��г�ʼ��

public:
	int Getd() { return d; }
	int Getc() { return c; }
};