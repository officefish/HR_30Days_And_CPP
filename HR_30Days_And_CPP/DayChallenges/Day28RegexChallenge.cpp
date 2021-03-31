/*
	Hackerrank::Challenges::Day28::Regex
	https://www.hackerrank.com/challenges/30-regex-patterns
	Solution Copyright(c) 2021 Officefish / Techies Team.
*/
#include ".././Challenges.h"
#include <algorithm>
#include <regex>

namespace hrs {
	namespace {
        using std::cin, std::cout, std::endl;
        using std::vector, std::string;
        using std::sort;
        using std::regex;
	}
    void day28RegexChallenge()
    {
        int N;
        cin >> N;
        regex e(".+@gmail\\.com$");
        vector<string> db;
        for (int a0 = 0; a0 < N; a0++) {
            string firstName;
            string emailID;
            cin >> firstName >> emailID;
            if (regex_match(emailID, e)) {
                db.push_back(firstName);
            }
        }
        sort(db.begin(), db.end());
        for (int i = 0; i < db.size(); i++) {
            cout << db[i] << endl;
        }
    }
}