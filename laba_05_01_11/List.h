#pragma once
#include "Queue.h"
class List :
    public Queue
{
public:
	void push_back(int);	// ��������� ������� ������
	int  pop_back();		// ���������� ������� ������� ����� �������� �� ����
	void push_front(int);	// ��������� ������� ������
	int  popfront();		// ���������� ������� ������� ����� �������� �� �����

	bool isEmpty()	override;	// ���������� true, ���� ���� ����
	int  top()		override;	// ���������� ������� ������� ��� �������� �� �����
};

