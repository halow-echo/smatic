#include "func.h"

#include <iostream>
#include <thread>
#include <chrono>

void hello_world()
{
    std::cout << "Hello World!\n";
}

void task_wait(int n)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(n));
}