#pragma once

template <class T>
struct Node
{
	T value;
	Node* next;
	Node();
	Node(T value);
};

