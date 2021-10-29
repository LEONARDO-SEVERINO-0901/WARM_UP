#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Identifier)
{
  RUN_TEST_CASE(Identifier, TestID1);
  RUN_TEST_CASE(Identifier, TestID2);
  RUN_TEST_CASE(Identifier, TestID3);
  RUN_TEST_CASE(Identifier, TestID4);
  RUN_TEST_CASE(Identifier, TestID5);
  RUN_TEST_CASE(Identifier, TestID6);
  RUN_TEST_CASE(Identifier, TestID7);
}
