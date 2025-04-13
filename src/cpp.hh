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
        int PublicMethod(int integer);
    
    private:
        void PrivateMethod(int integer);
    };
}