#pragma once
#include "Queue.h"
class List :
    public Queue
{
public:
	void push_back(int);	// вставляет элемент сверху
	int  pop_back();		// возвращает верхний элемент после удаления из стек
	void push_front(int);	// вставляет элемент сверху
	int  popfront();		// возвращает верхний элемент после удаления из стека

	bool isEmpty()	override;	// возвращает true, если стек пуст
	int  top()		override;	// возвращает верхний элемент без удаления из стека
};

