#include <iostream>
#include <windows.h>

int money;
bool running;

void init()
{
    running = true;
    money = 0;
}

void print()
{
    system("cls");
    std::cout << "money : " << money << std::endl;
}

int main() {
    init();
    while (running)
    {
        int x;
        std::cin >> x;
        if (!x) {
            running = false;
            std::cout << "End" << std::endl;
        } else {
            money++;
            print();
        }
    }
    return 0;
}