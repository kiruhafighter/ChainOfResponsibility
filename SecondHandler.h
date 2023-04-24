#pragma once
#include "Handler.h"

class SecondHandler : public Handler {
public:
    void set_next(Handler* handler) override;

    void handle(const std::string& request) override;

private:
    Handler* next_handler_ = nullptr;
};

