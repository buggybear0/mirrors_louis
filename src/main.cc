#include <iostream>
#include <cstdio>
#include "Safe.h"
#include "LaserBeam.h"

using namespace std;

int main(int argc, char** argv)
{
    Safe case1{5,6,1,4};
    case1.mirrorPositions_[{1,2}] = 0;
    case1.mirrorPositions_[{0,1}] = 1;
    case1.mirrorPositions_[{1,4}] = 1;
    case1.mirrorPositions_[{3,1}] = 1;
    case1.mirrorPositions_[{4,4}] = 1;
    int result = case1.solve();
    cout << "Case 1: " << case1.intersectionMap_.size() << " " << case1.resultIntersection_[0] + 1 << " " << case1.resultIntersection_[1] + 1 << " " << endl;

    Safe case2{100, 100, 0, 2};
    case2.mirrorPositions_[{0, 76}] = 1;
    case2.mirrorPositions_[{99, 76}] = 1;
    cout << "Case 2: " << case2.solve() << endl;
    Safe case3{100, 100, 0, 0};
    cout << "Case 3: " << "impossible" << endl;
    return 0;
}