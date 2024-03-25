#include <iostream>
#include "main.h"
#include "output.h"
#include "floating.h"
#include "decimal.h"

int main()
{
    output::about_me();
    output::variant();

    int s = 0, n = 1;
    double num;

    int h[H_3] = { 0, 0, 1 };
    int m[M_5] = { 0, 0, 0, 0, 0 };
    decimal::to_decimal(s, h, n, m, num);
    output::floating(s, h, n, m, "Min non zero", num);

    s = 1;
    h[0] = 1;
    h[1] = 1;
    h[2] = 0;
    for (int y = 0; y < 5; y++)
    {
        m[y] = 1;
    }
    decimal::to_decimal(s, h, n, m, num);
    output::floating(s, h, n, m, "Min", num);

    s = 0;
    decimal::to_decimal(s, h, n, m, num);
    output::floating(s, h, n, m, "Max", num);

    for (int y = 0; y < 3; y++)
    {
        h[y] = 0;
    }
    n = 0;
    for (int y = 0; y < 5; y++)
    {
        m[y] = 0;
    }
    decimal::to_decimal(s, h, n, m, num);
    output::floating(s, h, n, m, "+1,0E0", num);

    for (int y = 0; y < 3; y++)
    {
        h[y] = 1;
    }
    n = 1;
    decimal::to_decimal(s, h, n, m, num);
    output::floating(s, h, n, m, "plus inf", num);

    s = 1;
    decimal::to_decimal(s, h, n, m, num);
    output::floating(s, h, n, m, "minus inf", num);

    s = 0;
    for (int y = 0; y < 3; y++)
    {
        h[y] = 0;
    }
    m[4] = 1;
    n = 0;
    decimal::to_decimal(s, h, n, m, num);
    output::floating(s, h, n, m, "non normal", num);

    for (int y = 0; y < 3; y++)
    {
        h[y] = 1;
    }
    n = 1;
    s = 1;
    decimal::to_decimal(s, h, n, m, num);
    output::floating(s, h, n, m, "NaN", num);

    for (int y = 0; y < 3; y++)
    {
        h[y] = 0;
    }
    for (int y = 0; y < 5; y++)
    {
        m[y] = 0;
    }
    std::cout << " Input number\n";
    std::cin >> num;
    floating::to_floating(s, h, n, m, num);
    output::floating(s, h, n, m, "", num);
}