#include "Admin.hpp"
#include "Guest.hpp"
#include "PrintVisitor.hpp"
#include <vector>

int main() {
    std::vector<IElement*> users = { new Admin(), new Guest() };
    PrintVisitor printer;

    for (auto& user : users)
        user->accept(&printer);

    for (auto& user : users)
        delete user;

    return 0;
}
