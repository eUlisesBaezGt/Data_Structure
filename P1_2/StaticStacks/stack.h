#include <iostream>
#define size 4

using namespace std;

class stack{
    public:
        stack();
        ~stack();
        void push(int);
        int pop();
        void show();
        int top();

    private:
        int min, max, count;
        int *content;
};
