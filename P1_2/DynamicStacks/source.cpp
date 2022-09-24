#include "stack.h"

int main()
{
	stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.print();
	stack.pop();
	cout << stack.is_empty() << endl;
	cout << stack.top_data() << endl;
	stack.print();
}
