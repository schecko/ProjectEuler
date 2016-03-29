
#include <iostream>


const int FOUR_MILLION = 4000000;

int main()
{
    int first = 1;
    int second = 2;
    int temp;

    //the first values arent calcualted as part of the sum,
    //so I just initialized the sum to 2.
    int sum = 2;
    while (second < FOUR_MILLION)
    {
        temp = second;
        second += first;
        first = temp;

        if (second % 2 == 0)
        {
            sum += second;
        }
    }
    std::cout << sum << std::endl;
    int x;
    std::cin >> x;
    return 0;

}