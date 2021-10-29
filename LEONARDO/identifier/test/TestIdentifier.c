#include "identifier.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Identifier);

TEST_SETUP(Identifier)
{
}

TEST_TEAR_DOWN(Identifier)
{
}

TEST(Identifier, TestID1)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(0, identifier("abc\n"));
  TEST_ASSERT_EQUAL(0, identifier("aaaaa\n"));
}

TEST(Identifier, TestID2)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("abcdef\n"));
}
