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
}

TEST(Identifier, TestID2)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(0, identifier("aaaaa\n"));
}

TEST(Identifier, TestID3)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("abcdef\n"));
}

TEST(Identifier, TestID4)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("12345\n"));
}

TEST(Identifier, TestID5)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(0, identifier("ABCD\n"));
}

TEST(Identifier, TestID6)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("\n"));
}

TEST(Identifier, TestID7)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("abcdefg\n"));
}
