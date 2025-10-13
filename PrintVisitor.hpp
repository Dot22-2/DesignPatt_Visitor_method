#pragma once
#include "IVisitor.hpp"
#include <iostream>

class PrintVisitor : public IVisitor {
public:
    void visit(Admin* admin) override;
    void visit(Guest* guest) override;
};
