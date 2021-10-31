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
  // This test will pass
  TEST_ASSERT_EQUAL(0, identifier("a\n"));
}

TEST(Identifier, TestID2)
{
  // This test will pass
  TEST_ASSERT_EQUAL(1, identifier("abcdef\n"));
}

TEST(Identifier, TestID3)
{
  // This test will pass
  TEST_ASSERT_EQUAL(0, identifier("abcde\n"));
}

TEST(Identifier, TestID4)
{
  // This test will pass
  TEST_ASSERT_EQUAL(1, identifier("abcdefg\n"));
}

TEST(Identifier, TestID5)
{
  // This test will pass
  TEST_ASSERT_EQUAL(0, identifier("ABCD\n"));
}

TEST(Identifier, TestID6)
{
  // This test will pass
  TEST_ASSERT_EQUAL(1, identifier("\n"));
}

TEST(Identifier, TestID7)
{
  // This test will pass
  TEST_ASSERT_EQUAL(1, identifier("1234\n"));
}

TEST(Identifier, TestID8)
{
  // This test will pass
  TEST_ASSERT_EQUAL(0, identifier("aBcdE\n"));
}

TEST(Identifier, TestID9)
{
  // This test will fail
  TEST_ASSERT_EQUAL(1, identifier("a\n"));
}

TEST(Identifier, TestID10)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("abcdef\n"));
}

TEST(Identifier, TestID11)
{
  // This test will fail
  TEST_ASSERT_EQUAL(1, identifier("abcde\n"));
}

TEST(Identifier, TestID12)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("abcdefg\n"));
}

TEST(Identifier, TestID13)
{
  // This test will fail
  TEST_ASSERT_EQUAL(1, identifier("ABCD\n"));
}

TEST(Identifier, TestID14)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("\n"));
}

TEST(Identifier, TestID15)
{
  // This test will fail
  TEST_ASSERT_EQUAL(0, identifier("1234\n"));
}

TEST(Identifier, TestID16)
{
  // This test will fail
  TEST_ASSERT_EQUAL(1, identifier("aBcdE\n"));
}
