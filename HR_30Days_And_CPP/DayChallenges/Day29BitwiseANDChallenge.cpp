/*
	Hackerrank::Challenges::Day29::BitwiseAND
	https://www.hackerrank.com/challenges/30-bitwise-and/
	Solution Copyright(c) 2021 Officefish / Techies Team.
*/
#include ".././Challenges.h"
#include ".././HackerRankMiscellaneous.h"

namespace hrs {
	namespace {
        using std::string, std::vector;
        using std::cin, std::cout;
        using hr::split, hr::ltrim, hr::rtrim;

	}
    int32_t bitwiseAnd(int32_t N, int32_t K) {
        int32_t finalResult = 0;
        for (int32_t i = 1; i < N; ++i) {
            for (int32_t j = i + 1; j <= N; ++j) {
                int32_t _amp = i & j;
                if (_amp < K && _amp > finalResult)
                    finalResult = _amp;
            }
        }
        return finalResult;
    }

	void day29bitwiseAndChallenge() {
        string t_temp;
        getline(cin, t_temp);
        int t = stoi(ltrim(rtrim(t_temp)));
        for (int t_itr = 0; t_itr < t; t_itr++) {
            string first_multiple_input_temp;
            getline(cin, first_multiple_input_temp);
            vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
            int32_t count = stoi(first_multiple_input[0]);
            int32_t lim = stoi(first_multiple_input[1]);
            int32_t res = bitwiseAnd(count, lim);
            cout << res << "\n";
        }
	}
}
