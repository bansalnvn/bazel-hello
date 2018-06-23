#define BOOST_TEST_MODULE your_test_module
#include <boost/test/included/unit_test.hpp>
#include "add.h"

BOOST_AUTO_TEST_CASE(test1)
{
	BOOST_TEST(add(2,2) == 4);
}
