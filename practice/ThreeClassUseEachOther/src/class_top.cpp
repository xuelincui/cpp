/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#include "../include/class_top.hpp"

using namespace class_bar::class_bar_2;
using namespace class_foo;


top::top(bar &b)
{
    m_foo = foo(3, b);
    init();
}

void top::init()
{
    bar b;

}


void top::top_print(int n)
{

    m_foo.foo_print_from_bar(n);
}

