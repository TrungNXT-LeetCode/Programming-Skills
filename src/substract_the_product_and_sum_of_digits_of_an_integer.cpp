#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product_of_digits = 1;
        int sum_of_digits = 0;
        while (n != 0)
        {
            int i = n%10;
            product_of_digits *= i;
            sum_of_digits += i;
            n = n/10;
        };
        return (product_of_digits - sum_of_digits);
    }
};

int main() {
    Solution s; 
    int n = 234;
    cout << s.subtractProductAndSum(234);
}