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
    cout << result << endl;


    return 0;
}