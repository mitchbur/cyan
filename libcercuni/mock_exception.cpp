#include "cercuni.h"
#include <iostream>

int mock_exception::next_instance = 1;
mock_exception::mock_exception( )
{
    my_instance = next_instance++;
    std::cerr << "*** mock_exception constructed, " << instance() << std::endl;
}

mock_exception::~mock_exception( )
{
    std::cerr << "*** mock_exception destructed, " << instance() << std::endl;
}

const char* mock_exception::what( ) const noexcept
{
    static const char* const message = "A mock exception message";
    return message;
}
