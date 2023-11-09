#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress)
{
    if (macAddress == "FF:FF:FF:FF:FF:FF")
        return "Broadcast";

    int x;

    std::string first = macAddress.substr(0, 2);

    std::stringstream stream;
    stream << first;
    stream >> std::hex >> x;

    return (x % 2)
               ? "Multicast"
               : "Unicast";
}
