#include <iostream>
using namespace std;

int main() {
    Pomodoro oop("Practicing OOP");
    Pomodoro polymorphism("Practicing Polymorphisim",30);
    Pomodoro *task = &oop;
    task->start();
    task->start();
    task->start();
    cout << endl;
    task = &polymorphism;
    task->start();
    task->start();
    task->start();
    task->start();
    task->setMinutes(4);
    cout << endl;

}