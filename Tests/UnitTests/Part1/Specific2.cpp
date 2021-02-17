#include <string>

#include <catch2/catch.hpp>

#include "Specific2.hpp"

TEST_CASE("Specific2::GetName Correct result", "[Specific2 Unit Test]")
{
    Part1::Specific2 sut;

    // Here starts the test
    const std::string& result = sut.GetName();

    REQUIRE(result == "Specific2");
}