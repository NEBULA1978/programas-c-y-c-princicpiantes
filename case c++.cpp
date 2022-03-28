#include <stdio.h>
#include <iostream>
int main()
{
    int n = 5;
    switch (n)
    {

    case 1:
        a(n);
        break;
    case 2:
        b(n);
        d(n);
        [[fallthrough]]; // I meant to do this!
    case 3:
        c(n);
        break;
    default:
        d(n);
        break;
    }

    return 0;
}
