#include <iostream>

using namespace std;

typedef int itemType;
class Stack
{
private:
    itemType *stack;
    int p;
public:
    Stack(int max = 100)
    {
        stack = new itemType[max];
        p = 0;
    }
    ~Stack()
    {
        delete stack;
    }
    inline void push(itemType v)
    {
        stack[p++] = v;
    }
    inline itemType pop()
    {
        return stack[--p];
    }
    inline int empty()
    {
        return !p;
    }
};
