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

class foo;

template <typename T>
class barBase
{
public:
    barBase() = default;
    void barBase_print(int n) // function later gets called to add n to m_k
    {
        m_k += n;
        std::cout << "barBase printing m_k = " << m_k<< std::endl;
    }
private:
    int m_k = 1; // m_k initialized as 1
};

class bar : public barBase <int>
{
public:
    bar() = default;
    void bar_print();

private:

};

}   // class_bar_2
}   // bar

#endif //TWOCLASSUSEEACHOTHER_CLASS_BAR_HPP