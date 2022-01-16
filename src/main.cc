#include <iostream>
#include <cstdio>
#include "Safe.h"
#include "LaserBeam.h"

using namespace std;

int main(int argc, char** argv)
{
    Safe case1{5,6};
    case1.updateMirrorMap({1,2}, 0);
    case1.updateMirrorMap({0,1}, 1);
    case1.updateMirrorMap({1,4}, 1);
    case1.updateMirrorMap({3,1}, 1);
    case1.updateMirrorMap({4,4}, 1);
    int result = case1.solve();
    cout << "Case 1: " << case1.getIntersectionMap().size() << " " << case1.getResultIntersection()[0] + 1 << " " << case1.getResultIntersection()[1] + 1 << " " << endl;
    Safe case2{100, 100};
    case2.updateMirrorMap({0,76}, 1);
    case2.updateMirrorMap({99,76}, 1);

    cout << "Case 2: " << case2.solve() << endl;
    Safe case3{100, 100};
    cout << "Case 3: " << "impossible" << endl;
    return 0;
}