#include "Safe.h"

namespace std
{
    Safe::Safe(int  r,
             int  c,
             int  m,
             int  n)
        : r_(r)
        , c_(c)
        , m_(m)
        , n_(n)
        , mirrorPositions_()
        , intersectionMap_()
        , didItReachDetector_(false)
        , indexIntersection_(0)
        , resultIntersection_(0)

    {
    }

    string Safe::computeNextDirection(string const& currentDirection, int const& mirrorOrientation)
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
    vector<int> Safe::computeLexiFirst(vector<int> a, vector<int> b)
    {
        if (a[0] < b[0])
        {
            return a;
        }
        else if (a[0] == b[0])
        {
            if (a[1] < b[1])
            {
                return a;
            }
        }
        else
        {
            return b;
        }
        return a;
    }


    int Safe::computeIntersection(unordered_map<int, vector<int>>& horizontalSegments, unordered_map<int, vector<int>>& verticalSegments)
    {

        int horizontalSegmentsCount = horizontalSegments.size();
        int verticalSegmentsCount = verticalSegments.size();
        cout << horizontalSegmentsCount << endl;
        cout << verticalSegmentsCount << endl;
        // cout << horizontalSegments.at(0)[3] << endl;
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
                    cout << "index" << endl;
                    cout << k << endl;
                    cout << i << endl;
                    cout << verticalSegments.at(i)[1] << endl;
                    cout << horizontalSegments.at(k)[1] << endl;

                    if (horizontalSegments.at(k)[0] >= verticalSegments.at(i)[0] and horizontalSegments.at(k)[0] <= verticalSegments.at(i)[2])
                    {
                        cout << "daaaaaaaaaaa" << endl;
                        if (verticalSegments.at(i)[1] >= horizontalSegments.at(k)[1])
                        {
                            cout << "hooooo" << endl;

                            vector<int> intersection = {horizontalSegments.at(k)[0], verticalSegments.at(i)[1]};
                            cout << intersection[0] << endl;
                            cout << intersection[1] << endl;

                            intersectionMap_[indexIntersection_] = intersection;
                            indexIntersection_ = indexIntersection_ + 1;
                        }
                    }
                }
            }
            return 2;
        }
    }

    bool Safe::runTrace(LaserBeam& trace)
    {
        vector<int> end{r_-1, c_-1};
        vector<int> origin = trace.currentPoint_;
        int count = 0;
        int count2 = 0;

        while (trace.currentPoint_[0] != r_ and trace.currentPoint_[1] != c_)
        {
            trace.goToNextPoint();
            if (mirrorPositions_.count(trace.currentPoint_) > 0)
            {
                vector<int> segment = {origin[0], origin[1], trace.currentPoint_[0], trace.currentPoint_[1]};
                if (trace.currentDirection_ == "right" or trace.currentDirection_ == "left")
                {
                    trace.horizontalSegments_[count] = segment;

                    count+=1;
                }
                else
                {
                    trace.verticalSegments_[count2] = segment;
                    count2+=1;
                    cout << "hehe" << endl;
                    cout << trace.verticalSegments_.count(1) << endl;
                }
                trace.currentDirection_ = computeNextDirection(trace.currentDirection_, mirrorPositions_.at(trace.currentPoint_));
                origin = trace.currentPoint_;
            }
        }
        vector<int> finalSegment = {origin[0], origin[1], trace.currentPoint_[0], trace.currentPoint_[1]};
        if (trace.currentDirection_ == "right" or trace.currentDirection_ == "left")
        {
            trace.horizontalSegments_[count] = finalSegment;
            count+=1;

        }
        else
        {
            trace.verticalSegments_[count2] = finalSegment;
            count2+=1;
            cout << "hehe" << endl;

        }
        if (trace.currentPoint_[0] >= r_-1 and trace.currentPoint_[1] >= c_-1)
        {
            didItReachDetector_ = true;
        }
        return didItReachDetector_;
    }



    int Safe::solve()
    {
        LaserBeam forwardTrace;
        vector<int> startForward{0,0};
        forwardTrace.currentPoint_ = startForward;
        forwardTrace.currentDirection_ = "right";
        cout << "forward" << endl;
        bool done = runTrace(forwardTrace);
        cout << "ha" << endl;
        cout << forwardTrace.currentPoint_[0] << endl;
        if (done == true)
        {
            return 0;
        }
        else
        {
            LaserBeam backTrace;
            vector<int> startBack{r_-1, c_-1};
            backTrace.currentPoint_ = startBack;
            backTrace.currentDirection_ = "left";
            cout << "back" << endl;
            runTrace(backTrace);
            cout << "HERE" << endl;
            int result1 = computeIntersection(forwardTrace.horizontalSegments_, backTrace.verticalSegments_);
            cout << "hi" << endl;
            int result2 = computeIntersection(backTrace.horizontalSegments_, forwardTrace.verticalSegments_);
            cout << "tatatata" << endl;
            cout << backTrace.verticalSegments_.at(0)[2] << endl;
            cout << backTrace.verticalSegments_.at(0)[3] << endl;
            cout << forwardTrace.horizontalSegments_.at(1)[2] << endl;
            cout << forwardTrace.horizontalSegments_.at(1)[3] << endl;
            if (result1 == 2 or result2 == 2)
            {
                cout << "haloa" << endl;
                cout << intersectionMap_.size() << endl;
                cout << indexIntersection_ << endl;
                cout << "here" << endl;
                cout << intersectionMap_.at(1)[0] << endl;
                cout << intersectionMap_.at(1)[1] << endl;
                cout << "here2" << endl;
                resultIntersection_ = computeLexiFirst(intersectionMap_.at(0), intersectionMap_.at(1));
                return 2;
            }
            else
            {
                return 1;
            }
        }

    }
}