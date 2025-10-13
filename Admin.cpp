#include "Admin.hpp"
#include "IVisitor.hpp"
#include <string>
#include <iostream>

void Admin::accept(IVisitor* visitor) {
    visitor->visit(this);
}

std::string Admin::getAdminData() const {
    return "Admin privileges";
}
