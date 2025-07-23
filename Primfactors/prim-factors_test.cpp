#include "gmock/gmock.h"
#include "prim-factors.cpp"

TEST(TC, TC1) {
    PrimeFactors prime_factor;
    vector<int> expected = {};

    EXPECT_EQ(expected, prime_factor.of(1));
}