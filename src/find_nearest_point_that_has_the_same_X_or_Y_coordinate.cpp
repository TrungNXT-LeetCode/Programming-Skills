#include <stdint.h>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>


using namespace std;

class Solution {
public:
    int nearestValidPoint(int x, int y, vector< vector<int> >& points) {
        vector< vector<int> > valid_points;
        vector<int> output;
        int count = 0;
        int check = 0;
        int out = 0;
        int c = 0;
        int min_manhattan_distance;

        for (int i = 0; i<points.size(); i++) {
            if ( ((x == points[i][0]) && (y != points[i][1])) || ((x != points[i][0]) && (y == points[i][1])) {
                valid_points.insert(valid_points.begin() + count, points[i]);
                count++;
            }
            else if (x == points[i][0] && y == points[i][1])
                return 0;
            else
                check++; 
        }
        
        if (check == points.size())
            return -1;

        min_manhattan_distance = abs(x - valid_points[0][0]) + abs(y - valid_points[0][1]);
        output.insert(output.begin(), valid_points[0][0]);
        
        for (int i = 1; i<count; i++) {
            if ((abs(x - valid_points[i][0]) + abs(y - valid_points[i][1])) < min_manhattan_distance) {
                min_manhattan_distance = abs(x - valid_points[i][0]) + abs(y - valid_points[i][1]);
                output.insert(output.begin() + c, valid_points[i][0]);
                c++;
            }
        }

        sort(output.begin(), output.end());
        out = output[0];
        return out;
    }
};

int main() {
    Solution s;
    vector< vector<int> > v {{2, 3}};
    printf("%d", s.nearestValidPoint(3, 4, v));    
    return 0;
}
