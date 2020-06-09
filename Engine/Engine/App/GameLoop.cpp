#include "GameLoop.h"


GameLoop::GameLoop()
{
    window = new Window(1280, 720, "Main Window");
    input = Input::getInstance();
    time = Time();
}

GameLoop::~GameLoop()
{
    delete input;
    delete window;
}

int GameLoop::gameLoop()
{
    while(true)
    {
        if(const auto code = Window::processMessage())
            return *code;

        manageInput();
    }
}

void GameLoop::manageInput()
{
    input->PollInput();

    if(input->getKeyDown(VK_MENU) && input->getKeyDown(Key_C))
    {
        PostQuitMessage(1);
    }


    std::stringstream ss;
    //ss << input->getMouseX() << "," << input->getMouseY();
    ss << "DeltaTime: " << time.getDeltaTime() << " Since start: " << time.getTimeSinceStart();
    window->setWindowTitle(ss.str().c_str());

    //std::cout << "Tick: " << time.getDeltaTime() << " Since start: " << time.getTimeSinceStart() << std::endl;
    time.Tick();
}
