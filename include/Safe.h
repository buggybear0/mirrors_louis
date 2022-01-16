#include "LaserBeam.h"

#ifndef SAFE_H
#define SAFE_H
namespace std

{
    class Safe
    {
    public:
        Safe(int  r,
             int  c);
        // Getters to display the results
        vector<int> getResultIntersection();
        unordered_map<int, vector<int>> getIntersectionMap();
        int solve();
        // Adds a mirror with its orientation in the mirrorMap
        void updateMirrorMap(vector<int> mirrorPosition, int mirrorOrientation);

    private:
        // Safe rows and columns
        int  r_;
        int  c_;
        // Map containing mirror position and orientation
        map<vector<int>, int> mirrorPositions_;
        // Map containing the intersection points
        unordered_map<int, vector<int>> intersectionMap_;
        int indexIntersection_;
        // Intersection point after computeLexiFirst
        vector<int> resultIntersection_;


        vector<int> computeLexiFirst(vector<int> a, vector<int> b);
        int computeIntersection(unordered_map<int, vector<int>> horizontalSegments, unordered_map<int, vector<int>> verticalSegments_);

    };
}
#endif