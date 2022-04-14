#include <iostream>
#include "CaptureDevice.hpp"

int main(int argc, char** argv)
{
    std::cout   << "Starting " << PROJECT_NAME << "...\n"
                << "Version: " << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR
                << std::endl;

    CaptureDevice cd = CaptureDevice();
    cd.init();
    cd.run();

    return 0;
}