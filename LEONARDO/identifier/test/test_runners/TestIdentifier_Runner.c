#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Identifier)
{
  RUN_TEST_CASE(Identifier, TestID1);
  RUN_TEST_CASE(Identifier, TestID2);
}
