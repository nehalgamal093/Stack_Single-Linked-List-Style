#include "Node.h"


template <class T>
Node<T>::Node() {
	next = nullptr;
}

template <class T>
Node<T>::Node(T value) {
	this->value = value;
	next = nullptr;
}

template class Node<int>;
template class Node<char>;
template class Node<float>;