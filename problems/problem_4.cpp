#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress)
{
    if (macAddress == "FF:FF:FF:FF:FF:FF")
        return "Broadcast";

    std::string first = macAddress.substr(0, 2);

    return (first[1] == '0' || first[2] == '2' || first[2] == '4' || first[2] == '6' || first[2] == '8' || first[2] == 'A' || first[2] == 'C' || first[2] == 'E') ? "Unicast" : "Multicast";
}
