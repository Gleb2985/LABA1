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
	virtual bool isEmpty() = 0;	// возвращает true, если стек пуст
	virtual int  top() = 0;		// возвращает верхний элемент без удаления из стека
};

