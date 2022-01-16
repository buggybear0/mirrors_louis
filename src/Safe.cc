#include "Safe.h"

namespace std
{
    Safe::Safe(int  r,
             int  c)

        : r_(r)
        , c_(c)
        , mirrorPositions_()
        , intersectionMap_()
        , indexIntersection_(0)
        , resultIntersection_(0)

    {
    }


    vector<int> Safe::getResultIntersection()
    {
        return resultIntersection_;
    }
    unordered_map<int, vector<int>> Safe::getIntersectionMap()
    {
        return intersectionMap_;
    }
    vector<int> Safe::computeLexiFirst(vector<int> a, vector<int> b)
    {
        if (a[0] < b[0])
        {
            return a;
        }
        else if (a[0] == b[0])
        {
            if (a[1] > b[1])
            {
                return b;
            }
            else{
                return a;
            }
        }
        else
        {
            return b;
        }
        return a;
    }


    int Safe::computeIntersection(unordered_map<int, vector<int>> horizontalSegments, unordered_map<int, vector<int>> verticalSegments)
    {
        int horizontalSegmentsCount = horizontalSegments.size();
        int verticalSegmentsCount = verticalSegments.size();
        if (horizontalSegmentsCount == 0 and verticalSegmentsCount == 0)
        {
            return 1;
        }
        else
        {
            for (int k = 0 ; k < horizontalSegmentsCount; k++)
            {
                for (int i = 0 ; i < verticalSegmentsCount; i++)
                {
                    if (horizontalSegments.at(k)[0] >= verticalSegments.at(i)[0] and horizontalSegments.at(k)[0] <= verticalSegments.at(i)[2])
                    {
                        if (verticalSegments.at(i)[1] >= horizontalSegments.at(k)[1])
                        {
                            vector<int> intersection = {horizontalSegments.at(k)[0], verticalSegments.at(i)[1]};
                            intersectionMap_[indexIntersection_] = intersection;
                            indexIntersection_ = indexIntersection_ + 1;
                        }
                    }
                }
            }
            if (intersectionMap_.size() != 0)
            {
                return 2;
            }

            return 1;
        }
    }

   
    int Safe::solve()
    {
        LaserBeam forwardTrace;
        vector<int> startForward{0,0};
        forwardTrace.init(mirrorPositions_, r_, c_);
        forwardTrace.setCurrentPoint(startForward);
        forwardTrace.setDirection("right");
        bool done = forwardTrace.runTrace();
        if (done == true)
        {
            return 0;
        }
        else
        {
            LaserBeam backTrace;
            vector<int> startBack{r_-1, c_-1};
            backTrace.init(mirrorPositions_, r_, c_);
            backTrace.setCurrentPoint(startBack);
            backTrace.setDirection("left");
            backTrace.runTrace();
            int result1 = computeIntersection(forwardTrace.getHorizontalSegments(), backTrace.getVerticalSegments());
            int result2 = computeIntersection(backTrace.getHorizontalSegments(), forwardTrace.getVerticalSegments());
            if (result1 == 2 or result2 == 2)
            {
                resultIntersection_ = computeLexiFirst(intersectionMap_.at(0), intersectionMap_.at(1));
                return 2;
            }
            else
            {
                return 1;
            }
        }

    }

    void Safe::updateMirrorMap(vector<int> mirrorPosition, int mirrorOrientation)
    {
        mirrorPositions_[mirrorPosition] = mirrorOrientation;
    }
}