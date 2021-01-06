#pragma once

#include <string>

namespace Part1
{
class Component1Interface
{
public:
    [[nodiscard]] virtual const std::string& GetName() const noexcept = 0;
};
} // namespace Part1