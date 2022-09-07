#include "stack.h"

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.print();
    stack.pop();
    cout << stack.isEmpty() << endl;
    cout << stack.topData() << endl;
    stack.print();
}
