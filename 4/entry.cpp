#include <iostream>
#include <string>
#include <fstream>

using namespace std;

typedef unsigned int uint;

#define BREAK_POINT asm("int $3");

void Assert(bool test)
{
    if(!test)
    {
        cout << "test failed" << endl;
    }
}


bool IsPalindrome(int value)
{
    string valueString = to_string(value);

    for (uint i = 0; i < valueString.size() / 2; i++)
    {
        char leftCompare = valueString.c_str()[i];
        char rightCompare = valueString.c_str()[valueString.size() - i - 1];
        if (leftCompare != rightCompare)
        {
            return false;
        }
    }

    return true;
}

const int MAX_3_DIGIT_NUMBER = 999;
int main()
{

    { // test palindrome
        Assert(IsPalindrome(0) == true);
        Assert(IsPalindrome(1) == true);
        Assert(IsPalindrome(11) == true);
        Assert(IsPalindrome(101) == true);
        Assert(IsPalindrome(111) == true);
        Assert(IsPalindrome(1001) == true);
        Assert(IsPalindrome(10001) == true);
        Assert(IsPalindrome(10101) == true);


        Assert(IsPalindrome(10) == false);
        Assert(IsPalindrome(100) == false);
        Assert(IsPalindrome(1000) == false);
        Assert(IsPalindrome(1011) == false);
        Assert(IsPalindrome(1100) == false);
        Assert(IsPalindrome(1110) == false);
        Assert(IsPalindrome(10000) == false);
        Assert(IsPalindrome(10011) == false);
    }



    int potentialPalindrome;
    for (int i = MAX_3_DIGIT_NUMBER; i > 0; i--)
    {
        for (int j = MAX_3_DIGIT_NUMBER; j > 0; j--)
        {
            potentialPalindrome = i * j;
            if (IsPalindrome(potentialPalindrome))
            {
                goto done;
            }
        }

    }

    done:
    cout << potentialPalindrome << endl;
    int x;
    cin >> x;

    return 0;
}
