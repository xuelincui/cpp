/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#ifndef TWOCLASSUSEEACHOTHER_CLASS_FOO_HPP
#define TWOCLASSUSEEACHOTHER_CLASS_FOO_HPP

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

class foo;

class foo
{
public:
    foo() = default;
    bar* getBar();
    void foo_print_from_bar();
protected:
    bar* m_b;
};

}

#endif //TWOCLASSUSEEACHOTHER_CLASS_FOO_HPP
