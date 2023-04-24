#include "SecondHandler.h" 
#include <iostream>

void SecondHandler::set_next(Handler* handler)
{
    next_handler_ = handler;
}

void SecondHandler::handle(const std::string& request)
{
    if (request == "request2") {
        std::cout << "SecondHandler handles request2\n";
    }
    else if (next_handler_) {
        next_handler_->handle(request);
    }
    else {
        std::cout << "SecondHandler can't handle the request\n";
    }
}
