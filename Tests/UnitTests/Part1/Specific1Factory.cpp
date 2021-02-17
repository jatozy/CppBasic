#include <string>

#include <Part1Interfaces/Component1Interface.h>
#include <Specific1Factory.hpp>
#include <catch2/catch.hpp>

TEST_CASE("Specific1Factory::CreateCompoment1 Correct result", "[Specific1Factory Unit Test]")
{
    Part1::Specific1Factory sut;

    // Here starts the test.
    std::unique_ptr<Part1::Component1Interface> result = sut.CreateComponent1();

    REQUIRE(result);
    REQUIRE(result->GetName() == "Specific1");
}