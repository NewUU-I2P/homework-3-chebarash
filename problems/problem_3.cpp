#include <string>

std::string problemSolution3(float height, char S)
{
    if (height < ((S == 'm') ? 1.7 : 1.6))
    {
        return "Short";
    }

    if (height < ((S == 'm') ? 1.85 : 1.75))
    {
        return "Normal";
    }

    return "Tall";
}