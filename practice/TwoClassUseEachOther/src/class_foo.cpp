/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#include "../include/class_foo.hpp"
#include "../include/class_bar.hpp"

#include <iostream>

namespace class_foo
{

foo::foo(double dt, bar& b, int n, bool flag)
        : m_dt(dt),
          m_b(&b)
{
    m_int = n;
}

void foo::foo_print_from_bar(int n)
{
    std::cout << m_dt << m_b <<m_int << m_flag;
    std::cout << "foo print using ";
    m_b->call_bar_print(n); // method of class barBase to do addition and pinting
}
}