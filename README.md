# C++ Visitor Method

This repository demonstrates a clean implementation of the **Visitor** design pattern in C++ for a console-based application.

---

## Project Structure

- `IElement.hpp` – Interface for elements that accept visitors  
- `IVisitor.hpp` – Interface for visitor operations  
- `Admin.hpp / Admin.cpp` – Concrete element representing an admin  
- `Guest.hpp / Guest.cpp` – Concrete element representing a guest  
- `PrintVisitor.hpp / PrintVisitor.cpp` – Concrete visitor that prints element data  
- `main.cpp` – Entry point showcasing how visitors interact with elements  

---

### Requirements

- **Compiler**: Tested with `MSVC v19.44` (Visual Studio 2022)  
- **C++ Standard**: C++17 or higher  

---

## Usage Example

```cpp
std::vector<IElement*> users = { new Admin(), new Guest() };
PrintVisitor printer;

for (auto* user : users) {
    user->accept(printer);
}
