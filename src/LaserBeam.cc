#include "LaserBeam.h"



namespace std
{
    LaserBeam::LaserBeam()

        : currentPoint_()
        , currentDirection_("")
        , verticalSegments_()
        , horizontalSegments_()
        , mirrorPositions_()
        , r_()
        , c_()

    {
    }


   void LaserBeam::init(map<vector<int>, int> mirrorPositions, int r, int c)
   {
       mirrorPositions_ = mirrorPositions;
       r_ = r;
       c_ = c;
   }
   void LaserBeam::goToNextPoint()
    {
        if (currentDirection_ == "left")
        {
            currentPoint_[1]-=1;
        }
        else if (currentDirection_ == "right")
        {
            currentPoint_[1]+=1;
        }
        else if (currentDirection_ == "up")
        {
            currentPoint_[0]-= 1;
        }
        else if (currentDirection_ == "down")
        {
            currentPoint_[0]+= 1;
        }
    }
    string LaserBeam::computeNextDirection(string currentDirection, int mirrorOrientation)
    {
        if (currentDirection == "right")
        {
            if (mirrorOrientation == 0)
            {
                return "up";
            }
            else if (mirrorOrientation == 1)
            {
                return "down";
            }
        }
        else if (currentDirection == "left")
        {
            if (mirrorOrientation == 0)
            {
                return "down";
            }
            else if (mirrorOrientation == 1)
            {
                return "up";
            }
        }
        else if (currentDirection == "down")
        {
            if (mirrorOrientation == 0)
            {
                return "left";
            }
            else if (mirrorOrientation == 1)
            {
                return "right";
            }
        }
        else if (currentDirection == "up")
        {
            if (mirrorOrientation == 0)
            {
                return "right";
            }
            else if (mirrorOrientation == 1)
            {
                return "left";
            }
        }
        return "";
    }
    void LaserBeam::setCurrentPoint(vector<int> point)
    {
        currentPoint_ = point;
    }
    void LaserBeam::setDirection(string direction)
    {
        currentDirection_ = direction;
    }

    bool LaserBeam::runTrace()
    {
        vector<int> origin = currentPoint_;
        int count = 0;
        int count2 = 0;
        bool done = false;
        // While the beam hasn't reached the limits of the safe
        while ((currentPoint_[0] != r_ and currentPoint_[1] != c_) and currentPoint_[0] != -1 and currentPoint_[1] != -1)
        {
            goToNextPoint();
            if (mirrorPositions_.count(currentPoint_) > 0)
            {
                vector<int> segment;
                if (currentDirection_ == "up" or currentDirection_ == "left")
                {

                    segment = {currentPoint_[0], currentPoint_[1], origin[0], origin[1]};
                }
                if (currentDirection_ == "right" or currentDirection_ == "down")
                {
                    segment = {origin[0], origin[1], currentPoint_[0], currentPoint_[1]};
                }
                if (currentDirection_ == "right" or currentDirection_ == "left")
                {
                    horizontalSegments_[count] = segment;

                    count+=1;
                }
                else
                {
                    verticalSegments_[count2] = segment;
                    count2+=1;

                }
                currentDirection_ = computeNextDirection(currentDirection_, mirrorPositions_.at(currentPoint_));
                origin = currentPoint_;
            }
        }
        // The segment calculation is different for the last one, so the logic is separated from the rest
        vector<int> finalSegment = {origin[0], origin[1], currentPoint_[0], currentPoint_[1]};
        if (currentDirection_ == "right" or currentDirection_ == "left")
        {
            horizontalSegments_[count] = finalSegment;
            count+=1;

        }
        else
        {
            verticalSegments_[count2] = finalSegment;
            count2+=1;

        }
        if (currentPoint_[0] >= r_-1 and currentPoint_[1] >= c_-1)
        {
            done = true;
        }
        return done;
    }
        

    unordered_map<int, vector<int>> LaserBeam::getHorizontalSegments()
    {
        return horizontalSegments_;
    }
    unordered_map<int, vector<int>> LaserBeam::getVerticalSegments()
    {
        return verticalSegments_;
    }










}