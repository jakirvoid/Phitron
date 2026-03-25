#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    long long M;
    cin >> S >> M;

    long long length_so_far = 0;

    for (int i = 0; i < S.size(); ++i) {
        char ch = S[i];
        long long count = 1; // default repeat = 1

        // Check if next character is a number
        if (i + 1 < S.size() && isdigit(S[i + 1])) {
            count = S[i + 1] - '0';
            i++; // skip the digit
        }

        length_so_far += count;

        if (length_so_far >= M) {
            cout << ch << endl;
            return 0;
        }
    }

    return 0; // M is always valid according to constraints
}
