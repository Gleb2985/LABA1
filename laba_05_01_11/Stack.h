#pragma once
#include "Queue.h"
class Stack :
    public Queue
{
public:
	void push(int);	// ��������� ������� ������
	int  pop();		// ���������� ������� ������� ����� �������� �� �����

	bool isEmpty()	override;	// ���������� true, ���� ���� ����
	int  top()		override;	// ���������� ������� ������� ��� �������� �� �����
};

