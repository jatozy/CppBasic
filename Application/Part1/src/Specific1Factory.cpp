#include "Specific1Factory.hpp"

#include "Specific1.hpp"

std::unique_ptr<Part1::Component1Interface> Part1::Specific1Factory::CreateComponent1() const
{
    return std::make_unique<Specific1>();
}
