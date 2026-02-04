#include <iostream>

int main(int argc, char* argv[])
{
    std::string min = argv[1];
    std::string sec = argv[2];

    int sec_num = std::stoi(sec);

    int min_ = std::stoi(min) % 12 * 30 + sec_num * 0.5;

    int sec_ = std::stoi(sec) % 60 * 6;

    int angle = std::abs(min_ - sec_);

    if (angle > 180)
        angle = 360 - angle;

    std::cout << angle << std::endl;
    return 0;
}