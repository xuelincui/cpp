/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#ifndef CLASSMETHODNOTCALLED_CLASSES_HPP
#define CLASSMETHODNOTCALLED_CLASSES_HPP

#include "iostream"
#include "memory"

class Ca
{
    int m_va = 5;
public:
    Ca();
    int getVa();
};


class Cb
{
    std::unique_ptr<Ca> m_x;
    int m_vb;
public:
    explicit Cb(int n);

    Cb (Cb&&) = default;
    ~Cb();
    int getCa();
};
#endif //CLASSMETHODNOTCALLED_CLASSES_HPP
