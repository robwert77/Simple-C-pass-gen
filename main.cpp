#include <iostream>
#include<cstdlib>
#include<ctime>

const char alphanum[] = "0123456789!abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char specialF[] = "!@#$ % ^&*0123456789!abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum) - 1;
int string_lengthF = sizeof(specialF) - 1;

int main()
{
    int n;
    int special;

    std::cout << "Enter character ammount:";
    std::cin >> n;

    std::cout << "would you like to use special characters?";
    std::cin >> special;

    if (special == 1)
    {
        srand(time(0));
        std::cout << "Generated password:";
        for (int i = 0; i < n; i++)
            std::cout << specialF[rand() % string_lengthF];
    }
        
    if (special == 0)
    {
        srand(time(0));
        std::cout << "Generated password:";
        for (int i = 0; i < n; i++)
            std::cout << alphanum[rand() % string_length];
    }
    return 0;
}