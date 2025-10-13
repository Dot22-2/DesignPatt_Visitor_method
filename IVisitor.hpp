#pragma once

class Admin;
class Guest;

class IVisitor {
public:
    virtual ~IVisitor() = default;
    virtual void visit(Admin* admin) = 0;
    virtual void visit(Guest* guest) = 0;
};
