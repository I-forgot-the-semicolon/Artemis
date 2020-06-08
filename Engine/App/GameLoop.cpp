#include "GameLoop.h"


GameLoop::GameLoop()
{
    window = new Window(1280, 720, "Main Window");
    input = Input::getInstance();
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

    if(!input->isInWindow())
    {
        std::cout << "out!" << std::endl;
    }
    else
    {
        std::cout << "in!" << std::endl;
    }

    std::stringstream ss;
    ss << input->getMouseX() << "," << input->getMouseY();
    window->setWindowTitle(ss.str().c_str());
}
