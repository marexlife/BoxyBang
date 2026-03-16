#include "App.h"
#include <exception>
#include <iostream>

int main(const int argc, const char* const* const argv)
{
    try
    {
        BoxyBang::App::App().Run();
    }
    catch (const std::exception& e)
    {
        std::operator<<(
            std::operator<<(
                std::cout,
                "App failed to execute with error: "),
            e.what());
    }
}