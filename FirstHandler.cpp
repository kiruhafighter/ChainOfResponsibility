#include "FirstHandler.h" 
#include <iostream>

void FirstHandler::set_next(Handler* handler)  
{
    next_handler_ = handler;
}

void FirstHandler::handle(const std::string& request) 
{
    if (request == "request1") {
        std::cout << "FirstHandler handles request1\n";
    }
    else if (next_handler_) {
        next_handler_->handle(request);
    }
    else {
        std::cout << "FirstHandler can't handle the request\n";
    }
}