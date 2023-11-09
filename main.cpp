#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main()
{
    cout << "Problem 1\n";
    cout << problemSolution1(29.9);
    cout << "Problem 2\n";
    cout << problemSolution2(89, 45, 1982);
    cout << "Problem 3\n";
    cout << problemSolution3(1.95, 'm');
    cout << "Problem 4\n";
    cout << problemSolution4("F0:FF:FF:FF:FF:F0");
    cout << "Problem 5\n";
    cout << problemSolution5(0.1, 0.1, '*');
    return 0;
}