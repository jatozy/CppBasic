#pragma once

#include <Part1Interfaces/Component1FactoryInterface.h>

namespace Part1
{
class Specific1Factory : public Component1FactoryInterface
{
public:
    [[nodiscard]] std::unique_ptr<Component1Interface> CreateComponent1() const override;
};
} // namespace Part1