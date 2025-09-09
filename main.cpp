#include <iostream>
#include <vector>

#include "calcmostwater.h"

int
main()
{
    auto printVector = []( const std::vector<int>& vec )
    {
        for( auto& it : vec )
            std::cout << it << " ";
    };
    std::vector<int> height = { 1, 8, 6, 2, 5, 4, 8, 3, 7 }; // - 49
    std::cout << "Most water from: ";
    printVector(height);
    std::cout << "\n -> " << MostWater::calculateMostWater(height) << std::endl;




    return 0;
}
