#pragma once
#include "IElement.hpp"
#include <string>

class Guest : public IElement {
public:
    void accept(IVisitor* visitor) override;
    std::string getGuestData() const;
};
