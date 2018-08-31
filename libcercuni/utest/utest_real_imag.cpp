#include <gtest/gtest.h>
#include "cercuni.h"
#include <tuple>
#include <cmath>

// 51.5 binary-digit precision
#define DOUBLE_NEAR   ( 3.1402e-16 )

TEST( utest_real_imag, arg_zero )
{
	double input_val = 0.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, 1.0, DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, 0.0, DOUBLE_NEAR );
}

TEST( utest_real_imag, quarter_pi )
{
	double input_val = M_PI / 4.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, sqrt( 0.5 ), DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, sqrt( 0.5 ), DOUBLE_NEAR );
}

TEST( utest_real_imag, three_quarters_pi )
{
	double input_val = 3.0 * M_PI / 4.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, -sqrt( 0.5 ), DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, sqrt( 0.5 ), DOUBLE_NEAR );
}

TEST( utest_real_imag, five_quarters_pi )
{
	double input_val = 5.0 * M_PI / 4.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, -sqrt( 0.5 ), DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, -sqrt( 0.5 ), DOUBLE_NEAR );
}

TEST( utest_real_imag, seven_quarters_pi )
{
	double input_val = 7.0 * M_PI / 4.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, sqrt( 0.5 ), DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, -sqrt( 0.5 ), DOUBLE_NEAR );
}

TEST( utest_real_imag, neg_quarter_pi )
{
	double input_val = -M_PI / 4.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, sqrt( 0.5 ), DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, -sqrt( 0.5 ), DOUBLE_NEAR );
}

TEST( utest_real_imag, neg_three_quarters_pi )
{
	double input_val = -3.0 * M_PI / 4.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, -sqrt( 0.5 ), DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, -sqrt( 0.5 ), DOUBLE_NEAR );
}

TEST( utest_real_imag, neg_five_quarters_pi )
{
	double input_val = -5.0 * M_PI / 4.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, -sqrt( 0.5 ), DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, sqrt( 0.5 ), DOUBLE_NEAR );
}

TEST( utest_real_imag, neg_seven_quarters_pi )
{
	double input_val = -7.0 * M_PI / 4.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, sqrt( 0.5 ), DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, sqrt( 0.5 ), DOUBLE_NEAR );
}

TEST( utest_real_imag, half_pi )
{
	double input_val = M_PI / 2.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, 0.0, DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, 1.0, DOUBLE_NEAR );
}

TEST( utest_real_imag, neg_half_pi )
{
	double input_val = -M_PI / 2.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, 0.0, DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, -1.0, DOUBLE_NEAR );
}

TEST( utest_real_imag, pi )
{
	double input_val = M_PI;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, -1.0, DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, 0.0, DOUBLE_NEAR );
}

TEST( utest_real_imag, neg_pi )
{
	double input_val = -M_PI;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, -1.0, DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, 0.0, DOUBLE_NEAR );
}

TEST( utest_real_imag, three_halves_pi )
{
	double input_val = 3.0 * M_PI / 2.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, 0.0, DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, -1.0, DOUBLE_NEAR );
}

TEST( utest_real_imag, neg_three_halves_pi )
{
	double input_val = -3.0 * M_PI / 2.0;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, 0.0, DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, 1.0, DOUBLE_NEAR );
}

TEST( utest_real_imag, two_pi )
{
	double input_val = 2.0 * M_PI;
	double ucir_re;
	double ucir_im;
	std::tie( ucir_re, ucir_im ) = real_imag( input_val );
	ASSERT_NEAR( ucir_re, 1.0, DOUBLE_NEAR );
	ASSERT_NEAR( ucir_im, 0.0, DOUBLE_NEAR );
}
