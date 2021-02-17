#pragma once

#include <memory>
#include <string>

namespace Part1
{
class Component1Interface;

class Component1FactoryInterface
{
public:
    [[nodiscard]] virtual std::unique_ptr<Component1Interface> CreateComponent1() const = 0;
};
} // namespace Part1