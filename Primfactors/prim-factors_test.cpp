#include "gmock/gmock.h"
#include "prim-factors.cpp"

TEST(TC, OF1) {
    PrimeFactors prime_factor;
    vector<int> expected = {};

    EXPECT_EQ(expected, prime_factor.of(1));
}


TEST(TC, OF2) {
    PrimeFactors prime_factor;
    vector<int> expected = {2};

    EXPECT_EQ(expected, prime_factor.of(2));
}