#pragma once
#include "Node.h"

template <class T>
class Stack
{
	Node<T>* top;
	int size;
public:
	Stack();
	void push(T element);
	void pop();
	T top_();
	bool empty();
	int size_();
	~Stack();
};

template class Stack<int>;
template class Stack<char>;
template class Stack<float>;