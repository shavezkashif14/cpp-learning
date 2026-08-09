#include <iostream>

int main()
{
    int score = 63;

    if (score < 0 || score > 100)
    {
        std::cout << "Invalid Score";
    }
    else
    {
        if (score < 50)
        {
            std::cout << "Failed";
        }
        else if (score >= 90)
        {
            std::cout << "Passed A";
        }
        else if (score >= 80)
        {
            std::cout << "Passed B";
        }
        else if (score >= 70)
        {
            std::cout << "Passed C";
        }
        else if (score >= 60)
        {
            std::cout << "Passed D";
        }
        else
        {
            std::cout << "Passed E";
        } 
    }
    
    return 0;
}