#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#endif

#include "catch.hpp"
#include "../calcmostwater.h"

TEST_CASE("Case #1")
{
    std::vector<int> input = {1,8,6,2,5,4,8,3,7};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 49 );
}

TEST_CASE("Case #2")
{
    std::vector<int> input = {1,1};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 1 );
}

TEST_CASE("Case #3")
{
    std::vector<int> input = {1,2,1};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 2 );
}

TEST_CASE("Case #4")
{
    std::vector<int> input = {1,3,2,5,25,24,5};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 24 );
}

TEST_CASE("Case #5")
{
    std::vector<int> input = {1,2,4,3};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 4 );
}

TEST_CASE("Case #6")
{
    std::vector<int> input = {2,3,4,5,18,17,6};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 17 );
}

TEST_CASE("Case #7")
{
    std::vector<int> input = {7,10,6,2,5,4,8,3,7};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 56 );
}

TEST_CASE("Case #8")
{
    std::vector<int> input = {5,4,3,2,1};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 6 );
}

TEST_CASE("Case #9")
{
    std::vector<int> input = {3,6,1};

    auto output = MostWater::calculateMostWater( input );

    REQUIRE( input.size() != 0 );
    REQUIRE( output == 3 );
}
