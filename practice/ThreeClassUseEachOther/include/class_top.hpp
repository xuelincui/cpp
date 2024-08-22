/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#ifndef THREECLASSUSEEACHOTHER_CLASS_TOP_HPP
#define THREECLASSUSEEACHOTHER_CLASS_TOP_HPP
#include "class_bar.hpp"
#include "class_foo.hpp"
#include "vector"

using namespace class_bar::class_bar_2;

class top
{
public:
    top(bar &b);
    void init();
    void top_print(int n);
private:
    class_foo::foo m_foo;
};

#endif //THREECLASSUSEEACHOTHER_CLASS_TOP_HPP
