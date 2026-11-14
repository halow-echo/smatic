#include "func.h"

#include <iostream>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        hello_world();
        task_wait(500);
    }

    return 0;
}