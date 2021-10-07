#include "point.h""

int main()
{
    Point uno(2, 4);
    Point dos(4, 2);

    std::cout << uno.getX() << " " << uno.getY() << std::endl;
    uno + dos;
    std::cout << uno.getX() << " " << uno.getY() << std::endl;
    Point middle(uno.middle(dos));
    std::cout << middle.getX() << " " << middle.getY() << std::endl;
    std::cout << "Hello World!\n";
}

