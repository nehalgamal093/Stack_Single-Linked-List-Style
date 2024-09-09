#include <iostream>
#include "Stack.h"
using namespace std;


int main()
{
	Stack<int> s;
	s.push(1);
	s.push(4);
	s.push(10);
 

	while (!s.empty()) {
		cout << s.top_() << endl;
		s.pop();
	}
}

