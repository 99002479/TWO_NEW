#include "unity.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_balance(void)
	{
  		TEST_ASSERT_EQUAL(950, checkbalance(1000, 50));
  		TEST_ASSERT_EQUAL(-50, checkbalance(100, 150));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_balance);

  		return UNITY_END();
	}
