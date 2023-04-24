#pragma once
#include <string>

class Handler 
{
public:
    virtual void set_next(Handler* handler) = 0;
    virtual void handle(const std::string& request) = 0;
};
