#include "gmock/gmock.h"
#include "prim-factors.cpp"

using namespace testing;
class PrimeFixture : public Test {
    PrimeFactors prim_factor;
    vector<int> expected = {};
};

TEST_F(PrimeFixture, OF1) {
    PrimeFactors prime_factor;
    vector<int> expected = {};

    EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, OF2) {
    PrimeFactors prime_factor;
    vector<int> expected = {2};

    EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, OF3) {
    PrimeFactors prime_factor;
    vector<int> expected = { 3 };

    EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, OF4) {
    PrimeFactors prime_factor;
    vector<int> expected = { 2, 2 };

    EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, OF6) {
    PrimeFactors prime_factor;
    vector<int> expected = { 2, 3 };

    EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, OF9) {
    PrimeFactors prime_factor;
    vector<int> expected = { 3, 3 };

    EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, OF12) {
    PrimeFactors prime_factor;
    vector<int> expected = { 2, 2, 3 };

    EXPECT_EQ(expected, prime_factor.of(12));
}
