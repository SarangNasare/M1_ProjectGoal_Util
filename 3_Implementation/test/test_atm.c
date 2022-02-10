#include "unity.h"
#include "atm.h"

void setUp()
{
}

void tearDown()
{
}

int test_main(){
//initialize the unity test framework

  UNITY_BEGIN();

  RUN_TEST(test_Balanceenquiry);
  RUN_TEST(test_Deposit);
  RUN_TEST(test_Withdraw);

  return UNITY_END();

}
void test_Balanceenquiry()
{
   float x=25000;

   TEST_ASSERT_EQUAL (25000,Balanceenquiry(x));
  
   
}
void test_Deposit()
{
   float x=25000;
   int y=5000;

   TEST_ASSERT_EQUAL (30000,Deposit(x,y));
   
   
}

void test_Withdraw()
{
   float x=25000;
   int y=5000;

   TEST_ASSERT_EQUAL (20000,Deposit(x,y));
   
   
}