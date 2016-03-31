

#include <iostream>


bool isPrime(uint64_t value)
{
    for (uint64_t i = 2; i < value; i++)
    {
        if (value % i == 0)
            return false;
    }
    return true;
}

int main()
{

    const uint64_t targetVal = 600851475143;
    uint64_t largestPrimeFactor = 1;

    for (uint64_t i = (uint64_t)sqrt(targetVal); i >= 2 ; i--)
    {
        if (targetVal % i == 0 && isPrime(i))
        {

            largestPrimeFactor = i;
            break;

        }
    }
    std::cout << largestPrimeFactor << std::endl;
    int x;
    std::cin >> x;
    return 0;
}