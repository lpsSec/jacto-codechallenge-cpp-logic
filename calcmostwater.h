#ifndef CALCMOSTWATER_H
#define CALCMOSTWATER_H

#include <vector>
#include <algorithm>

namespace MostWater
{
    int calculateMostWater( const std::vector<int>& height )
    {
        size_t n = height.size();

        int mostWater = 0; // aka. maxArea
        int leftPos = 0, rightPos = n-1;
        int area;

        while(leftPos < rightPos)
        {
            area = (rightPos - leftPos) * std::min(height.at(leftPos), height.at(rightPos) );
            mostWater = std::max( mostWater, area );

            if( height[leftPos] <= height[rightPos] )
                leftPos++;
            else
                rightPos--;
        };


        return mostWater;
    }
}
#endif // CALCMOSTWATER_H
