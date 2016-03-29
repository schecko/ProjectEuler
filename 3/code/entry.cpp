

#include <iostream>

//const int targetVal = 600851475143;
const int targetVal = 13195;
int LargestPrimeFactor = 1;
int temp = 1;
int main()
{
    for (int i = 1; i < targetVal; i++)
    {
        if (i % targetVal == 0)
        {
            LargestPrimeFactor = i;
        }
    }
    std::cout << LargestPrimeFactor << std::endl;
    int x;
    std::cin >> x;
    return 0;
}