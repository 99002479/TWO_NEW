#include "unity.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_balance(void)
	{
  		TEST_ASSERT_EQUAL(950, checkbalance(1000, 50));
  		TEST_ASSERT_EQUAL(-50, checkbalance(100, 150));
		TEST_ASSERT_EQUAL(-150, checkbalance(-50, 100));
		TEST_ASSERT_EQUAL(-50, checkbalance(-50, 0));
		TEST_ASSERT_EQUAL(100, checkbalance(100, 0));
	}

	void test_accounttype(void)
	{
  		TEST_ASSERT_EQUAL(1, getaccounttype(1000, 50));
  		TEST_ASSERT_EQUAL(0, getaccounttype(100, 150));
		TEST_ASSERT_EQUAL(1, getaccounttype(100, 0));
		TEST_ASSERT_EQUAL(-1, getaccounttype(-100, 0));
	}


	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_balance);
		
		RUN_TEST(test_accounttype);

  		return UNITY_END();
	}
