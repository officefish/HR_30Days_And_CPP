/*
	Hackerrank::Challenges::Day25::ComplexetyNumbers
	https://www.hackerrank.com/challenges/30-running-time-and-complexity/
	Solution Copyright(c) 2021 Officefish / Techies Team.
*/
#include ".././Challenges.h"

namespace hrs {
	namespace {
        using std::ios_base;
        using std::cin, std::cout, std::endl;
	}

    bool isPrime(long n) {
        int count = 0;
        // check lower boundaries on primality
        if (n == 2)
            return true;
        // 1 is not prime, even numbers > 2 are not prime
        else if (n == 1 || (n & 1) == 0)
            return false;
        // Check for primality using odd numbers from 3 to sqrt(n)
        for (int i = 3; i <= sqrt(n); i += 2) {
            count++;
            // n is not prime if it is evenly divisible by some 'i' in this range
            if (n % i == 0)
                return false;
        }
        // n is prime
        return true;
    }
    void validate(long v) {
        isPrime(v) ? cout << "Prime" : cout << "Not prime";
        cout << endl;
    }
    void day25compexityChallenge() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int nT;
        cin >> nT;
        int num;
        for (int i = 0; i < nT; ++i) {
            cin >> num;
            validate(num);
        }
    }
}

