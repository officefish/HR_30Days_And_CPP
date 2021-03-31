/*
	Hackerrank::Challenges::Day25::ComplexetyNumbers
	https://www.hackerrank.com/challenges/30-running-time-and-complexity/
	Solution Copyright(c) 2021 Officefish / Techies Team.
*/
#include ".././Challenges.h"
#include <array>

namespace hrs {
	namespace {
		using std::ios_base;
		using std::cin, std::cout, std::endl;
		using std::array;
	}
	void day26NestedLogicChallenge() {
		array<int, 3> actual, expected;
		cin >> actual[2] >> actual[1] >> actual[0];
		cin >> expected[2] >> expected[1] >> expected[0];
		const int32_t s0 = 10000 * (actual[0] > expected[0]);
		const int32_t s1 = 500 * (actual[1] > expected[1]);
		const int32_t s2 = 15 *  (actual[2] > expected[2]);
		int32_t _max = std::max(s0, s1);
		_max = std::max(_max, s2);
		std::cout << (actual <= expected ? 0 : _max );
	}
}