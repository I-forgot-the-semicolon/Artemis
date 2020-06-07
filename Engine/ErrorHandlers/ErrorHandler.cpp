#include "ErrorHandler.h"

ErrorHandler::ErrorHandler(int line, const char *file)
{
    this->line = line;
    this->file = file;
}

const char *ErrorHandler::what() const noexcept
{
    std::ostringstream oss;
    oss << getType() << std::endl << getOriginalString();
    errBuffer = oss.str();
    return errBuffer.c_str();
}

int ErrorHandler::getLine() const noexcept
{
    return line;
}

const std::string &ErrorHandler::getFile() const noexcept
{
    return file;
}

std::string ErrorHandler::getOriginalString() const noexcept
{
    std::ostringstream oss;
    oss << "[File] -> " << getFile() << std::endl << "[Line] -> " << getLine();
    return oss.str();
}

const char *ErrorHandler::getType() const noexcept
{
    return "Exception:";
}

ErrorHandler::ErrorHandler(int line, const char *file, const char *customError)
{
    this->line = line;
    this->file = file;
    this->customException = customError;
}
