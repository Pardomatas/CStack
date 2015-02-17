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

main()
{
    char c;
    Stack acc(50);
    int x;

    while (cin.get(c))
    {
        x = 0;
        while(c == ' ')
            cin.get(c);
        if(c == '+')
            x = acc.pop() + acc.pop();
        if(c == '*')
            x = acc.pop() - acc.pop();
        while(c >= '0' && c <= '9')
        {
            x = 10*x + (c-'0');
            cin.get(c);
        }
        acc.push(x);
    }
    cout << acc.pop() << '\n';
}
