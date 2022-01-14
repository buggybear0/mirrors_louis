#include "LaserBeam.h"

#ifndef SAFE_H
#define SAFE_H
namespace std

{
    class Safe
    {
    public:

        Safe(int  r,
             int  c,
             int  m,
             int  n);


        vector<int> computeLexiFirst(vector<int> a, vector<int> b);
        int solve();
        bool runTrace(LaserBeam& trace);
        string computeNextDirection(string const& currentDirection, int const& mirrorOrientation);
        int computeIntersection(unordered_map<int, vector<int>>& horizontalSegments, unordered_map<int, vector<int>>& verticalSegments_);


        int  r_;
        int  c_;
        int  m_;
        int  n_;
        map<vector<int>, int> mirrorPositions_;
        unordered_map<int, vector<int>> intersectionMap_;
        bool didItReachDetector_;
        int indexIntersection_;
        vector<int> resultIntersection_;

    };
}
#endif