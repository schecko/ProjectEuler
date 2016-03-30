

#include <iostream>

const unsigned int targetVal = 600851475143;
//int targetVal = 13195;
int largestPrimeFactor = 1;

bool isPrime(unsigned int value)
{
    for (unsigned int i = 2; i < value; i++)
    {
        if (value % i == 0)
            return false;
    }
    return true;
}

int main()
{
    for (unsigned int i = 2; i < sqrt(targetVal); i++)
    {
        if (targetVal % i == 0)
        {
            if (isPrime(i))
            {
                largestPrimeFactor = i;
            }
        }
    }
    std::cout << largestPrimeFactor << std::endl;
    int x;
    std::cin >> x;
    return 0;
}