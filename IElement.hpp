#pragma once
#include "IVisitor.hpp"

class IElement {
public:
    virtual ~IElement() = default;
    virtual void accept(IVisitor* visitor) = 0;
};
