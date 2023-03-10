#include "Application.h"

#include <iostream>

namespace ImmoreX
{
    Application::Application()
    {
        std::cout << "Application constructor" << std::endl;
    }

    Application::~Application()
    {
        std::cout << "Application destructor" << std::endl;
    }

    void Application::Run()
    {
        while (true);
    }
}
