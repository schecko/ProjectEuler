

#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (i % 5 == 0 || i % 3 == 0)
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    int x;
    std::cin >> x;
    return 0;
}