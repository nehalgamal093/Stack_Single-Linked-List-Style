#include "Stack.h"


template <class T>
Stack<T>::Stack() {
	size = 0;
	top = nullptr;
}

template <class T>
void Stack<T>::push(T element) {
	Node<T>* newNode = new Node<T>(element);
	size++;
	if (top == nullptr) {
		top = newNode;
		return;
	}
	newNode->next = top;
	top = newNode;
}

template <class T>
void Stack<T>::pop() {
	if (top == nullptr) {
		return;
	}
	size--;
	Node<T>* tmp = top;
	top = top->next;
	delete tmp;
}

template <class T>
T Stack<T>::top_() {
	return top->value;
}

template<class T>
bool Stack<T>::empty() {
	return (size == 0);
}

template <class T>
int Stack<T>::size_() {
	return size;
}

template<class T>
Stack<T>::~Stack() {
	while (size > 0) {
		pop();
	}
}