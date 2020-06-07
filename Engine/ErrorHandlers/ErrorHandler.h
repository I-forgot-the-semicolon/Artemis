#ifndef ART_DEV_ERRORHANDLER_H
#define ART_DEV_ERRORHANDLER_H
#include <iostream>
#include <sstream>

class ErrorHandler : public std::exception
{
private:
    int line;
    std::string file;

protected:
    mutable std::string errBuffer;
    std::string customException;
public:
    ErrorHandler(int line, const char* file);
    ErrorHandler(int line, const char* file, const char *customError);
    const char* what() const noexcept override;
    virtual const char *getType() const noexcept;
    int getLine() const noexcept;
    const std::string& getFile() const noexcept;
    std::string getOriginalString() const noexcept ;
};


#endif
