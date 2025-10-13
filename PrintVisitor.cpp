#include "PrintVisitor.hpp"
#include "Admin.hpp"
#include "Guest.hpp"

void PrintVisitor::visit(Admin* admin) {
    std::cout << "[Visitor] Admin -> " << admin->getAdminData() << "\n";
}

void PrintVisitor::visit(Guest* guest) {
    std::cout << "[Visitor] Guest -> " << guest->getGuestData() << "\n";
}
