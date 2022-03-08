//ex10_21
#include <iostream>

int reduce(int i)
{
    bool is0 = false;
    [&i] () -> bool {
        if (i != 0)
            --i;
        else
            return true;
    };
}

