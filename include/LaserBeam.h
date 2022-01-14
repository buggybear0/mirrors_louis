#include <iostream>
#include <unordered_map>
#include <vector>
#include <map>
#include <memory>

#ifndef LASERBEAM_H
#define LASERBEAM_H
namespace std

{
    class LaserBeam
    {
    public:

        LaserBeam();

        string computeNextDirection(string const& currentDirection, int const& mirrorOrientation);
        vector<int> lastPointVisited_;
        vector<int> currentPoint_;
        string currentDirection_;
        int horizontalSegmentsCount_;
        int verticalSegmentsCount_;
        unordered_map<int, vector<int>> verticalSegments_;
        unordered_map<int, vector<int>> horizontalSegments_;
        bool isThereIntersections_;
        int computeIntersection();
        void goToNextPoint();
        vector<int> computeLexiFirst(vector<int> a, vector<int> b);
    };
}
#endif