#pragma once
#include "IElement.hpp"
#include <string>

class Admin : public IElement {
public:
    void accept(IVisitor* visitor) override;
    std::string getAdminData() const;
};
