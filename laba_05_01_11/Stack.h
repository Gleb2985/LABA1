#pragma once
#include "Queue.h"
class Stack :
    public Queue
{
public:
	void push(int);	// вставляет элемент сверху
	int  pop();		// возвращает верхний элемент после удаления из стека

	bool isEmpty()	override;	// возвращает true, если стек пуст
	int  top()		override;	// возвращает верхний элемент без удаления из стека
};

