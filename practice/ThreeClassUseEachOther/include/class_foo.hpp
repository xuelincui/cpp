/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#ifndef TWOCLASSUSEEACHOTHER_CLASS_FOO_HPP
#define TWOCLASSUSEEACHOTHER_CLASS_FOO_HPP
#include "stdio.h"

// forward declaration
namespace class_bar
{
namespace class_bar_2
{
class bar;
}
}

using namespace class_bar::class_bar_2;

namespace class_foo
{

class foo
{
public:
    foo();
    foo(double dt, bar& b, int n=5, bool flag=false);
    void foo_print_from_bar(int n);

private:
    bar* m_b = nullptr; // member point of class foo that points to class bar
    double m_dt;
    int m_int;
    bool m_flag;
};
}

#endif //TWOCLASSUSEEACHOTHER_CLASS_FOO_HPP
