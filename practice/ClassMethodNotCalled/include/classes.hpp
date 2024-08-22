/******************************************************************************
 * Copyright (c) 2024 Alert Innovation, Inc.
 *****************************************************************************/

#ifndef CLASSMETHODNOTCALLED_CLASSES_HPP
#define CLASSMETHODNOTCALLED_CLASSES_HPP

#include "iostream"

class BaseA
{
public:
    virtual void methodA() = 0;
};

class BaseB
{
public:
    virtual void methodB(int val) = 0;
};

class Child : public BaseA, public BaseB
{
public:
    void methodA() override
    {
        printf("Child A\n");
    }
    void methodB(int val) override
    {
        printf("Child B %d\n", val);
    }
};

#endif //CLASSMETHODNOTCALLED_CLASSES_HPP
