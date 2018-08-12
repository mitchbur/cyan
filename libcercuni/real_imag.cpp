#include "cercuni.h"
#include <cmath>

std::tuple<double, double>
real_imag( double arg )
{
	return std::make_tuple( std::cos(arg), std::sin(arg) );
}
