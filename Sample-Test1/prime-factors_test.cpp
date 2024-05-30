#include "pch.h"
#include "../Project15/prime-factors.cpp"

using namespace std;


class PrimeTestFixture : public testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeTestFixture, PrimeTest1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeTestFixture, PrimeTest2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));

>>>>>>> b7472b1c9b2066d6564f3c566bec2df0653be22c
}