#include "LaserBeam.h"



namespace std
{
    LaserBeam::LaserBeam()

        : lastPointVisited_()
        , currentPoint_()
        , currentDirection_("")
        , horizontalSegmentsCount_()
        , verticalSegmentsCount_()
        , verticalSegments_()
        , horizontalSegments_()
        , isThereIntersections_(false)

    {
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










}