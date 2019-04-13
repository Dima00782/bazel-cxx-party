#include "gtest/gtest.h"
#include "lib/cxx_lib.h"

namespace {

TEST(SquareTests, One) {
    EXPECT_EQ(4, Square(2));
}

} // namespace
