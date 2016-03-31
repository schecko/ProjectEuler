#include <iostream>
#include <string>
#include <memory>
#include <fstream>

void Assert(bool test, char* message)
{
    if (!test)
    {
        std::cout << message << std::endl;
        int x;
        std::cin >> x;
    }
}

bool IsPalindrome(uint32_t value)
{
    std::string valueString = std::to_string(value);

    std::string leftSide = std::string(valueString.substr(0, (size_t)(valueString.size / 2)));
    for (uint32_t i = 0; i < leftSide.size; i++)
    {
        if (leftSide[leftSide.size - i - 1] != valueString[leftSide.size + i + 1])
        {
            return false;
        }
    }

    return false;
}


int main()
{
    uint32_t potentialPalindrome;
    bool found = false;
    for (uint32_t i = 999; i > 0; i--)
    {
        for (uint32_t j = 999; j > 0; j--)
        {
            potentialPalindrome = i * j;
            if (IsPalindrome(potentialPalindrome))
            {
                found = true;
                break;
            }
        }
        if (found == true)
        {
            break;
        }

    }
    std::cout << potentialPalindrome << std::endl;
    int x;
    std::cin >> x;

    return 0;
}