#include <string>

#include <catch2/catch.hpp>

#include "Specific1.hpp"

TEST_CASE("Specific1::GetName Correct result", "[Specific1 Unit Test]")
{
    Part1::Specific1 sut;

    // Here starts the test
    const std::string& result = sut.GetName();

    REQUIRE(result == "Specific1");
}