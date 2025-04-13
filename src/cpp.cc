#include"cpp.hh"

namespace dummyNamespace
{
    int SmallClass::PublicMethod(int integer)
    {
        std::cout << "This is a public method with integer: " << integer << std::endl;
        return 2*integer;
    }
    void SmallClass::PrivateMethod(int integer)
    {
        std::cout << "This is a private method with integer: " << integer << std::endl;
    }
} // namespace dummyNamespace