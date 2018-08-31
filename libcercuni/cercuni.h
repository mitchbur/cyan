#ifndef CERCUNI_H_INCLUDED
#define CERCUNI_H_INCLUDED

#include "cercuni_config.h"
#include <tuple>
#include <memory>
#include <exception>

std::tuple<double, double> real_imag( double arg );

class mock_exception : public std::exception
{
public:
	mock_exception( );
	~mock_exception( );
	
	virtual const char* what( ) const noexcept;
    inline int instance( ) const
    {
        return my_instance;
    }

private:
    int my_instance;
    static int next_instance;
};

#endif /* end of include guard:  */
