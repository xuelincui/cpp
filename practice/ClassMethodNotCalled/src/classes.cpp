/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#include "../include/classes.hpp"
#include "memory"

// Ca
Ca::Ca()
{

}

int Ca::getVa()
{
    return m_va;
};

// Cb
Cb::Cb(int n)
{
    m_x = std::make_unique<Ca>();
    m_vb = n;
}

Cb::~Cb()
{
}

int Cb::getCa()
{
    return m_x->getVa() + m_vb;
}


