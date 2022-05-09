#include <iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        return (high - low) / 2 + ((high & 1) | (low & 1));
    }
};

int main() {
    Solution s;
    int low = 3;
    int hight = 7;
    cout << s.countOdds(low, hight);
}
