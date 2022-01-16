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
        // Default constructor
        LaserBeam();
        // Setters to initialize position and direction of the beam
        void setCurrentPoint(vector<int> point);
        void setDirection(string direction);
        // Getters to compute the intersection point in Safe.cc
        unordered_map<int, vector<int>> getVerticalSegments();
        unordered_map<int, vector<int>> getHorizontalSegments();
        // Runs the laser beam until it exits the grid or reaches the detector. Updates the segment dictionaries
        bool runTrace();
        // Retrieves the mirror dictionary and the dimensions of the safe
        void init(map<vector<int>, int> mirrorPositions, int r, int c);


        private:
        // Current position in the safe
        vector<int> currentPoint_;
        // Current direction of the beam
        string currentDirection_;
        // Contains the segments traced by the passage of the laser beam
        unordered_map<int, vector<int>> verticalSegments_;
        unordered_map<int, vector<int>> horizontalSegments_;
        // Contains the mirrors and their orientations
        map<vector<int>, int> mirrorPositions_;
        // The safe dimensions in which the laser beam is running
        int r_;
        int c_;
        // Compute next position of the beam
        void goToNextPoint();
        // Compute next direction of the beam
        string computeNextDirection(string direction, int mirrorOrientation);
    
    };
}
#endif