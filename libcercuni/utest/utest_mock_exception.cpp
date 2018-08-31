//
//  mock_exception_utest.cpp
//  cercuni
//
//  Created by Mitch Burghart on 2018/08/30.
//

#include <memory>
#include <iostream>
#include <gtest/gtest.h>
#include "cercuni.h"

TEST( mock_exception, create )
{
    mock_exception an_exception {};
    ASSERT_NE( an_exception.what(), nullptr );
}

class orange
{
public:
	orange( )
		: my_instance( next_instance++ ),
		message_count( 0 )
	{
		std::cerr << "class orange constructed, instance " << my_instance << std::endl;
	}

	~orange( )
	{
		std::cerr << "class orange destructed, instance " << my_instance << std::endl;
	}
	
	void a_message( )
	{
		std::cerr << "I am orange instance " << my_instance << ", report " << ++message_count << "." << std::endl;
	}

private:
	int my_instance;
	int message_count;
	static int next_instance;
};

int orange::next_instance = 1;

void throw_an_exception( )
{
	orange a_color;
	std::unique_ptr<orange> p_color { new orange( ) };
	mock_exception hidden_exception {};

	a_color.a_message( );
	throw mock_exception( );
	a_color.a_message( );
}

void wrapper_throw_an_exception( )
{
	std::unique_ptr<orange> p_color { new orange( ) };
	
	p_color->a_message( );
	throw_an_exception( );
	p_color->a_message( );
}

TEST( mock_exception, destruct_after_throw )
{
	orange a_color;
	try
	{
		a_color.a_message( );
		wrapper_throw_an_exception( );
		a_color.a_message( );
	}
	catch ( mock_exception& ex )
	{
		ASSERT_NE( ex.what(), nullptr );
		std::cerr << "exception: '" << ex.what() << "'" << std::endl;
	}
	a_color.a_message( );
}
