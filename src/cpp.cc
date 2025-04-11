#include"cpp.hh"

namespace dummyNamespace
{
    void SmallClass::publicMethod(int integer)
    {
        std::cout << "This is a public method with integer: " << integer << std::endl;
    }
    void SmallClass::privateMethod(int integer)
    {
        std::cout << "This is a private method with integer: " << integer << std::endl;
    }
} // namespace dummyNamespace