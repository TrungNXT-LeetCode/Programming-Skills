#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        return (accumulate(salary.begin(), salary.end(), 0)
               - *max_element(salary.begin(), salary.end()) 
               - *min_element(salary.begin(), salary.end()))/
                (salary.size() - 2.0);
    }
};

int main() {
    Solution s;
    vector<int> a {4000,3000,1000,2000};
    cout << s.average(a);
}