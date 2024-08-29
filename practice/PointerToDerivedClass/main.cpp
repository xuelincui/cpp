#include <iostream>
#include "memory"

using namespace std;

template<class T>
class Base
{
public:
    Base() {};
    ~Base() {};
    virtual void Print()
    {
        std::cout << "Print from Base; m_val = " << m_val<< std::endl;
    }

    virtual void SetVal(T val)
    {
        m_val = val;
    }
private:
    T m_val;
};

class Derived1: public Base<int>
{
public:
    Derived1() {}
    void Print()
    {
        std::cout << "Print from Derived1; m_val = " << m_val<< std::endl;
    }

    void SetVal(int val)
    {
        m_val = val;
    }
private:
    int m_val;
};

class Derived2: public Base<int>
{
public:
    Derived2() {}
    void Print()
    {
        std::cout << "Print from Derived2; m_val = " << m_val<< std::endl;
    }

    void SetVal(int val)
    {
        m_val = val;
    }
private:
    int m_val;
};

class user
{
public:
    user();
    user(int type)
    :m_type(type)
    {
        switch(type)
        {
        case 1:
            m_ptr = make_unique<Derived1>();
            break;
        case 2:
            m_ptr = make_unique<Derived2>();
            break;
        default:
            break;
        }
    }

    ~user() {};
    void UserPrint()
    {
        m_ptr->Print();
    }

    void SetVal(int val)
    {
        m_ptr->SetVal(val);
    }
private:
    std::unique_ptr<Base<int>> m_ptr= make_unique<Base<int>>();
    int m_type;
};

int main()
{
    user a(1);
    user b(2);

    a.SetVal(15);
    b.SetVal(6);

    a.UserPrint();
    b.UserPrint();

    return 0;
}