/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#include "../include/class_foo.hpp"
#include "../include/class_bar.hpp"

#include <iostream>

namespace class_foo
{
class foo;


void foo::foo_print_from_bar()
{
    std::cout << "foo print using ";
    m_b->bar_print();
}

}