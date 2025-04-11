#pragma once

#include<iostream>

namespace dummyNamespace
{
    class SmallClass
    {
    public:
        SmallClass(int integer) : integer(integer){}

    public:
        int integer;
        void publicMethod(int integer);
    
    private:
        void privateMethod(int integer);
    };
}