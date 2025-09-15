#include <iostream>

class Window {
public:
    void open() {
        std::cout << "Окно открыто" << std::endl;
    }

    void close() {
        std::cout << "Окно закрыто" << std::endl;
    }
};

int main() {
    Window w;
    w.open();
    w.close();
    return 0;
}
