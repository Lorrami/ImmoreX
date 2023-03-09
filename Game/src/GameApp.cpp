#include <ImmoreX.h>

#include <iostream>

class GameApp : public ImmoreX::Application
{
public:
    GameApp()
    {
        std::cout << "GameApp constructor" << std::endl;
    }

    ~GameApp()
    {
        std::cout << "GameApp destructor" << std::endl;
    }
};

int main()
{
    auto* app = new GameApp();
    app->Run();
    delete app;
}