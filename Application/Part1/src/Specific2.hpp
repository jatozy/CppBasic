#pragma once

#include <Part1Interfaces/Component1Interface.h>

namespace Part1
{
class Specific2 final : public Component1Interface
{
public:
    [[nodiscard]] const std::string& GetName() const noexcept override;

private:
    const std::string m_name = "Specific2";
};
} // namespace Part1