/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#ifndef TWOCLASSUSEEACHOTHER_CLASS_BAR_HPP
#define TWOCLASSUSEEACHOTHER_CLASS_BAR_HPP

#include "iostream"

namespace class_bar
{
namespace class_bar_2
{

template <typename T>
class barBase
{
public:
    barBase() = default;
    virtual void bar_print(int n) = 0; // function later gets called to add n to m_k
    void call_bar_print(int n)
    {
        bar_print(n);
    }

private:

};

class bar : public barBase <int>
{
public:
    bar() = default;
    void bar_print(int n);

private:
    int m_k = 1; // m_k initialized as 1
};

}   // class_bar_2
}   // bar

#endif //TWOCLASSUSEEACHOTHER_CLASS_BAR_HPP