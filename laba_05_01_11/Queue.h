#pragma once
class Queue
{
protected:
	size_t size = 0;
	class Element
	{
		int data = 0;
		int* prev = nullptr;
		int* next = nullptr;
	};

public:
	virtual bool isEmpty() = 0;	// ���������� true, ���� ���� ����
	virtual int  top() = 0;		// ���������� ������� ������� ��� �������� �� �����
};

