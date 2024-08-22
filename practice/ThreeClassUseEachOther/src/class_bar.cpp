/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#include "../include/class_bar.hpp"
#include <iostream>

namespace class_bar
{
namespace class_bar_2
{

void bar::bar_print(int n)
{
    m_k += n;
    std::cout << "barBase printing m_k = " << m_k<< std::endl;
}

}   // class_bar2
}   // class_bar