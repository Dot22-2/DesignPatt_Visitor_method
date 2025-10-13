#include "Guest.hpp"
#include "IVisitor.hpp"
#include <string>
#include <iostream>

void Guest::accept(IVisitor* visitor) {
    visitor->visit(this);
}

std::string Guest::getGuestData() const {
    return "Guest access";
}
