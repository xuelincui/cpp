#include <iostream>
#include "include/classes.hpp"

void callBaseB(void *p)
{
    BaseB *b = (BaseB *) p;
    b->methodB(0);
}

int main()
{
    auto child = new Child;
    callBaseB(child);
    return 0;
}