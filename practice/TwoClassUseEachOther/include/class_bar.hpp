/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#ifndef TWOCLASSUSEEACHOTHER_CLASS_BAR_HPP
#define TWOCLASSUSEEACHOTHER_CLASS_BAR_HPP

namespace class_bar
{
namespace class_bar_2
{

class foo;
class bar;

class barBase
{
public:
    barBase();

};

class bar : public barBase
{
public:
    bar() = default;

    foo *getFoo();

    void bar_print();

protected:
    foo *f;
};

}   // class_bar_2
}   // bar

#endif //TWOCLASSUSEEACHOTHER_CLASS_BAR_HPP
